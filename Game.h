//
// Created by OlegMakeienko on 2024-09-15.
//

#ifndef GAME_H
#define GAME_H
#include <vector>
#include "Player.h"

class Game {
public:
    void initialize(vector<Player> &players);
    void takeTurn(vector<Player> &players);
    vector<Player> getWinners(const vector<Player> &players);
};


#endif //GAME_H
