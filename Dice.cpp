//
// Created by OlegMakeienko on 2024-09-11.
//

#include "Dice.h"
#include <cstdlib>

Dice::Dice(int s) {
     sides(s), value(1);   //initializer list

        /*
                *Initialisering vs. Tilldelning:

                Initialisering: När en variabel initialiseras, skapas den direkt med ett specifikt värde.
                    Till exempel, för variabeln name skapas ett std::string-objekt direkt med det önskade värdet.
                Tilldelning: Om vi istället tilldelar ett värde till variabeln i konstruktorns kropp
                    (t.ex. name = playerName;), skapas först en standardinstans av name,
                    och sedan tilldelas det nya värdet. Detta kan leda till extra arbete och onödiga kostnader.
         */


    srand(time(nullptr)); //initialisation random point
}
void Dice::roll() {
    value = (rand() % sides) + 1;
}

int Dice::getValue() const { //const betyder att vi ska inte ändra value bara läser det
    return value;
}