//
// Created by OlegMakeienko on 2024-09-11.
//

#ifndef DIE_H
#define DIE_H
#include <cstdlib>
#include <ctime>
using namespace std;



class Die {
private:
    int sides;
    int value;

public:
    Die(int s = 6) : sides(s), value(1) {
        srand(time(nullptr)); //initialisation random point
    }

    void roll() {
        value = (rand() % sides) + 1;
    }

    int getValue() const { //const betyder att vi ska inte ändra value bara läser det
        return value;
    }
};



#endif //DIE_H
