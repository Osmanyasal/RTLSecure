`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Osman Yasal
// 
// Create Date: 18.05.2026 15:05:18
// Design Name: 
// Module Name: AES
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: AES (Advanced Encryption Standard) Implementation
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module AES import aes_pkg::*; #(parameter DATA_WIDTH=128)(
    input  logic                  clk,
    input  logic                  rst,
    input  logic [DATA_WIDTH-1:0] in_data,
    input  logic                  in_data_valid,
    input  logic [DATA_WIDTH-1:0] key,
    output logic [DATA_WIDTH-1:0] out_data,
    output logic                  out_data_valid
);

    // --- State Declarations ---
    aes_state_t initial_state;

    // Intermediate wires connecting the stages
    aes_state_t s1_state, s2_state, s3_state, s4_state;
    logic       s1_valid, s2_valid, s3_valid, s4_valid;

    // --- Input Mapping ---
    always_comb begin
        for (int col = 0; col < 4; col++) begin
            for (int row = 0; row < 4; row++) begin
                initial_state[col][row] = in_data[((col * 4 + row) * 8) +: 8];
            end
        end
    end

    // --- Structural Pipeline ---

    // Stage 1: SubBytes
    aes_substitute_bytes u_subbytes (
        .clk       (clk),
        .rst       (rst),
        .valid_in  (in_data_valid),
        .state_in  (initial_state),
        .valid_out (s1_valid),
        .state_out (s1_state)
    );

    // Stage 2: ShiftRows
    aes_shift_rows u_shiftrows (
        .clk       (clk),
        .rst       (rst),
        .valid_in  (s1_valid),
        .state_in  (s1_state),
        .valid_out (s2_valid),
        .state_out (s2_state)
    );

    // // Stage 3: MixColumns
    // aes_mix_columns u_mixcolumns (
    //     .clk       (clk),
    //     .rst       (rst),
    //     .valid_in  (s2_valid),
    //     .state_in  (s2_state),
    //     .valid_out (s3_valid),
    //     .state_out (s3_state)
    // );

    // // Stage 4: AddRoundKey
    // aes_add_round_key u_addroundkey (
    //     .clk       (clk),
    //     .rst       (rst),
    //     .valid_in  (s3_valid),
    //     .state_in  (s3_state),
    //     .key       (key),
    //     .valid_out (s4_valid),
    //     .state_out (s4_state)
    // );

    // --- Output Mapping ---
    assign out_data       = s4_state;
    assign out_data_valid = s4_valid;

endmodule