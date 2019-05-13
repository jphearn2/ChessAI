#ifndef KING_H
#define KING_H

#include "Piece.h"

class King : public Piece{
    private:
        bool isValid(int x, int y);
    public:
        King();
        King(int x, int y, int team);
        bool move(int x, int y);

};

#endif