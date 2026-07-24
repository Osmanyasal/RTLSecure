`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Osman Yasal
// 
// Create Date: 07/08/2026 12:48:15 PM
// Design Name: 
// Module Name: ChaCha20_QR
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


module ChaCha20_QR(
    input logic clk,
    input logic rst,
    input logic en,
    input logic [31:0] in_a, in_b, in_c, in_d,
    output logic [31:0] out_a, out_b, out_c, out_d
    );
    
    logic [31:0] a1, b1, c1, d1, a1_din_xor, bin_c1_xor;
    logic [31:0] a1_reg, b1_reg, c1_reg, d1_reg;
    logic [31:0] a2, b2, c2, d2, a2_d1_xor, b1_c2_xor;
    
    // first half
    assign a1 = in_a + in_b;
    assign a1_din_xor = in_d ^ a1;
    assign d1 = { a1_din_xor[15:0], a1_din_xor[31:16] };
    
    assign c1 = in_c + d1;
    assign bin_c1_xor = in_b ^ c1;
    assign b1 = { bin_c1_xor[19:0], bin_c1_xor[31:20] };

    always_ff @(posedge clk) begin
        if(rst) begin
            a1_reg <= '0;
            b1_reg <= '0;
            c1_reg <= '0;
            d1_reg <= '0;
        end
        else if(en) begin
            a1_reg <= a1;
            b1_reg <= b1;
            c1_reg <= c1;
            d1_reg <= d1;
        end
    end
    
    // second half
    assign a2 = a1_reg + b1_reg;
    assign a2_d1_xor = d1_reg ^ a2;
    assign d2 = {a2_d1_xor[23:0], a2_d1_xor[31:24]};
    assign c2 = c1_reg + d2;
    assign b1_c2_xor = b1_reg ^ c2;
    assign b2 = { b1_c2_xor[24:0], b1_c2_xor[31:25] };
    
    
    // output
    assign out_a = a2;
    assign out_b = b2;
    assign out_c = c2;
    assign out_d = d2;
    
endmodule
