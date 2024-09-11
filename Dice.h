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
    Dice(int s = 6) : sides(s), value(1) {
        srand(time(nullptr)); //initialisation random point
    }

    void roll() {
        value = (rand() % sides) + 1;
    }

    int getValue() const { //const betyder att vi ska inte ändra value bara läser det
        return value;
    }
};



#endif //DICE_H
