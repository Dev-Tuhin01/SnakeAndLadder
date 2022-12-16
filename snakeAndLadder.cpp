/*
    *this program is basic game of chess and ladder and is a CLI based game.
    *in this game there are 2 players * and #. and it is a turn based game.
    *there are 5 ladders and 7 snakes in this game. 
*/

#include <iostream>
#include <CTIME>
#include <TIME.H>
#include <stdlib.H>

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
