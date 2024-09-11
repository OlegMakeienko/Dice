//
// Created by OlegMakeienko on 2024-09-11.
//

#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>

#include "Dice.h"
using namespace std;


class Player {
private:
    string name;
    Dice dice[3];
    int diceNumber;

public:
    Player(const string& playerName) : name(playerName), diceNumber(0) {};

    string getPlayerName() const { //för att kunna cout playerName
        return name;
    }

    void rollDice() {
        for (int i = 0; i < diceNumber; ++i) {
            dice[i].roll();
        }
    }
    int getTotalValue() const {
        int totalValue = 0;
        for (int i = 0; i < diceNumber; ++i) {
            totalValue += dice[i].getValue();
        }
        return totalValue;
    }

    void addDie(int sides) {
        if (diceNumber < 3) {
            dice[diceNumber] = Dice(sides);
            diceNumber++;
        }
    }

};



#endif //PLAYER_H
