/*****************************
* Author: Monica Hyndman
* Edited: Isaac Jarrells
* Purpose: To print letters with corresponding colors
* Resources: Professor Marriot
*  For colors: https://gist.github.com/RabaDabaDoba/145049536f815903c79944599c6f952a
* Version: 1.1 April 4,2023
******************************/
#include "headers.h"
#include "PatternGen.h"

void PrintColors(char rn)
{

// print R in bold red
    if (rn=='R'){
        std::cout << "\033[91m" << "R" << "\033[0m";
    }


// print B in bold blue
    else if (rn=='B'){
        std::cout << "\033[94m" << "B" << "\033[0m";
    }

// print G in bold green
    else if (rn=='G'){
        std::cout << "\033[92m" << "G" << "\033[0m";
    }

// print Y in bold yellow
    else if (rn=='Y'){
        std::cout << "\033[93m" << "Y" << "\033[0m";
    }

// print C in bold cyan
    else if (rn=='C'){
        std::cout << "\033[96m" << "C" << "\033[0m";
    }

// print P in bold magenta
    else if (rn=='M'){
        std::cout << "\033[95m" << "M" << "\033[0m";
    }
}

