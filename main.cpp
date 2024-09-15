#include <iostream>
#include "Dice.h"
#include "Game.h"
#include "Player.h"

using namespace std;

int main() {
    vector<Player> players;
    Game game;

    game.initialize(players);
    game.takeTurn(players);

    vector<Player> winners = game.getWinners(players);

    cout << "Winner is :";
    for (const Player& winner : winners) {
        cout << winner.getPlayerName() << " ";
    }
    cout << endl;

    // Dice dice(6);
    // dice.roll();
    // cout << dice.getValue() << endl;

    return 0;
}
