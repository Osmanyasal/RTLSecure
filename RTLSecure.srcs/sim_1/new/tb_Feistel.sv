`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 06/16/2026 09:37:50 PM
// Design Name: 
// Module Name: tb_Feistel
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


module tb_Feistel;

    parameter DATA_WIDTH = 128;
    parameter CLK_PERIOD = 10;

    logic clk;
    logic rst;

    logic [DATA_WIDTH-1:0] in_data;
    logic                  in_data_valid;
    logic [DATA_WIDTH-1:0] key;

    logic [DATA_WIDTH-1:0] feistel_out_data, feistel_dec_out_data;
    logic                  feistel_out_data_valid, feistel_dec_out_data_valid;

    Feistel #(
        .DATA_WIDTH(DATA_WIDTH)
    ) dut (
        .clk            (clk),
        .rst            (rst),
        .in_data        (in_data),
        .in_data_valid  (in_data_valid),
        .key            (key),
        .out_data       (feistel_out_data),
        .out_data_valid (feistel_out_data_valid)
    );

    Feistel_Decrypt #(
        .DATA_WIDTH(DATA_WIDTH)
    ) dut_dec (
        .clk            (clk),
        .rst            (rst),
        .in_data        (feistel_out_data),
        .in_data_valid  (feistel_out_data_valid),
        .key            (key),
        .out_data       (feistel_dec_out_data),
        .out_data_valid (feistel_dec_out_data_valid)
    );

    always # (CLK_PERIOD/2) clk = ~clk;

    initial begin
        // 1. Initialize Inputs (using non-blocking for standard practice)
        clk <= 0;
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

        // Wait dynamically for the pipeline to finish
        // SystemVerilog's wait() will block until the condition is true
        wait(feistel_dec_out_data_valid == 1'b1);
        
        // The data is valid RIGHT NOW. We can sample it immediately.
        $display("----------------------------------------");
        $display("Expected Output: %h", 128'h3243f6a8_885a308d_313198a2_e0370734);
        $display("Actual Output  : %h", feistel_dec_out_data);
        
        if (feistel_dec_out_data == 128'h3243f6a8_885a308d_313198a2_e0370734) begin
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
