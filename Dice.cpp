#include "Dice.h"

Dice::Dice()
{
    number = 0;
}

int Dice::roll()
{
    number = rand() % 6 + 1;
    return number;
}

string Dice::toString()
{
    string txt = "DICE ROLLED: ";
    txt += to_string(number);
    return txt;
}