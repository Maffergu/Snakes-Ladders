#include "Tile.h"

Tile::Tile(char _type)
{
    type = _type;
}

char Tile::getType()
{
    return type;
}

void Tile::setType(char t)
{
    type = t;
}

string Tile::toString()
{
    string txt = "";
    txt += type;
    return txt;
}