#include "Dice.h"
#include "Tile.h"
#include "Player.h"
#include "Board.h"

int main()
{
    srand(time(NULL));
    Dice* d = new Dice();
    d->roll();
    cout<<d->toString()<<endl;

    Tile* t = new Tile('S');
    cout <<t->toString()<<endl;

    Player* p1 = new Player("Laura");
    p1->setNumber(1);
    p1->setBox(1);
    cout<<p1->toString()<<endl;
    
    Board* b = new Board();
    cout<<b->toString()<<endl;

    return 0;
}