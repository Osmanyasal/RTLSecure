`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Osman Yasal
// 
// Create Date: 28.05.2026
// Design Name: RTLCryption
// Module Name: tb_AES_stream
// Project Name: RTLCryption
// Target Devices: 
// Tool Versions: 
// Description: Continuous streaming testbench for chained AES Encrypt/Decrypt
//              using a queue-based scoreboard for self-checking verification.
//////////////////////////////////////////////////////////////////////////////////

module tb_AES_stream import aes_pkg::*; ();

    // --- Parameters ---
    parameter DATA_WIDTH = 128;
    parameter CLK_PERIOD = 10;
    parameter NUM_TRANSACTIONS = 1000; // Number of stream packets to test

    // --- Signals ---
    logic                  clk;
    logic                  rst;

    logic [DATA_WIDTH-1:0] in_data;
    logic                  in_data_valid;
    logic [DATA_WIDTH-1:0] key;
    
    logic [DATA_WIDTH-1:0] aes_out_data, aes_inv_out_data;
    logic                  aes_out_data_valid, aes_inv_out_data_valid;

    // --- Scoreboard Queue ---
    // This queue will act as a FIFO to store the expected plaintext
    logic [DATA_WIDTH-1:0] expected_data_queue [$];
    logic [DATA_WIDTH-1:0] rand_plaintext;

    // --- Verification Counters ---
    int match_count = 0;
    int error_count = 0;

    // --- Device Under Test (DUT) ---
    AES #(
        .DATA_WIDTH(DATA_WIDTH)
    ) dut_enc (
        .clk            (clk),
        .rst            (rst),
        .in_data        (in_data),
        .in_data_valid  (in_data_valid),
        .key            (key),
        .out_data       (aes_out_data),
        .out_data_valid (aes_out_data_valid)
    );

    AES_Decrypt #(
        .DATA_WIDTH(DATA_WIDTH)
    ) dut_dec (
        .clk            (clk),
        .rst            (rst),
        .in_data        (aes_out_data),
        .in_data_valid  (aes_out_data_valid),
        .key            (key),
        .out_data       (aes_inv_out_data),
        .out_data_valid (aes_inv_out_data_valid)
    );

    // --- Clock Generation ---
    initial begin
        clk = 1'b0;
        forever #(CLK_PERIOD / 2) clk = ~clk;
    end

    // --- Stimulus Process (Driver) ---
    initial begin
        // 1. Initialize Inputs
        rst           <= 1'b1;
        in_data       <= '0;
        in_data_valid <= 1'b0;
        key           <= 128'h2b7e1516_28aed2a6_abf71588_09cf4f3c; // Static test key

        // 2. Apply Reset
        #(CLK_PERIOD * 2);
        @(posedge clk);
        rst <= 1'b0;
        @(posedge clk);

        // 3. Stream Random Data
        $display("Starting stream of %0d transactions...", NUM_TRANSACTIONS);
        
        for (int i = 0; i < NUM_TRANSACTIONS; i++) begin
            // Generate 128-bit random data (concatenating 4x 32-bit $urandom)
            rand_plaintext = {$urandom, $urandom, $urandom, $urandom};
            
            // Wait for clock edge to drive synchronously
            @(posedge clk);
            in_data       <= rand_plaintext;
            in_data_valid <= 1'b1;
            
            // Push the expected data into our scoreboard queue
            expected_data_queue.push_back(rand_plaintext);
        end

        // 4. Stop driving valid data
        @(posedge clk);
        in_data_valid <= 1'b0;
        in_data       <= '0;
        
        // The stimulus is done, but the pipeline is still flushing. 
        // We do not call $finish here; the Monitor process will handle it.
    end

    // --- Checker Process (Monitor & Scoreboard) ---
    initial begin
        forever begin
            @(posedge clk);
            
            // When the decryption pipeline outputs valid data
            if (aes_inv_out_data_valid) begin
                logic [DATA_WIDTH-1:0] expected_data;
                
                // Ensure the queue isn't empty (which would mean the DUT generated a phantom valid signal)
                if (expected_data_queue.size() > 0) begin
                    // Pop the oldest piece of expected data
                    expected_data = expected_data_queue.pop_front();
                    
                    // Compare
                    if (aes_inv_out_data === expected_data) begin
                        match_count++;
                    end else begin
                        error_count++;
                        $display("ERROR at %0t ns! Expected: %h, Got: %h", $time, expected_data, aes_inv_out_data);
                    end
                end else begin
                    error_count++;
                    $display("ERROR at %0t ns: aes_inv_out_data_valid asserted, but expected queue is empty!", $time);
                end
                
                // End simulation when all transactions have been processed and checked
                if ((match_count + error_count) == NUM_TRANSACTIONS) begin
                    $display("\n========================================");
                    $display("        STREAM TEST COMPLETE            ");
                    $display("========================================");
                    $display("Total Transactions : %0d", NUM_TRANSACTIONS);
                    $display("Successful Matches : %0d", match_count);
                    $display("Errors             : %0d", error_count);
                    if (error_count == 0) begin
                        $display("STATUS             : PASS");
                    end else begin
                        $display("STATUS             : FAIL");
                    end
                    $display("========================================\n");
                    
                    #(CLK_PERIOD * 2);
                    $finish;
                end
            end
        end
    end

    // Optional: Timeout watchdog to prevent infinite loops if the DUT hangs
    initial begin
        #(CLK_PERIOD * (NUM_TRANSACTIONS + 100)); // Give enough time for stream + pipeline latency
        $display("FATAL: Simulation timed out. Pipeline may be stalled.");
        $finish;
    end

endmodule