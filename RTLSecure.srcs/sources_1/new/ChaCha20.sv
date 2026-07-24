`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: Osman Yasal
// 
// Create Date: 07/08/2026 01:06:56 AM
// Design Name: 
// Module Name: ChaCha20
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


module ChaCha20(
    input logic clk,
    input logic rst,
    
    input logic in_valid,
    input logic [255:0] in_key,
    input logic [31:0] counter,
    input logic [95:0] in_nonce,
    
    output logic [511:0] out_matrix,   // row-column-bits 
    output logic out_valid
    );
    /*
                       State Matrix Layout
        [ Constant ] [ Constant ] [ Constant ] [ Constant ]
        [   Key    ] [   Key    ] [   Key    ] [   Key    ]
        [   Key    ] [   Key    ] [   Key    ] [   Key    ]
        [ Counter  ] [  Nonce   ] [  Nonce   ] [  Nonce   ]
    */
    logic [31:0] input_state [0:15];
    logic [31:0] initial_state [0:15];
    logic [31:0] state_words [0:15];
    logic [31:0] next_state_words [0:15];
    
    // INIT 
    assign input_state[0]  = 32'h61707865; // "expa"
    assign input_state[1]  = 32'h3320646e; // "nd 3"
    assign input_state[2]  = 32'h79622d32; // "2-by"
    assign input_state[3]  = 32'h6b206574; // "te k"
     
    assign input_state[4]  = in_key[31:0];
    assign input_state[5]  = in_key[63:32];
    assign input_state[6]  = in_key[95:64];
    assign input_state[7]  = in_key[127:96];
    assign input_state[8]  = in_key[159:128];
    assign input_state[9]  = in_key[191:160];
    assign input_state[10] = in_key[223:192];
    assign input_state[11] = in_key[255:224];

    assign input_state[12] = counter;
    assign input_state[13] = in_nonce[31:0];
    assign input_state[14] = in_nonce[63:32];
    assign input_state[15] = in_nonce[95:64];

    logic [31:0] qr_in_a[4], qr_in_b[4], qr_in_c[4], qr_in_d[4];
    logic [31:0] qr_out_a[4], qr_out_b[4], qr_out_c[4], qr_out_d[4];
    logic compute_phase;
    integer word_idx;
    genvar i;
    generate
        for(i = 0; i<4; i++) begin : gen_qr
            ChaCha20_QR qr(
                .clk(clk),
                .rst(rst),
                .en((state == COMPUTE) && (compute_phase == 1'b0)),
                .in_a(qr_in_a[i]),
                .in_b(qr_in_b[i]),
                .in_c(qr_in_c[i]),
                .in_d(qr_in_d[i]),
                .out_a(qr_out_a[i]),
                .out_b(qr_out_b[i]),
                .out_c(qr_out_c[i]),
                .out_d(qr_out_d[i])
            );
        end
    endgenerate
    
    logic [31:0] step_counter;
    always_comb begin
        for(word_idx = 0; word_idx < 16; word_idx = word_idx + 1)
            next_state_words[word_idx] = state_words[word_idx];

        if(step_counter[0] == 1'b0) begin // even
            qr_in_a[0] = state_words[0]; qr_in_b[0] = state_words[4]; qr_in_c[0] = state_words[8];  qr_in_d[0] = state_words[12];
            qr_in_a[1] = state_words[1]; qr_in_b[1] = state_words[5]; qr_in_c[1] = state_words[9];  qr_in_d[1] = state_words[13];
            qr_in_a[2] = state_words[2]; qr_in_b[2] = state_words[6]; qr_in_c[2] = state_words[10]; qr_in_d[2] = state_words[14];
            qr_in_a[3] = state_words[3]; qr_in_b[3] = state_words[7]; qr_in_c[3] = state_words[11]; qr_in_d[3] = state_words[15];

            next_state_words[0]  = qr_out_a[0]; next_state_words[4]  = qr_out_b[0]; next_state_words[8]  = qr_out_c[0]; next_state_words[12] = qr_out_d[0];
            next_state_words[1]  = qr_out_a[1]; next_state_words[5]  = qr_out_b[1]; next_state_words[9]  = qr_out_c[1]; next_state_words[13] = qr_out_d[1];
            next_state_words[2]  = qr_out_a[2]; next_state_words[6]  = qr_out_b[2]; next_state_words[10] = qr_out_c[2]; next_state_words[14] = qr_out_d[2];
            next_state_words[3]  = qr_out_a[3]; next_state_words[7]  = qr_out_b[3]; next_state_words[11] = qr_out_c[3]; next_state_words[15] = qr_out_d[3];
        end
        else begin // odd
            qr_in_a[0] = state_words[0]; qr_in_b[0] = state_words[5]; qr_in_c[0] = state_words[10]; qr_in_d[0] = state_words[15];
            qr_in_a[1] = state_words[1]; qr_in_b[1] = state_words[6]; qr_in_c[1] = state_words[11]; qr_in_d[1] = state_words[12];
            qr_in_a[2] = state_words[2]; qr_in_b[2] = state_words[7]; qr_in_c[2] = state_words[8];  qr_in_d[2] = state_words[13];
            qr_in_a[3] = state_words[3]; qr_in_b[3] = state_words[4]; qr_in_c[3] = state_words[9];  qr_in_d[3] = state_words[14];

            next_state_words[0]  = qr_out_a[0]; next_state_words[5]  = qr_out_b[0]; next_state_words[10] = qr_out_c[0]; next_state_words[15] = qr_out_d[0];
            next_state_words[1]  = qr_out_a[1]; next_state_words[6]  = qr_out_b[1]; next_state_words[11] = qr_out_c[1]; next_state_words[12] = qr_out_d[1];
            next_state_words[2]  = qr_out_a[2]; next_state_words[7]  = qr_out_b[2]; next_state_words[8]  = qr_out_c[2]; next_state_words[13] = qr_out_d[2];
            next_state_words[3]  = qr_out_a[3]; next_state_words[4]  = qr_out_b[3]; next_state_words[9]  = qr_out_c[3]; next_state_words[14] = qr_out_d[3];
        end
    end


    typedef enum logic [1:0] {
        IDLE,
        COMPUTE,
        ADD,
        DONE
    } state_t;

    state_t state, next_state;

    // state logic
    always_ff @(posedge clk) begin
        if(rst) state <= IDLE;
        else state <= next_state;
    end

    // next state logic
    always_comb begin
        next_state = state;

        case(state)
            IDLE: begin
                if(in_valid)
                    next_state = COMPUTE;
            end
            COMPUTE: begin
                if((step_counter == 32'd19) && (compute_phase == 1'b1))
                    next_state = ADD;
            end
            ADD: begin
                next_state = DONE;
            end
            DONE: begin
                next_state = IDLE;
            end
            default: begin
                next_state = IDLE;
            end
        endcase
    end

    // datapath logic
    always_ff @(posedge clk) begin
        if(rst) begin
            for(word_idx = 0; word_idx < 16; word_idx = word_idx + 1) begin
                state_words[word_idx] <= '0;
                initial_state[word_idx] <= '0;
            end
            step_counter <= 0;
            compute_phase <= 1'b0;
            out_matrix <= '0;
            out_valid <= 1'b0;
        end 
        else begin
            out_valid <= 1'b0;

            case(state)
                IDLE: begin
                    if(in_valid) begin
                        for(word_idx = 0; word_idx < 16; word_idx = word_idx + 1) begin
                            state_words[word_idx] <= input_state[word_idx];
                            initial_state[word_idx] <= input_state[word_idx];
                        end
                        step_counter <= 0;
                        compute_phase <= 1'b0;
                    end
                end
                COMPUTE: begin
                    if(compute_phase == 1'b0) begin
                        compute_phase <= 1'b1;
                    end
                    else begin
                        for(word_idx = 0; word_idx < 16; word_idx = word_idx + 1)
                            state_words[word_idx] <= next_state_words[word_idx];

                        compute_phase <= 1'b0;
                        if(step_counter != 32'd19)
                            step_counter <= step_counter + 1;
                    end
                end
                ADD: begin
                    compute_phase <= 1'b0;
                    for(word_idx = 0; word_idx < 16; word_idx = word_idx + 1)
                        state_words[word_idx] <= state_words[word_idx] + initial_state[word_idx];
                end
                DONE: begin
                    compute_phase <= 1'b0;
                    out_matrix <= {state_words[0], state_words[1], state_words[2], state_words[3],
                                   state_words[4], state_words[5], state_words[6], state_words[7],
                                   state_words[8], state_words[9], state_words[10], state_words[11],
                                   state_words[12], state_words[13], state_words[14], state_words[15]};
                    out_valid <= 1'b1;
                end
            endcase
        end
    end
    
    // output logic
endmodule
