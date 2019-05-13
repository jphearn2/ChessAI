#ifndef KNIGHT_H
#define KNIGHT_H

#include "Piece.h"

class Knight : public Piece{
    private:
        // bool isValid(int x, int y) ;
    public:
        Knight();
        Knight(int x, int y, int team);
        // bool move(int x, int y) ;
};

#endif