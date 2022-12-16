/*
    *this program is basic game of chess and ladder and is a CLI based game.
    *in this game there are 2 players * and #. and it is a turn based game.
    *there are 5 ladders and 7 snakes in this game. 
*/

#include <iostream>
#include <ctime>
#include <time.H>
#include <stdlib.H>
#include <cstdlib>

using namespace std;


int player1Position = 1 , player2Position = 1;

int ladder[] = {10,41,73,36,63};
int snake[] = {19,93,87,72,55,27,48};

int ladderEnd[] = {15,10,21,21,25};
int snakeEnd[] = {-14,-50,-41,-20,-25,-11,-20};


int dice(){
    /*
        * This is a RNG function
        * This function will return some number between 1 to 6 randomly
    */

    int roll;

    roll = rand() % 6 + 1;

    return roll;
}

int positionChecker(int position){
    /*
        *this function checks for if the player's current position got any lader or snakes;
        * if any snake or ladder is found then the player is promoted or demoted by the 
        * respective value. Which is returned by this function
        * if none is found then function returned 0
    */

   for (int i = 0; i < 5; i++){ //* checking for ladder
    if(position == ladder[i]){
        cout<<"Yay!!! A ladder!"<<endl;
        return ladderEnd[i];
    }
   }
   
   for(int i = 0 ; i < 7 ; i++){
    if(position == snake[i]){ //* checking for snakes
        cout<<"Oops!!! looks like a snake bit you"<<endl;
        return snakeEnd[i];
    }
   }
    return 0;
}



int main(int argc, char const *argv[])
{
    srand(time(NULL));
    char choice;
    bool turn = 0,repeat = 0;

    cout<<"Player1 current position: "<<player1Position<<endl;
    cout<<"Player2 current position: "<<player2Position<<endl;

    while (1)
    {
        /*
            *if turn is false then it's player1's turn , else if turn is true then it's player2's turn
            *if one player gets 6 then  thier turn repeats.
        */
        repeat = 0;//*closes repeat

        //*this part let the player know whose turn it is
        if(!turn){
            cout<<"player1's turn"<<endl;
        }
        else{
            cout<<"player2's turn "<<endl;
        }

        cin>>choice;//*initiate turn

        int temp = dice();//*roll dice

        cout<<"Dice rolle: "<<temp<<endl;

        if(temp == 6){//*if 6 falls then code will repeat
            repeat = 1;
        }
        

        //* updates player position
        if(!turn){
            player1Position += temp;
        }
        else{
            player2Position += temp;
        }
        


        player1Position += positionChecker(player1Position); //* checks for ladders and snake in current position, updates it based on it 


        if(!turn){
            cout<<"Player1 current position:"<<player1Position<<endl;
        }
        else{
            cout<<"Player2 current position"<<player2Position<<endl;
        }

        
        if(!repeat){//*if repeat is false then turn changes
            turn = !turn;
        }

        cout<<"---------------------------------"<<endl;//*end of turn
    }
    
    return 0;
}
