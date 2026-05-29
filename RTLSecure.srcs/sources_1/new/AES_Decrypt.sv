`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Osman Yasal
// 
// Create Date: 24.05.2026 19:53:58
// Design Name: 
// Module Name: AES_Decrypt
// Project Name: 
// Target Devices: 
// Tool Versions: 
// Description: AES-128 10-Round Decryption Pipeline
// 
// Dependencies: aes_pkg, aes_inv_substitute_bytes, aes_inv_shift_rows, 
//               aes_inv_mix_columns, aes_add_round_key, aes_key_expansion
// 
// Revision:
// Revision 0.02 - Expanded to full 10-round reverse pipeline
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
    // Generates keys 0 through 10. For decryption, we will apply these 
    // in reverse order (10 down to 0) in the pipeline below.
    aes_key_expansion u_key_expansion (
        .clk        (clk),
        .rst        (rst),
        .key_in     (key),
        .round_keys (round_keys)
    );

    // --- Structural Pipeline ---

    // Stage 0: Initial AddRoundKey (Peeling off Encryption Round 10's Key)
    aes_add_round_key u_addroundkey_init (
        .clk       (clk),
        .rst       (rst),
        .valid_in  (in_data_valid),
        .state_in  (init_state),
        .key       (round_keys[10]), // Start with the LAST expanded key
        .valid_out (round_valid[0]),
        .state_out (round_state[0])
    );

    // Stages 1 to 9: Standard AES Decryption Rounds
    genvar i;
    generate
        for (i = 1; i < 10; i++) begin : gen_aes_inv_rounds
            // Local wires for intra-round connections
            aes_state_t inv_shift_state, inv_sub_state, add_key_state;
            logic       inv_shift_valid, inv_sub_valid, add_key_valid;

            aes_inv_shift_rows u_inv_shiftrows (
                .clk       (clk),
                .rst       (rst),
                .valid_in  (round_valid[i-1]),
                .state_in  (round_state[i-1]),
                .valid_out (inv_shift_valid),
                .state_out (inv_shift_state)
            );

            aes_inv_substitute_bytes u_inv_subbytes (
                .clk       (clk),
                .rst       (rst),
                .valid_in  (inv_shift_valid),
                .state_in  (inv_shift_state),
                .valid_out (inv_sub_valid),
                .state_out (inv_sub_state)
            );

            // Notice the key indexing: 10 - i (Keys 9 down to 1)
            aes_add_round_key u_inv_addroundkey (
                .clk       (clk),
                .rst       (rst),
                .valid_in  (inv_sub_valid),
                .state_in  (inv_sub_state),
                .key       (round_keys[10 - i]), 
                .valid_out (add_key_valid),
                .state_out (add_key_state)
            );

            aes_inv_mix_columns u_inv_mixcolumns (
                .clk       (clk),
                .rst       (rst),
                .valid_in  (add_key_valid),
                .state_in  (add_key_state),
                .valid_out (round_valid[i]),
                .state_out (round_state[i])
            );
        end
    endgenerate

    // Stage 10: Final Decryption Round (Omits InvMixColumns, uses Key 0)
    aes_state_t r10_inv_shift_state, r10_inv_sub_state;
    logic       r10_inv_shift_valid, r10_inv_sub_valid;

    aes_inv_shift_rows u_inv_shiftrows_r10 (
        .clk       (clk),
        .rst       (rst),
        .valid_in  (round_valid[9]),
        .state_in  (round_state[9]),
        .valid_out (r10_inv_shift_valid),
        .state_out (r10_inv_shift_state)
    );

    aes_inv_substitute_bytes u_inv_subbytes_r10 (
        .clk       (clk),
        .rst       (rst),
        .valid_in  (r10_inv_shift_valid),
        .state_in  (r10_inv_shift_state),
        .valid_out (r10_inv_sub_valid),
        .state_out (r10_inv_sub_state)
    );

    aes_add_round_key u_inv_addroundkey_r10 (
        .clk       (clk),
        .rst       (rst),
        .valid_in  (r10_inv_sub_valid),
        .state_in  (r10_inv_sub_state),
        .key       (round_keys[0]), // Final step uses the original cipher key
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