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


module AES #(parameter DATA_WIDTH=8)(   // single pixel.
    input logic clk,
    input logic rst,
    input logic [DATA_WIDTH-1:0] in_data,
    output logic [DATA_WIDTH-1:0] out_data,
    output logic out_valid
    );
    localparam WORD_SIZE = 128; // Depth of the input buffer FIFO
    enum state_t {IDLE, ACCUMULATE, ENCRYPT} state, next_state;
    logic encryption_done; // Signal to indicate when encryption is complete

    // State Transition Logic
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
        end else begin
            state <= next_state;
        end
    end

    logic fifo_full, fifo_empty;
    logic [DATA_WIDTH-1:0] fifo_r_data;
    sync_fifo #(.DATA_WIDTH(DATA_WIDTH), .DEPTH(WORD_SIZE)) input_buffer (
        .clk(clk),
        .rst(rst),
        .w_data(in_data),
        .w_en(1), // Always write incoming data
        .full(fifo_full),  
        .r_en(state == ENCRYPT), // Read when in ENCRYPT state
        .empty(fifo_empty),  
        .r_data(fifo_r_data) // Connect to the first stage of AES pipeline
    );
    
    // Next State Logic
    always_comb begin
        case (state)
            IDLE: begin
                if (in_data_valid) begin
                    next_state = ACCUMULATE;
                end else begin
                    next_state = IDLE;
                end
            end
            ACCUMULATE: begin
                if (fifo_full) begin
                    next_state = ENCRYPT;
                end else begin
                    next_state = ACCUMULATE;
                end
            end
            ENCRYPT: begin
                if (encryption_done) begin
                    next_state = IDLE;
                end else begin
                    next_state = ENCRYPT;
                end
            end
            default: next_state = IDLE;
        endcase
    end


    // Pipeline registers for each stage
    logic [DATA_WIDTH-1:0] sub_bytes_reg;
    logic [DATA_WIDTH-1:0] shift_rows_reg;
    logic [DATA_WIDTH-1:0] mix_columns_reg;
    logic [DATA_WIDTH-1:0] add_round_key_reg;
    // IDLE State: Wait for input data
    // SUB_BYTES State: Apply S-box transformation to each byte
    // SHIFT_ROWS State: Shift rows of the state array
    // MIX_COLUMNS State: Mix columns of the state array
    // ADD_ROUND_KEY State: Add round key to the state array

    assign out_valid = (state == ENCRYPT) && encryption_done;
endmodule
