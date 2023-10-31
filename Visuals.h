/*
 * Author:
 * Date: Oct. 31, 2023
 * Purpose to add visual adjustments for the game.
 * Resources:
 * https://stackoverflow.com/questions/29997096/bold-output-in-c
 *
 */

#ifndef CS225_VISUALS_H
#define CS225_VISUALS_H

#include <iostream>


std::ostream& bold_on(std::ostream& os){
    return os << "\e[1m";
}

std::ostream& bold_off(std::ostream& os){
    return os << "\e[0m";
}

void PrintColors(char rn)
{

// print R in bold red
    if (rn=='R'){
        std::cout<< " \e[1;31m R\e[0m";
    }


// print B in bold blue
    else if (rn=='B'){
        std::cout<< " \e[1;34m B\e[0m";
    }

// print G in bold green
    else if (rn=='G'){
        std::cout<< " \e[1;32m G\e[0m");
    }

// print Y in bold yellow
    else if (rn=='Y'){
        std::cout<< " \e[1;33m Y\e[0m";
    }

// print C in bold cyan
    else if (rn=='C'){
        std::cout<< " \e[1;36m C\e[0m";
    }

// print P in bold magenta
    else if (rn=='M'){
        std::cout<< " \e[;35m M\e[0m";
    }
}

#endif //CS225_VISUALS_H
