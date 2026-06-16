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
// Description: Fiestel Decryption Implementation with 10 Rounds, using AES S-box and Key Expansion
//              Fiestel is not a standard encryption algorithm but serves as a good example of a block cipher structure.
// 
// Dependencies: 
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
//////////////////////////////////////////////////////////////////////////////////


module Feistel_Decrypt #(parameter DATA_WIDTH=128, parameter NUM_ROUNDS=10)(
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
    logic [DATA_WIDTH-1:0] round_keys [0:NUM_ROUNDS-1];

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
    genvar i;
    generate
        for (i = 0; i < NUM_ROUNDS; i++) begin : feistel_rounds
            always_ff @(posedge clk) begin
                if (rst) begin
                    left[i+1] <= '0;
                    right[i+1] <= '0;
                    data_valid[i+1] <= '0;
                end else begin
                    data_valid[i+1] <= data_valid[i];
                    left[i+1] <= right[i];
                    right[i+1] <= left[i] ^ (right[i] ^ round_keys[(NUM_ROUNDS-1)-i][(DATA_WIDTH/2)-1:0]);
                end
            end
        end
    endgenerate

    assign out_data_valid = data_valid[NUM_ROUNDS];
    assign out_data = {right[NUM_ROUNDS], left[NUM_ROUNDS]}; // Final output is R10 || L10
endmodule

