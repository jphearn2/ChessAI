#ifndef QUEEN_H  
#define QUEEN_H
#include "Piece.h"

class Queen : public Piece{
    private:
        bool isValid(int x, int y);
    public:
        Queen();
        Queen(int x, int y, int team);
        bool move(int x, int y);
};

#endif