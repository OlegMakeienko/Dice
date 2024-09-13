//
// Created by OlegMakeienko on 2024-09-11.
//

#include "Player.h"

Player::Player(const string& playerName) : name(playerName), score(0) {}

void Player::rollDice() {
    for (Dice& die : dice) {
        die.roll();
    }
}

int Player::getTotalValue() const {
    int totalValue = 0;
    for (const Dice& die : dice) {
        totalValue += die.getValue();
    }
    return totalValue;
}

void Player::increaseScore() {
    score++;
}

void Player::addDie(int sides) {
    dice.emplace_back(sides);
}

string Player::getPlayerName() const {
    return name;
}

int Player::getScore() const {
    return score;
}

