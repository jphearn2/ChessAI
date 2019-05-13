#ifndef BOARD_H
#define BOARD_H

#include "../Spaces/Space.h"
#include "../Pieces/Piece.h"

using namespace std;

class Board{
    public:
    int AIteam;
    Space board[8][8];
    Piece pieces[32];

    Board();
    Board(int AIteam);

    void printBoard();
    void movePiece(string move);
};

#endif