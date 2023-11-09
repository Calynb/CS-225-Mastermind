/*****************************
* Author: Monica Hyndman
* Edited By: Isaac Jarrells
* Purpose: To print letters with corresponding colors
* Resources: Professor Marriot
*  For colors: https://gist.github.com/RabaDabaDoba/145049536f815903c79944599c6f952a
* Version: 1.1 April 4,2023
******************************/

#include "headers.h"
#include "PatternGen.h"

void PrintColors(char rn)
{

// print R in bright red
    if (rn=='R'){
        std::cout << "\033[91m" << "R" << "\033[0m";
    }


// print B in bright blue
    else if (rn=='B'){
        std::cout << "\033[94m" << "B" << "\033[0m";
    }

// print G in bright green
    else if (rn=='G'){
        std::cout << "\033[92m" << "R" << "\033[0m";
    }

// print Y in bright yellow
    else if (rn=='Y'){
        std::cout << "\033[91m" << "R" << "\033[0m";
    }

// print C in bright cyan
    else if (rn=='C'){
        std::cout << "\033[96m" << "R" << "\033[0m";
    }

// print P in bright magenta
    else if (rn=='M'){
        std::cout << "\033[95m" << "R" << "\033[0m";
    }
}


