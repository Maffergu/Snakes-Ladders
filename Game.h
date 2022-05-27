#pragma once
#include <iostream>
#include <string>
#include<vector>
#include "Board.h"
#include "Player.h"

using namespace std;

class Game{
private:
    vector<Player*> players;
    Board* board;
    int turns;
    int status1;
    
 
public:
    Game();
    Game(Player* p1, Player* p2, Board* board);
    void gameTurns();
    void setTurns(int turns);
    void setBoard(Board* board);
    void setStatus1(char op);
    void setStatus1(int op);
    int getTurns();
    Board* getBoard();
    int getStatus1();
    void movement(int num, int turn);
    void Won(Player* p);
    
    

};