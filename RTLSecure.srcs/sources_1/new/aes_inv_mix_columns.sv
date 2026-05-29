`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 24.05.2026 20:16:07
// Design Name: 
// Module Name: aes_inv_mix_columns
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


module aes_inv_mix_columns import aes_pkg::*; (
    input  logic       clk,
    input  logic       rst,
    input  logic       valid_in,
    input  aes_state_t state_in,
    output logic       valid_out,
    output aes_state_t state_out
);

    // --- Internal Types & Signals ---
    aes_state_t inv_mix_out;

    // --- Galois Field Multiplier Functions ---
    // Multiply by {02}
    function automatic logic [7:0] mul_02(input logic [7:0] b);
        return (b << 1) ^ (b[7] ? 8'h1b : 8'h00);
    endfunction

    // Multiply by {04}
    function automatic logic [7:0] mul_04(input logic [7:0] b);
        return mul_02(mul_02(b));
    endfunction

    // Multiply by {08}
    function automatic logic [7:0] mul_08(input logic [7:0] b);
        return mul_02(mul_04(b));
    endfunction

    // Composite Multipliers for the Inverse Matrix
    function automatic logic [7:0] mul_09(input logic [7:0] b); 
        return mul_08(b) ^ b; 
    endfunction
    
    function automatic logic [7:0] mul_0b(input logic [7:0] b); 
        return mul_08(b) ^ mul_02(b) ^ b; 
    endfunction
    
    function automatic logic [7:0] mul_0d(input logic [7:0] b); 
        return mul_08(b) ^ mul_04(b) ^ b; 
    endfunction
    
    function automatic logic [7:0] mul_0e(input logic [7:0] b); 
        return mul_08(b) ^ mul_04(b) ^ mul_02(b); 
    endfunction

    // --- Combinational InvMixColumns Logic ---
    always_comb begin
        for (int c = 0; c < 4; c++) begin
            // Apply the Inverse MixColumns matrix multiplication
            inv_mix_out[c][0] = mul_0e(state_in[c][0]) ^ mul_0b(state_in[c][1]) ^ mul_0d(state_in[c][2]) ^ mul_09(state_in[c][3]);
            
            inv_mix_out[c][1] = mul_09(state_in[c][0]) ^ mul_0e(state_in[c][1]) ^ mul_0b(state_in[c][2]) ^ mul_0d(state_in[c][3]);
            
            inv_mix_out[c][2] = mul_0d(state_in[c][0]) ^ mul_09(state_in[c][1]) ^ mul_0e(state_in[c][2]) ^ mul_0b(state_in[c][3]);
            
            inv_mix_out[c][3] = mul_0b(state_in[c][0]) ^ mul_0d(state_in[c][1]) ^ mul_09(state_in[c][2]) ^ mul_0e(state_in[c][3]);
        end
    end

    // --- Sequential Pipeline Registers ---
    always_ff @(posedge clk) begin
        if (rst) begin
            valid_out <= 1'b0;
            state_out <= '0;
        end else begin
            valid_out <= valid_in;
            
            if (valid_in) begin
                state_out <= inv_mix_out; 
            end
        end
    end
    
endmodule