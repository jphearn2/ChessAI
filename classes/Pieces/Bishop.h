#ifndef BISHOP_H
#define BISHOP_H

#include "Piece.h"

class Bishop : public Piece{
    private:
        bool isValid(int x, int y);
    public:
        Bishop();
        Bishop(int x, int y, int team);
        bool move(int x, int y);
};

#endif