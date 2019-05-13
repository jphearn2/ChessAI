#ifndef SPACE_H
#define SPACE_H

#include "../Pieces/Piece.h"

class Space{
    public:
    Piece * piece;

    Space();
    Space(Piece * p);
};

#endif