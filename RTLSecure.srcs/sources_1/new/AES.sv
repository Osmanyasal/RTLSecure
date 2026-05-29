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
// Description: AES-128 (Advanced Encryption Standard) 10-Round Implementation
// 
// Dependencies: aes_pkg, aes_substitute_bytes, aes_shift_rows, 
//               aes_mix_columns, aes_add_round_key, aes_key_expansion
// 
// Revision:
// Revision 0.02 - Expanded to full 10-round unrolled pipeline
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
    aes_state_t init_state;
    
    // AES-128 requires 11 keys (1 original + 10 expanded)
    aes_state_t round_keys [0:10]; 

    // Pipeline state and valid signals for inter-stage routing
    aes_state_t round_state [0:10];
    logic       round_valid [0:10];

    // --- Input Mapping (Vector to 4x4 Array) ---
    always_comb begin
        for (int col = 0; col < 4; col++) begin
            for (int row = 0; row < 4; row++) begin
                init_state[col][row] = in_data[((col * 4 + row) * 8) +: 8];
            end
        end
    end

    // --- Key Expansion ---
    // Instantiating a Key Expansion module to generate the 11 round keys.
    // Ensure this module exists in your project.
    aes_key_expansion u_key_expansion (
        .clk        (clk),
        .rst        (rst),
        .key_in     (key),
        .round_keys (round_keys)
    );

    // --- Structural Pipeline ---

    // Stage 0: Initial AddRoundKey
    aes_add_round_key u_addroundkey_init (
        .clk       (clk),
        .rst       (rst),
        .valid_in  (in_data_valid),
        .state_in  (init_state),
        .key       (round_keys[0]),
        .valid_out (round_valid[0]),
        .state_out (round_state[0])
    );

    // Stages 1 to 9: Standard AES Rounds
    genvar i;
    generate
        for (i = 1; i < 10; i++) begin : gen_aes_rounds
            // Local wires for intra-round connections
            aes_state_t sub_state, shift_state, mix_state;
            logic       sub_valid, shift_valid, mix_valid;

            aes_substitute_bytes u_subbytes (
                .clk       (clk),
                .rst       (rst),
                .valid_in  (round_valid[i-1]),
                .state_in  (round_state[i-1]),
                .valid_out (sub_valid),
                .state_out (sub_state)
            );

            aes_shift_rows u_shiftrows (
                .clk       (clk),
                .rst       (rst),
                .valid_in  (sub_valid),
                .state_in  (sub_state),
                .valid_out (shift_valid),
                .state_out (shift_state)
            );

            aes_mix_columns u_mixcolumns (
                .clk       (clk),
                .rst       (rst),
                .valid_in  (shift_valid),
                .state_in  (shift_state),
                .valid_out (mix_valid),
                .state_out (mix_state)
            );

            aes_add_round_key u_addroundkey (
                .clk       (clk),
                .rst       (rst),
                .valid_in  (mix_valid),
                .state_in  (mix_state),
                .key       (round_keys[i]),
                .valid_out (round_valid[i]),
                .state_out (round_state[i])
            );
        end
    endgenerate

    // Stage 10: Final AES Round (Omits MixColumns)
    aes_state_t r10_sub_state, r10_shift_state;
    logic       r10_sub_valid, r10_shift_valid;

    aes_substitute_bytes u_subbytes_r10 (
        .clk       (clk),
        .rst       (rst),
        .valid_in  (round_valid[9]),
        .state_in  (round_state[9]),
        .valid_out (r10_sub_valid),
        .state_out (r10_sub_state)
    );

    aes_shift_rows u_shiftrows_r10 (
        .clk       (clk),
        .rst       (rst),
        .valid_in  (r10_sub_valid),
        .state_in  (r10_sub_state),
        .valid_out (r10_shift_valid),
        .state_out (r10_shift_state)
    );

    // Notice we skip MixColumns here and pipe ShiftRows straight to AddRoundKey
    aes_add_round_key u_addroundkey_r10 (
        .clk       (clk),
        .rst       (rst),
        .valid_in  (r10_shift_valid),
        .state_in  (r10_shift_state),
        .key       (round_keys[10]),
        .valid_out (round_valid[10]),
        .state_out (round_state[10])
    );

    // --- Output Mapping (4x4 Array to Vector) ---
    always_comb begin
        for (int col = 0; col < 4; col++) begin
            for (int row = 0; row < 4; row++) begin
                out_data[((col * 4 + row) * 8) +: 8] = round_state[10][col][row];
            end
        end
    end

    assign out_data_valid = round_valid[10];

endmodule