#include <stdbool.h>
#include <stdio.h>

#include "board.h"
#include "color.h"
#include "utils.h"

bool has_piece(const Board* b, bool color, char position[]) {

    // check that position is valid
    if (!is_valid_position(position)) {
        printf("Has_piece: invalid position");
        return false;
    }

    int row = position[0] - 'a';
    int col = position[1] - '1';

    return b->matrix[row][col] == 'B' || b->matrix[row][col] == 'R';

};

void print_board(const Board* b) {

    // unsigned int flag = 9223372036854775808;

    // for (int i=0; i < 8; i++) {
    //     for (int j=0; j < 8; j++) {
    //         printf("%d\n", 1 << 63);
    //         unsigned long val = b->black_positions & ((flag >> j) >> (i * 8));
    //         // printf("%d\n", val);
    //         // if (val) {
    //         //     printf("B");
    //         // } else {
    //         //     printf("X");
    //         // }
    //         printf("\n");
    //     }
    //     printf("\n");
    // }


}
