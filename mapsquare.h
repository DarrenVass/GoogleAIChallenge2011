#ifndef SQUARE_H_
#define SQUARE_H_

#include <vector>

/*
    struct for representing a square in the grid.
*/
struct MapSquare
{
    enum MapType{
        Unknown, Water, Hill, Land, Food
    };

    MapSquare()
    {}

    //resets the information for the square except water information
    void reset()
    {

    }
};

#endif //SQUARE_H_
