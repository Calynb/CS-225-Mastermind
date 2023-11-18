
/*******************************************************************************************************************
* Author: Calyn, Lauren, and Issac
* CS 225 Project
* Purpose: This file asks the user if they want to play mastermind, then runs the MasterMind function if they do.
* Based off of Version 1.7 from Apr 1, 2023
* Our versions: 2.0 October 31, 2023
*               Version 2.1 November 18, 2023
* Sources: https://replit.com/talk/ask/how-do-i-change-the-color-of-the-text-on-c/137999
*********************************************************************************************************************/

#include "Visual.h"

class bold {
    std::string const &s;
public:
    bold(std::string const &s) : s(s) {}

    friend std::ostream &operator<<(std::ostream &os, bold const &bolded) {
        os << "\x1b[1m" << bolded.s << "\x1b[0m";
        return os;
    }
};

void Colors(char color){
    if(color == 'R') {
        std::cout << "\033[91m";
    }
    else if(color == 'B') {
        std::cout << "\033[94m";
    }
    else if(color == 'G') {
        std::cout << "\033[92m";
    }
    else if(color == 'Y') {
        std::cout << "\033[93m";
    }
    else if(color == 'C') {
        std::cout << "\033[96m";
    }
    else if(color == 'M') {
        std::cout << "\033[95m";
    }
    else if(color == 'W'){
        std::cout << "\033[97m";
    }
    else if(color == 'D') {
        std::cout << "\033[0m";
    }
};
