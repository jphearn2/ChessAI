#ifndef ROOK_H
#define ROOK_H

#include "Piece.h"

class Rook : public Piece{
    private:
        // bool isValid(int x, int y);
    public:
        Rook();
        Rook(int x, int y, int team);
        // bool move (int x, int y) ;
};

#endif