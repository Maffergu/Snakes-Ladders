#pragma once
#include <iostream>
#include <string>
#include<vector>
#include "Tile.h"
using namespace std;

class Board
{
private:
    int numTiles;
    vector<Tile*> tiles;
public:
    Board();
    string toString();
    Tile* getTile(int num);
};