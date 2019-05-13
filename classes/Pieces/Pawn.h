#ifndef PAWN_H
#define PAWN_H

#include "Piece.h"

class Pawn : public Piece{
    private:
        bool isValid(int x, int y);
    public:
        Pawn();
        Pawn(int x, int y, int team);
        bool move(int x, int y);
};

#endif