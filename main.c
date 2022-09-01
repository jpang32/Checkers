#include <stdio.h>
#include <stdlib.h>

#include "board.h"
#include "utils.h"

int main(int argc, char *argv[]) {

    Board b = { 'c' };

    char test1[] = "a1";
    char test2[] = "h8";
    char test3[] = "g1";
    char test4[] = "a9";
    char test5[] = "g9";

    printf("%d\n", is_valid_position(test1));
    printf("%d\n", is_valid_position(test2));
    printf("%d\n", is_valid_position(test3));
    printf("%d\n", is_valid_position(test4));
    printf("%d\n", is_valid_position(test5));

};