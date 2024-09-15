//
// Created by OlegMakeienko on 2024-09-15.
//
using namespace std;
#include "Game.h"

#include <iostream>
#include <ostream>

void Game::initialize(vector<Player> &players) {
    int numPlayers;
    cout << "Enter number of players: ";
    cin >> numPlayers;

    for (int i = 0; i < numPlayers; ++i) { //creating player
        string playerName;
        cout << "Enter name av player" << i + 1 << " name: ";
        cin >> playerName;
        Player player(playerName);

        int numDice;
        cout << "Enter number of dice for " << player.getPlayerName() << ": ";
        cin >> numDice;

        for (int j = 0; j < numDice; ++j) {
            player.addDie(6);
        }

        players.push_back(player);
    }
}

void Game::takeTurn(vector<Player> &players) {
    for(Player &player : players) {
        player.rollDice();
        cout << player.getPlayerName() << " get total " << player.getTotalValue() << endl;
    }
}

vector<Player> Game::getWinners(const vector<Player> &players) {

    for(const Player &player : players) {
        vector<Player> winners;
        int highestScore = 0;

        for (const Player& player : players) {
            int totalValue = player.getTotalValue();
            if (totalValue > highestScore) {
                winners.clear();
                winners.push_back(player);
                highestScore = totalValue;
            } else if (totalValue == highestScore) {
                winners.push_back(player);
            }
        }
        return winners;
    }
};
