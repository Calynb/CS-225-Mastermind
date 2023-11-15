#include <iostream>
#include "headers.h"
#include "PatternGen.h"
#include "Scoreboard.h"  

#define ROWS 4
#define COLS 4

void print_array(char lines[ROWS][COLS]) {
    for (int x = 0; x < ROWS; x++) {
        std::cout << lines[x] << std::endl;
    }
}

int main() {
    char intro[ROWS][COLS] = {
        "***************",
        "*             *",
        "*             *",
        "*             *",
        "*             *",
        "*             *",
        "*             *",
        "*             *",
        "***************"
    };

    print_array(intro);

    return 0;
}
