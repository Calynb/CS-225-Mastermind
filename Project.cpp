/******************************
* Author: Calyn, Lauren, and Issac
* CS 225 Project
* Purpose: This file asks the user if they want to play mastermind, then runs the MasterMind function if they do.
* Based off of Version 1.7 from Apr 1, 2023
* Our versions: 2.0 October 31, 2023
******************************/
#include "PatternGen.h"
#include "headers.h"

int main()
{
    char ans1, ans2;

    cout<<("Do you wanna play Mastermind? (y/n) ");
    cin>>ans1;
    cout<<(" ")<<endl;

    if (ans1 == 'y'|| ans1=='Y') {
        ifstream rulesFile("rules.txt"); // changes if the rules files is a different name.
        while(rulesFile.eof()){
            string rules;
            rulesFile >> rules;
        }

        cout<<(" ")<<endl;
        cout<<"Are you ready to play? (y/n) " <<endl;
        cin>>ans2;
        //play game
        while (ans2 == 'y' || ans2=='Y') {
            MasterMind();
            // prompt user if they want to play again
            cout << endl << "\nDo you want to play again? (y/n) ";
            cin>>ans2;
        }
    }
    cout << "Have a nice day!" << endl;
}

