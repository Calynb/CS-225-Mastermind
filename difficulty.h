
/*
 * Author: Isaac Jarrells
 * Date: Oct. 31, 2023
 * Purpose: Classes of different diffculties for the game.
 *
 *
 *
 */

#ifndef UNTITLED_DIFFICULTY_H
#define UNTITLED_DIFFICULTY_H

#include <iostream>

class EasyMastermind{
private:
    int num_1;
    int num_2;
    int num_3;
    int num_4;
public:
    virtual void greetPlayer(){
        std::cout << "You have easy difficulty." << std::endl;
    }
};

class MediumMastermind:private EasyMastermind{
private:
    int num_5;
public:
    void greetPlayer() override{
        std::cout << "You have medium difficulty." << std::endl;
    }
};


class HardMastermind:private EasyMastermind{
private:
    int num_5;
    int num_6;
public:
    void greetPlayer() override{
        std::cout << "You have hard difficulty." << std::endl;
    }
};

#endif //UNTITLED_DIFFICULTY_H
