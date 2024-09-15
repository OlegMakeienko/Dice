//
// Created by OlegMakeienko on 2024-09-11.
//

#ifndef DICE_H
#define DICE_H
#include <cstdlib>
#include <ctime>
using namespace std;



class Dice {
private:
    int sides;
    int value;

public:
    Dice(int s = 6);

    void roll();

    int getValue() const;
};

#endif //DICE_H
