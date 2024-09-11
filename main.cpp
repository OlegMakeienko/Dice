#include <iostream>
#include "Dice.h"

using namespace std;

int main()
{
    Dice dice(6);
    dice.roll();
    cout << dice.getValue() << endl;
    return 0;
}
