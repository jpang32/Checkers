#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include "utils.h"

/* 
* Checks to see if position string provided is valid
* position: describes position on Board (e.g., a1, h7, b6, etc.)
* returns: 0 if valid, -1 if not
*/
bool is_valid_position(char position[]) {

    // Check for correct length
    if (strlen(position) != 2) {
        printf("Invalid position length\n");
        return -1;
    }

    // Check that each value in the
    // parameters is valid
    if (position[0] < 97 || position[0] > 122) {
        printf("Invalid row value\n");
        return -1;
    }
    
    if (position[1] - '1' < 0 || position[1] - '1' > 7) {
        printf("Invalid column value\n");
        return -1;
    }

    return 0;

};