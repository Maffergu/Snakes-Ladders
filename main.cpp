
#include "Tile.h"
#include "Player.h"
#include "Board.h"
#include "Game.h"

int main(){



  //Lanzar una vez el dado
  //srand(time(NULL));
  //Dice* d = new Dice();
  //d->roll();
  //cout<<d->toString()<<endl;


  Player* p1 = new Player("Laura");
  p1->setNumber(1);
  p1->setBox(1);
  cout<<p1->toString()<<endl;

  Player* p2 = new Player("Lol");
  p2->setNumber(2);
  p2->setBox(1);
  cout<<p2->toString()<<endl;

  //Creando nuevo tablero  
  Board* b = new Board();
  cout<<b->toString()<<endl;

  Game* g = new Game(p1,p2,b);
  g-> gameTurns();
  

  return 0;
}