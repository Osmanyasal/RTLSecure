`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 24.05.2026 11:15:14
// Design Name: 
// Module Name: aes_mix_columns
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

module aes_mix_columns import aes_pkg::*; (
    input  logic       clk,
    input  logic       rst,
    input  logic       valid_in,
    input  aes_state_t state_in,
    output logic       valid_out,
    output aes_state_t state_out
);

    // --- Internal Types & Signals ---
    aes_state_t mix_out; // Combinational intermediate state

    // --- Galois Field Multiplier Function ---
    // Multiplies a byte by {02} in GF(2^8).
    // It shifts left by 1, and if the MSB was 1, XORs with the AES irreducible polynomial (8'h1B).
    function automatic logic [7:0] xtime(input logic [7:0] b);
        return (b << 1) ^ (b[7] ? 8'h1b : 8'h00);
    endfunction

    // --- Combinational MixColumns Logic ---
    always_comb begin
        for (int c = 0; c < 4; c++) begin
            // For each column, apply the MixColumns matrix multiplication:
            // s'_0 = {02}s_0 ^ {03}s_1 ^ {01}s_2 ^ {01}s_3
            // s'_1 = {01}s_0 ^ {02}s_1 ^ {03}s_2 ^ {01}s_3
            // s'_2 = {01}s_0 ^ {01}s_1 ^ {02}s_2 ^ {03}s_3
            // s'_3 = {03}s_0 ^ {01}s_1 ^ {01}s_2 ^ {02}s_3
            // Note: {03}x = {02}x ^ x = xtime(x) ^ x
            
            mix_out[c][0] = xtime(state_in[c][0]) ^ (xtime(state_in[c][1]) ^ state_in[c][1]) ^ state_in[c][2] ^ state_in[c][3];
            
            mix_out[c][1] = state_in[c][0] ^ xtime(state_in[c][1]) ^ (xtime(state_in[c][2]) ^ state_in[c][2]) ^ state_in[c][3];
            
            mix_out[c][2] = state_in[c][0] ^ state_in[c][1] ^ xtime(state_in[c][2]) ^ (xtime(state_in[c][3]) ^ state_in[c][3]);
            
            mix_out[c][3] = (xtime(state_in[c][0]) ^ state_in[c][0]) ^ state_in[c][1] ^ state_in[c][2] ^ xtime(state_in[c][3]);
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
                // Capture the combinationally evaluated MixColumns output
                state_out <= mix_out; 
            end
        end
    end
    
endmodule