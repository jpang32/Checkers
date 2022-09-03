#include <stdio.h>
#include <stdlib.h>

#include "board.h"
#include "color.h"
#include "piece.h"
#include "utils.h"

int main(int argc, char *argv[]) {

    Board b = { 5614165,  12273903276444876800};

    char test1[3] = "a1";
    char test2[3] = "h8";
    char test3[3] = "g1";
    char test4[3] = "a9";
    char test5[3] = "g9";

    printf("%d\n", is_valid_position(test1));
    printf("%d\n", is_valid_position(test2));
    printf("%d\n", is_valid_position(test3));
    printf("%d\n", is_valid_position(test4));
    printf("%d\n", is_valid_position(test5));

    printf("Board test: %lu\n", b.white_positions);

    Piece piece1 = { b, RED, false, "a1"};
    Piece piece2 = { b, BLACK, false, "h2"};

    Piece piece3 = { b, RED, false, "f2"};
    Piece piece4 = { b, BLACK, false, "f2"};

    printf("%d\n", is_valid_move(&piece1, "b2"));
    printf("%d\n", is_valid_move(&piece1, "c3"));
    printf("%d\n", is_valid_move(&piece1, "a2"));
    printf("%d\n", is_valid_move(&piece1, "b1"));

    printf("%d\n", is_valid_move(&piece3, "g1"));
    printf("%d\n", is_valid_move(&piece4, "g1"));

};