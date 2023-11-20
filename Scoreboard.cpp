/************
* Author: Calyn Bauer, Lauren Bailey, and Issac Jarrells
* CS 225 Project
* Purpose: This creates a visual of scoreboard
* Version 2.1 Oct 19, 2023
* Version 2.2 Nov 9, 2023
* Version 2.3 Nov 11, 2023
* Version 2.4 Nov 20, 2023
*************/
#include <iostream>
#include "headers.h"
#include "PatternGen.h"
#include "Scoreboard.h"  

#define ROWS 10
#define COLS 10

void print_array(char lines[ROWS][COLS]) {
    for (int x = 0; x < ROWS; x++) {
        std::cout << lines[x] << std::endl;
    }
}

int main() {
char intro[ROWS][COLS] = {
    "****",
    "*  *",
    "*  *",
    "****"
};


    print_array(intro);

    return 0;
}
