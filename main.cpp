#include <iostream>
#include "Die.h"

using namespace std;

int main()
{
    Die die(6);
    die.roll();
    cout << die.getValue() << endl;
    return 0;
}
