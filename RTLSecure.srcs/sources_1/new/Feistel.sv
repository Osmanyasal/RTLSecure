`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Osman Yasal
// 
// Create Date: 03.06.2026 21:14:12
// Design Name: 
// Module Name: Feistel
// Project Name: Feistel Cipher
// Target Devices: 
// Tool Versions: 
// Description: Fiestel Cipher Implementation with 10 Rounds, using AES S-box and Key Expansion
//              Fiestel is not a standard encryption algorithm but serves as a good example of a block cipher structure.
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module Feistel #(parameter DATA_WIDTH=128, parameter NUM_ROUNDS=10)(
    input  logic                  clk,
    input  logic                  rst,
    input  logic [DATA_WIDTH-1:0] in_data,
    input  logic                  in_data_valid,
    input  logic [DATA_WIDTH-1:0] key,
    output logic [DATA_WIDTH-1:0] out_data,
    output logic                  out_data_valid
);
    // NUM_ROUNDS rounds of Feistel cipher
    logic [(DATA_WIDTH/2)-1:0] left [0:NUM_ROUNDS];
    logic [(DATA_WIDTH/2)-1:0] right [0:NUM_ROUNDS];
    logic data_valid [0:NUM_ROUNDS];
    aes_pkg::aes_state_t round_keys [0:NUM_ROUNDS-1];

    key_expansion #(
        .DATA_WIDTH (DATA_WIDTH),
        .NUM_ROUNDS (NUM_ROUNDS-1)
    ) u_key_expansion (
        .clk        (clk),
        .rst        (rst),
        .key_in     (key),
        .round_keys (round_keys)
    );

    assign left[0] = in_data[DATA_WIDTH-1:DATA_WIDTH/2];
    assign right[0] = in_data[(DATA_WIDTH/2)-1:0];
    assign data_valid[0] = in_data_valid;

    genvar i, b;
    generate
        for (i = 0; i < NUM_ROUNDS; i++) begin : feistel_rounds
            logic [(DATA_WIDTH/2)-1:0] rk_sub;
            logic [(DATA_WIDTH/2)-1:0] f_in;
            logic [(DATA_WIDTH/2)-1:0] f_out;

            // Extract lower 64 bits from round key state
            assign rk_sub = {round_keys[i][1][3], round_keys[i][1][2], round_keys[i][1][1], round_keys[i][1][0],
                             round_keys[i][0][3], round_keys[i][0][2], round_keys[i][0][1], round_keys[i][0][0]};
            assign f_in = right[i] ^ rk_sub;

            // Non-linear round function F using 8x 8-bit AES S-boxes
            for (b = 0; b < (DATA_WIDTH/16); b++) begin : feistel_sbox_gen
                sbox_8bit u_feistel_sbox (
                    .in_byte (f_in[b*8 +: 8]),
                    .out_byte(f_out[b*8 +: 8])
                );
            end

            always_ff @(posedge clk) begin
                if (rst) begin
                    left[i+1]       <= '0;
                    right[i+1]      <= '0;
                    data_valid[i+1] <= '0;
                end else begin
                    data_valid[i+1] <= data_valid[i];
                    left[i+1]       <= right[i];
                    right[i+1]      <= left[i] ^ f_out;
                end
            end
        end
    endgenerate

    assign out_data_valid = data_valid[NUM_ROUNDS];
    assign out_data = {right[NUM_ROUNDS], left[NUM_ROUNDS]}; // Final output is R10 || L10
endmodule

