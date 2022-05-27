#include "Game.h"
#include "Dice.h"


Game::Game(){
    
}
Game::Game(Player* p1, Player* p2, Board* board){ 
    players.push_back(p1);
    players.push_back(p2);
    setBoard(board);
    turns = 10;
    
    
}
void Game::gameTurns(){
    int nowt = 0;

    do{
        if(turns>nowt){
            char ans;
            cout <<"Press C to continue next turn, or E to end game" <<endl;
            cin>> ans;
            setStatus1(ans);
            while (status1 == 2){
                cout <<"Invalid option, please press C to continue next turn or E to end the game" <<endl;
                cin>> ans;
                setStatus1(ans);  
            }
            
            for(int i = 0; i <= 1; i +=1){
                if(status1 == 0){
                    break;
                }
                movement(i, nowt);
            }

            nowt +=1;
            cout <<"NOWT"<<nowt<<endl;
            cout <<"STATUS"<<status1<<endl;
        }else{
            cout<<"You don't have turns left"<<endl;
            status1 = 0;
        }
        
        
    }while(status1 != 0);

    
    
}


void Game::setTurns(int turns){
    this->turns = turns;
}

void Game::setBoard(Board* board){
    this->board = board;
}

void Game::setStatus1(char op){
    int stat;
    if(op == 'E' || op == 'e'){
        stat = 0;
    }else if(op == 'C' || op == 'c'){
        stat = 1;
    }else{
        stat = 2;
    }
    status1 = stat;
}
void Game::setStatus1(int op){
    status1 = op;
}
int Game::getTurns(){
    return turns;
}

Board* Game::getBoard(){
    return board;
}

int Game::getStatus1(){
    return status1;
}

void Game::movement(int num, int turn){

    bool out = false;
    while (out == false){
        string txt = to_string(turn+1);
        txt+= to_string(num+1);
        int box = players[num]->getBox();
        txt+= to_string(box);
        
        //Throw the dice for the player
        Dice* d = new Dice();
        int rolled = d -> roll();
        cout << "rolled"<<rolled << endl;
        txt+= to_string(rolled);
        

        //Identify the new tile where it would go
        int FirstMov = box+rolled;
        
        if(FirstMov >= 29){
            //If the number exceeds the number of tiles the player wins
            Won(players[num]);
            break;
        }
        
        Tile* t= board -> getTile(FirstMov);
        char tt = t -> getType();
        //cout<<tt<<endl;
        txt+= tt;
        

        //Depending on the tile type move or leave the player
        
        if(tt == 'L'){
            if(FirstMov+3 >= 29){
                //If the number exceeds the number of tiles the player wins
                Won(players[num]);
                break;
            }else{
                players[num]->setBox(FirstMov+3);
            }
            
            
        }else if(tt == 'S'){
            players[num]->setBox(FirstMov-3);
            
        }else{
            players[num]->setBox(FirstMov);
        }


        int finalbox = players[num]->getBox();
        //cout<<finalbox << endl;
        txt+= to_string(finalbox);


        cout<<txt<<endl;
        break;

    }
    
    
}

void Game::Won(Player* p){
    cout<<"-----GAME OVER---"<<endl;
    cout<<"Player: "<<p->getNumber()<< " wins!!!"<<endl;
    setStatus1(0);
    
}



