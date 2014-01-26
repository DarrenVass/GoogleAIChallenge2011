#ifndef JOLLYBOT_H_
#define JOLLYBOT_H_

#include "State.h"

/*
    This struct represents your JollyBot in the game of Ants
*/
struct JollyBot
{
    State state;

    JollyBot();

    void playGame();    //plays a single game of Ants

    void makeMoves();   //makes moves for a single turn
    void endTurn();     //indicates to the engine that it has made its moves
};

#endif //JOLLYBOT_H_
