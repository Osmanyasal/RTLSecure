`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date: 23.05.2026 21:45:39
// Design Name: 
// Module Name: aes_substitute_bytes
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

module aes_substitute_bytes import aes_pkg::*; (
    input  logic       clk,
    input  logic       rst,
    input  logic       valid_in,
    input  aes_state_t state_in,
    output logic       valid_out,
    output aes_state_t state_out
);

    // Use your custom type for the internal combinational wires!
    aes_state_t sbox_out;

    // Generate block to instantiate sbox_8bit for each byte
    genvar col, row;
    generate
        for (col = 0; col < 4; col = col + 1) begin: col_gen
            for (row = 0; row < 4; row = row + 1) begin: row_gen
                sbox_8bit u_sbox (
                    .in_byte (state_in[col][row]),
                    .out_byte(sbox_out[col][row])
                );
            end
        end
    endgenerate

    always_ff @(posedge clk) begin
        if (rst) begin
            valid_out <= 1'b0;
            state_out <= '0;
        end else begin
            valid_out <= valid_in;
            
            if (valid_in) begin
                // A single assignment cleanly copies all 16 bytes simultaneously
                state_out <= sbox_out;
            end
        end
    end
    
endmodule