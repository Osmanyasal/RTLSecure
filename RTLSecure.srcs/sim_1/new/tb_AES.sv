`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Osman Yasal
// 
// Create Date: 23.05.2026 23:05:12
// Design Name: 
// Module Name: tb_AES
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: 
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////

module tb_AES import aes_pkg::*; ();

    // --- Parameters ---
    parameter DATA_WIDTH = 128;
    parameter CLK_PERIOD = 10;

    // --- Signals ---
    logic                  clk;
    logic                  rst;

    logic [DATA_WIDTH-1:0] in_data;
    logic                  in_data_valid;
    logic [DATA_WIDTH-1:0] key;
    
    logic [DATA_WIDTH-1:0] aes_out_data, aes_inv_out_data;
    logic                  aes_out_data_valid, aes_inv_out_data_valid;

    // --- Device Under Test (DUT) ---
    AES #(
        .DATA_WIDTH(DATA_WIDTH)
    ) dut (
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
        .in_data        (aes_out_data), // Decrypt the output of the encryption
        .in_data_valid  (aes_out_data_valid),
        .key            (key),
        .out_data       (aes_inv_out_data), // We can ignore the decrypted output for this testbench
        .out_data_valid (aes_inv_out_data_valid)  // We can ignore the valid signal for the decrypted output
    );
    // --- Clock Generation ---
    initial begin
        clk = 0;
        forever #(CLK_PERIOD / 2) clk = ~clk;
    end
 
// --- Test Stimulus ---
    initial begin
        // 1. Initialize Inputs (using non-blocking for standard practice)
        rst           <= 1'b1;
        in_data       <= '0;
        in_data_valid <= 1'b0;
        key           <= '0;

        // 2. Apply Reset
        #(CLK_PERIOD * 2);
        @(posedge clk);
        rst <= 1'b0;
        
        // Wait a cycle after reset drops before sending data
        @(posedge clk); 

        // 3. Test Vector 1 (Standard NIST FIPS 197 example values)
        // Drive inputs synchronously to the clock using non-blocking assignments
        in_data       <= 128'h3243f6a8_885a308d_313198a2_e0370734;
        key           <= 128'h2b7e1516_28aed2a6_abf71588_09cf4f3c;
        in_data_valid <= 1'b1;

        // Drop the valid signal on the next cycle to create a 1-cycle pulse
        @(posedge clk);
        in_data_valid <= 1'b0; 

        // Wait for encryption pipeline output
        wait(aes_out_data_valid == 1'b1);
        $display("----------------------------------------");
        $display("NIST Encryption Standard Check:");
        $display("Expected Ciphertext: 3925841d02dc09fbdc118597196a0b32");
        $display("Actual Ciphertext  : %h", aes_out_data);
        if (aes_out_data == 128'h3925841d_02dc09fb_dc118597_196a0b32) begin
            $display("STATUS: Encryption NIST Check SUCCESS");
        end else begin
            $display("STATUS: Encryption NIST Check FAILED");
        end

        // Wait dynamically for the decryption pipeline to finish
        wait(aes_inv_out_data_valid == 1'b1);
        
        $display("----------------------------------------");
        $display("Decryption Check:");
        $display("Expected Plaintext : 3243f6a8885a308d313198a2e0370734");
        $display("Actual Plaintext   : %h", aes_inv_out_data);
        
        if (aes_inv_out_data == 128'h3243f6a8_885a308d_313198a2_e0370734) begin
            $display("STATUS: Decryption SUCCESS");
        end else begin
            $display("STATUS: Decryption FAILED");
        end
        $display("----------------------------------------");

        // 4. Finish Simulation
        #(CLK_PERIOD * 10);
        $finish;
    end

endmodule
