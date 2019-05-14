#ifndef BOARD_H
#define BOARD_H

#include "../Spaces/Space.h"
#include "../Pieces/Piece.h"

using namespace std;

class Board{
    private:
        int turnCount;
        int getPiece(int x, int y, char display);
        bool isValid(int x, int y, int piece);
    public:
    int AIteam;
    Space board[8][8];
    Piece pieces[32];

    Board();
    Board(int AIteam);

    void printBoard();
    void movePiece(char * move);
    bool spaceEmpty(int x, int y);
    bool pathEmptyRook(int startX, int startY, int endX,int endY);
};

#endif