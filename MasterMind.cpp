/************
* Author: Calyn Bauer, Lauren Bailey, and Issac Jarrells
* CS 225 Project
* Purpose: This file takes the user's guesses and compares 
* them to the code until they get all 4 correct.
*  Previous: Version 1.7  Apr 4, 2023
* Version 2.0 Oct 19, 2023
* Version 2.1 Oct 31, 2023
* Version 2.2 Nov 9, 2023
* Version 2.3 Nov 11, 2023
* Version 2.4 Nov 20, 2023
*************/
#include <iostream>
#include <vector>
#include "headers.h"
#include "PatternGen.h"
#include "Scoreboard.h"  

int MasterMind() {
    rand_nums rn;
    rn = PatternGenerator();
    const int codeLength = 4;
    char guesses[codeLength];
    int count = 0;
    vector<char> congrats = {'C', 'o', 'n', 'g', 'r', 'a', 't', 'u', 'l', 'a', 't', 'i', 'o', 'n', 's', '!'};

    while (count < 12) {
        cout << "Type your 4 guesses: ";
        for (int i = 0; i < codeLength; ++i) {
            cin >> guesses[i];
        }

        for (int i = 0; i < codeLength; ++i) {
            if (guesses[i] == rn.num_1) {
                cout << "1 ";
            } else if (guesses[i] == rn.num_2 || guesses[i] == rn.num_3 || guesses[i] == rn.num_4) {
                cout << "0 ";
            } else {
                cout << "x ";
            }
        }

        cout << endl;

        count++;

        if (count >= 12) {
            cout << "Sorry, you are out of turns. The pattern is: " << endl;
            PrintColors(rn.num_1);
            PrintColors(rn.num_2);
            PrintColors(rn.num_3);
            PrintColors(rn.num_4);
            break;
        }

        if (guesses[0] == rn.num_1 && guesses[1] == rn.num_2 && guesses[2] == rn.num_3 && guesses[3] == rn.num_4) {
            cout << "Congratulations! You are correct!" << endl;
            cout << "The pattern is " << endl;
            PrintColors(rn.num_1);
            PrintColors(rn.num_2);
            PrintColors(rn.num_3);
            PrintColors(rn.num_4);
            return 0;
        }
    }

    return 0;
}

int main() {
    MasterMind();
    Scoreboard();
    return 0;
}
