#include <iostream>
#include "headers.h"

#include "scoreboard.h"

#define EASYROWS 3
#define EASYCOLS 8

#define MEDIUMROWS 4
#define MEDIUMCOLS 8

#define HARDROWS 5
#define HARDCOLS 15


void print_arrayeasy(char lines[EASYROWS][EASYCOLS]) {
    for (int x = 0; x < EASYROWS; x++) {
        std::cout << lines[x] << std::endl;
    }
}

void print_arraymed(char lines[MEDIUMROWS][MEDIUMCOLS]) {
    for (int x = 0; x < MEDIUMROWS; x++) {
        std::cout << lines[x] << std::endl;
    }
}
void print_arrayhard(char lines[HARDROWS][HARDCOLS]) {
    for (int x = 0; x < HARDROWS; x++) {
        std::cout << lines[x] << std::endl;
    }
}