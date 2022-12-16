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



int main(int argc, char const *argv[])
{
    srand(time(NULL));
    char choice;
    bool turn = 0,repeat = 0;

    while (1)
    {
        /*
            *if turn is false then it's player1's turn , else if turn is true then it's player2's turn
            *if one player gets 6 or players promoted using ladder then  thier turn repeats.
        */


        //*this part let the player know whose turn it is
        if(!turn){
            cout<<"player1's turn"<<endl;
        }
        else{
            cout<<"player2's turn "<<endl;
        }

        cin>>choice;

        int temp = dice();

        if(temp == 6){
            repeat = 1;
        }

        if(!turn){
            player1Position += temp;
        }
        else{
            player2Position += temp;
        }


        if(!repeat){//*if repeat is false then turn changes
            turn = !turn;
        }

        cout<<"---------------------------------"<<endl;//*end of turn
    }
    
    return 0;
}
