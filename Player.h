#pragma once
#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
    int number;
    int box;
    string name;
public:
    Player(string _name);
    void setBox(int b);
    void setNumber(int n);
    int getBox();
    int getNumber();
    string toString();
};