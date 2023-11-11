
/************************************************************
* Author: Calyn Bauer, Lauren Bailey, and Issac Jarrells
* CS 225 Project
* Purpose: This file takes the user's guesses and compares
* them to the code until they get all 4 correct.
*  Previous: Version 1.7  Apr 4, 2023
* Ours: Version 2.0 October 31, 2023
*       Version 2.1 November 11, 2023
*************************************************************/

#ifndef UNTITLED_MASTERMIND_H
#define UNTITLED_MASTERMIND_H

#include "headers.h"
#include "PatternGen.h"
#include "PrintColors.h"
#include "RandomNums.h"
using namespace std;

int masterMind(){
    rand_nums randNum;
    randNum=PatternGenerator();
    char guess_1, guess_2, guess_3, guess_4;
    int count = 0;

    //printf("%d %d %d %d", rn.num_1, rn.num_2, rn.num_3, rn.num_4);
    cout<<"Type your 4 guesses: "<<endl;
    cin >> guess_1 >> guess_2 >> guess_3 >> guess_4;
    //printf("GUESS 1=%c GUESS2=%c GUESS3=%c GUESS4=%c \n", guess1, guess2, guess3, guess4);

    while ((guess_1 != randNum.num_1) || (guess_2 != randNum.num_2) || (guess_3 != randNum.num_3) || (guess_4 != randNum.num_4)) {
// create if loop, if the answer is correct, print 1, if incorrect, print 0
        if (guess_1 == randNum.num_1){
            cout<<"1 "<<endl;
        }
        if (guess_1 != randNum.num_1){
            cout<<"0 "<<endl;
        }
        if (guess_2 == randNum.num_2){
            cout<<"1 "<<endl;
        }
        if (guess_2 != randNum.num_2){
            cout<<"0 "<<endl;
        }
        if (guess_3 == randNum.num_3){
            cout<<"1 "<<endl;
        }
        if (guess_3 != randNum.num_3){
            cout<<"0 "<<endl;
        }
        if (guess_4 == randNum.num_4){
            cout<<"1 "<<endl;
        }
        if (guess_4 != randNum.num_4){
            cout<<"0 "<<endl;
        }
        count = count + 1;
        cout<<"Count: "<<count<<endl;

        if (count >= 12){                          // If the user cannot guess the code in 12 turns, the game ends
            cout<<"Sorry, you are out of turns. The pattern is "<<endl;
            PrintColors(randNum.num_1);
            PrintColors(randNum.num_2);
            PrintColors(randNum.num_3);
            PrintColors(randNum.num_4);
            break;
        }
        cout<<"Type your 4 guesses: "<<endl;
        cin >> guess_1 >> guess_2 >> guess_3 >> guess_4;
    }
    if (count <= 12 && (guess_1 == randNum.num_1) && (guess_2 == randNum.num_2) && (guess_3 == randNum.num_3) && (guess_4 == randNum.num_4) ){
        cout<<" You are correct! "<<endl;
        cout<<"\nThe pattern is "<<endl;
        PrintColors(randNum.num_1);
        PrintColors(randNum.num_2);
        PrintColors(randNum.num_3);
        PrintColors(randNum.num_4);
    }
    return 0;
}
#endif //UNTITLED_MASTERMIND_H

