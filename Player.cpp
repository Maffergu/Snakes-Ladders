#include "Player.h"

Player::Player(string _name)
{
    name = _name;
    number = 0;
    box = 0;
}

void Player::setBox(int b)
{
    box = b;
}
void Player::setNumber(int n)
{
    number = n;
}

int Player::getBox()
{
    return box;
}

int Player::getNumber()
{
    return number;
}

string Player::toString()
{
    string txt = "PLAYER: ";
    txt += name + "\n";
    txt += "NUMBER: " + to_string(number) + "\n";
    txt += "BOX: " + to_string(box);
    return txt;
}