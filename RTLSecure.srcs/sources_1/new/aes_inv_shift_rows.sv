`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Osman Yasal
// 
// Create Date: 24.05.2026 20:01:13
// Design Name: 
// Module Name: aes_inv_shift_rows
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



module aes_inv_shift_rows import aes_pkg::*; (
    input  logic       clk,
    input  logic       rst,
    input  logic       valid_in,
    input  aes_state_t state_in,
    output logic       valid_out,
    output aes_state_t state_out
);

always_ff @(posedge clk) begin
    if (rst) begin
        valid_out <= 1'b0;
        state_out <= '0;
    end else begin
        valid_out <= valid_in;
        
        if (valid_in) begin
            // Row 0: No shift
            state_out[0][0] <= state_in[0][0];
            state_out[1][0] <= state_in[1][0];
            state_out[2][0] <= state_in[2][0];
            state_out[3][0] <= state_in[3][0];

            // Row 1: Shift right by 1 column
            state_out[0][1] <= state_in[3][1];
            state_out[1][1] <= state_in[0][1];
            state_out[2][1] <= state_in[1][1];
            state_out[3][1] <= state_in[2][1];

            // Row 2: Shift right by 2 columns (same as left by 2)
            state_out[0][2] <= state_in[2][2];
            state_out[1][2] <= state_in[3][2];
            state_out[2][2] <= state_in[0][2];
            state_out[3][2] <= state_in[1][2];

            // Row 3: Shift right by 3 columns (same as left by 1)
            state_out[0][3] <= state_in[1][3];
            state_out[1][3] <= state_in[2][3];
            state_out[2][3] <= state_in[3][3];
            state_out[3][3] <= state_in[0][3];
        end
    end
end
endmodule