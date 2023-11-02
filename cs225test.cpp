//
// Version 1.0
// Changes will be made over time.
// Will be the main code that will start the game!


#include <iostream>
#include "difficulty.h"
using namespace std;
int mastermind(){
    int x;
    cout<< "Choose difficulty: ";
    cin>>x;
    EasyMastermind play1;
    MediumMastermind play2;
    HardMastermind play3;
    switch (x){
        case 1:
            play1.greetPlayer();
            break;
        case 2:
            play2.greetPlayer();
            break;
        case 3:
            play3.greetPlayer();
            break;
        default:
            cout<< "Thanks for playing!"<< endl;
            break;
    }
}
