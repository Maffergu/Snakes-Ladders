#pragma once
#include <iostream>
#include <string>
#include<vector>
#include "Board.h"
using namespace std;

class Game
{
private:
    vector<Player*> players;
    Board* board;
public:
    Game();
    string toString();
};