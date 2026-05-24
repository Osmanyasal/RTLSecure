`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 24.05.2026 19:53:58
// Design Name: 
// Module Name: AES_Decrypt
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


module AES_Decrypt import aes_pkg::*; #(parameter DATA_WIDTH=128)(
    input  logic                  clk,
    input  logic                  rst,
    input  logic [DATA_WIDTH-1:0] in_data,
    input  logic                  in_data_valid,
    input  logic [DATA_WIDTH-1:0] key,
    output logic [DATA_WIDTH-1:0] out_data,
    output logic                  out_data_valid
);

    // --- State Declarations ---
    aes_state_t data_state;
    aes_state_t key_state;

    // Intermediate wires connecting the stages
    aes_state_t s1_state, s2_state, s3_state, s4_state;
    logic       s1_valid, s2_valid, s3_valid, s4_valid;

    // --- Input Mapping ---
    always_comb begin
        for (int col = 0; col < 4; col++) begin
            for (int row = 0; row < 4; row++) begin
                data_state[col][row] = in_data[((col * 4 + row) * 8) +: 8];
                key_state[col][row] = key[((col * 4 + row) * 8) +: 8];
            end
        end
    end

    // --- Structural Pipeline ---

    // Stage 1: Remove AddRoundKey
    aes_add_round_key u_inv_addroundkey (
        .clk       (clk),
        .rst       (rst),
        .valid_in  (in_data_valid),
        .state_in  (data_state),
        .key       (key_state),
        .valid_out (s1_valid),
        .state_out (s1_state)
    );

    // Stage 2: Inverse MixColumns
    aes_inv_mix_columns u_inv_mixcolumns (
        .clk       (clk),
        .rst       (rst),
        .valid_in  (s1_valid),
        .state_in  (s1_state),
        .valid_out (s2_valid),
        .state_out (s2_state)
    );

    // Stage 3: Inverse ShiftRows
    aes_inv_shift_rows u_inv_shiftrows (
        .clk       (clk),
        .rst       (rst),
        .valid_in  (s2_valid),
        .state_in  (s2_state),
        .valid_out (s3_valid),
        .state_out (s3_state)
    );

    // Stage 4: Inverse SubBytes
    aes_inv_substitute_bytes u_inv_subbytes (
        .clk       (clk),
        .rst       (rst),
        .valid_in  (s3_valid),
        .state_in  (s3_state),
        .valid_out (s4_valid),
        .state_out (s4_state)
    );

    assign out_data_valid = s4_valid;
    assign out_data       = s4_state;
endmodule
