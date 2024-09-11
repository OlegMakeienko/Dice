#include <iostream>
#include "Dice.h"
#include "Player.h"

using namespace std;

int main()
{
    // Dice dice(6);
    // dice.roll();
    // cout << dice.getValue() << endl;

    Player player("Johan");
    player.addDie(6);
    player.addDie(6);
    player.addDie(6);

    player.rollDice();

    cout << player.getPlayerName() << " rolled a total value of: " << player.getTotalValue() << endl;

    return 0;
}
