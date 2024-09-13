//
// Created by OlegMakeienko on 2024-09-11.
//

#ifndef PLAYER_H
#define PLAYER_H
#include <vector>

#include "Dice.h"
using namespace std;


class Player {
private:
    string name;
    int score;
    vector<Dice> dice;

public:
    Player(const string& playerName);

    void rollDice();

    int getTotalValue() const;

    void increaseScore();

    void addDie(int sides);

    string getPlayerName() const;

    int getScore() const;
};



#endif //PLAYER_H
