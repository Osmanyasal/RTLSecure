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
    
    logic [DATA_WIDTH-1:0] out_data;
    logic                  out_data_valid;

    // --- Device Under Test (DUT) ---
    AES #(
        .DATA_WIDTH(DATA_WIDTH)
    ) dut (
        .clk            (clk),
        .rst            (rst),
        .in_data        (in_data),
        .in_data_valid  (in_data_valid),
        .key            (key),
        .out_data       (out_data),
        .out_data_valid (out_data_valid)
    );

    // --- Clock Generation ---
    initial begin
        clk = 0;
        forever #(CLK_PERIOD / 2) clk = ~clk;
    end

    // --- Monitor Outputs ---
    // This will automatically print the output whenever valid data emerges
    // from the 4th pipeline stage.
    always_ff @(posedge clk) begin
        if (out_data_valid) begin
            $display("Time: %0t | VALID OUTPUT | Data: %h", $time, out_data);
        end
    end

    // --- Test Stimulus ---
    initial begin
        // 1. Initialize Inputs
        rst           = 1;
        in_data       = '0;
        in_data_valid = 0;
        key           = '0;

        // 2. Apply Reset
        #(CLK_PERIOD * 2);
        @(posedge clk);
        rst = 0;
        #(CLK_PERIOD);

        // 3. Test Vector 1 (Standard NIST FIPS 197 example values)
        // We apply inputs on the falling edge to ensure setup/hold times are met 
        // for the posedge clock in the DUT.
        @(posedge clk);
        in_data       = 128'h3243f6a8_885a308d_313198a2_e0370734;
        key           = 128'h2b7e1516_28aed2a6_abf71588_09cf4f3c;
        in_data_valid = 1;
        #1; // wait for signals to propagate
        
        @(posedge clk);
        #1;
        @(posedge clk);
        #1;
        @(posedge clk);
        #1;
        @(posedge clk);
        #1;
        // 4. Test Vector 2 (Push immediately to test pipeline density)
        @(posedge clk);
        in_data       = 128'h00112233_44556677_8899aabb_ccddeeff;
        key           = 128'h00010203_04050607_08090a0b_0c0d0e0f;
        in_data_valid = 1;
        
        // 5. Test Vector 3 (Push another one)
        @(posedge clk);
        in_data       = 128'hffffffff_ffffffff_ffffffff_ffffffff;
        key           = 128'h12345678_12345678_12345678_12345678;
        in_data_valid = 1;

        // 6. Stop sending data and wait for pipeline to flush
        @(posedge clk);
        in_data       = '0;
        in_data_valid = 0;

        // Wait enough cycles for the 4-stage pipeline to empty
        #(CLK_PERIOD * 6);

        // 7. Finish simulation
        $display("Time: %0t | Simulation Complete.", $time);
        $finish;
    end

endmodule
