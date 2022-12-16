/*
    *this program is basic game of chess and ladder and is a CLI based game.
    *in this game there are 2 players * and #. and it is a turn based game.
    *there are 5 ladders and 7 snakes in this game. 
*/

#include <iostream>
#include <CTIME>
#include <TIME.H>
#include <stdlib.H>

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
    srand(time(0));

    roll = rand() % 6 + 1;

    return roll;
}



int main(int argc, char const *argv[])
{
    
    return 0;
}
