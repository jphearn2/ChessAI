#include "Board.h"
#include "../Pieces/Queen.cpp"
#include "../Pieces/Pawn.cpp"
#include "../Pieces/Rook.cpp"
#include "../Pieces/Knight.cpp"
#include "../Pieces/Bishop.cpp"
#include "../Pieces/King.cpp"
#include "../Pieces/Piece.h"
#include "../Spaces/Space.cpp"

#include <iostream>

using namespace std;

Board::Board(){
    
}

Board::Board(int AIteam){
    this->AIteam = AIteam;
    for(int y = 0; y < 8; y++){
        for(int x = 0; x < 8; x++){
            board[y][x].piece = NULL;
        }
    }

    for(int i = 0; i < 8; i++){
        pieces[i] = Pawn(i,6,0);
        board[6][i].piece = &pieces[i];
    }
}

void Board::printBoard(){
    for(int y = 0; y < 8; y++){
        for(int x = 0; x < 8; x++){
            if(board[y][x].piece == NULL){
                cout << " \t";
            }
            else{
                cout << board[y][x].piece->display << "\t";
            }
        }
        cout << endl << endl << endl;
    }
}

void movePiece(string move){

}

