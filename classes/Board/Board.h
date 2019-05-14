#ifndef BOARD_H
#define BOARD_H

#include "../Spaces/Space.h"
#include "../Pieces/Piece.h"

using namespace std;

class Board{
    private:
        int turnCount;
        int getPieceInput(int x, int y, char display);
        bool isValid(int x, int y, int piece);
        int getPieceAt(int x, int y);
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
    bool pathEmptyBishop(int startX, int startY, int endX,int endY);

};

#endif