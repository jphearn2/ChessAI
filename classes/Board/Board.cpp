#include "Board.h"
#include "../Pieces/Queen.cpp"
#include "../Pieces/Pawn.cpp"
#include "../Pieces/Rook.cpp"
#include "../Pieces/Knight.cpp"
#include "../Pieces/Bishop.cpp"
#include "../Pieces/King.cpp"
#include "../Pieces/Piece.cpp"
#include "../Spaces/Space.cpp"

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

Board::Board(){
    
}

Board::Board(int AIteam){
    turnCount = 0;
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
    pieces[8] = Rook(0, 7, 0);
    board[7][0].piece = &pieces[8];
    pieces[9] = Rook(7, 7, 0);
    board[7][7].piece = &pieces[9];
    pieces[10] = Knight(1, 7, 0);
    board[7][1].piece = &pieces[10];
    pieces[11] = Knight(6, 7, 0);
    board[7][6].piece = &pieces[11];
    pieces[12] = Bishop(2,7, 0);
    board[7][2].piece = &pieces[12];
    pieces[13] = Bishop(5,7, 0);
    board[7][5].piece = &pieces[13];
    pieces[14] = Queen(3, 7, 0);
    board[7][3].piece = &pieces[14];
    pieces[15] = King(4, 7, 0);
    board[7][4].piece = &pieces[15];

    for(int i = 0; i < 8; i++){
        pieces[16 + i] = Pawn(i,1,0);
        board[1][i].piece = &pieces[16 + i];
    }
    pieces[24] = Rook(0, 0, 0);
    board[0][0].piece = &pieces[24];
    pieces[25] = Rook(7, 0, 0);
    board[0][7].piece = &pieces[25];
    pieces[26] = Knight(1, 0, 0);
    board[0][1].piece = &pieces[26];
    pieces[27] = Knight(6, 0, 0);
    board[0][6].piece = &pieces[27];
    pieces[28] = Bishop(2,0, 0);
    board[0][2].piece = &pieces[28];
    pieces[29] = Bishop(5,0, 0);
    board[0][5].piece = &pieces[29];
    pieces[30] = Queen(3, 0, 0);
    board[0][3].piece = &pieces[30];
    pieces[31] = King(4, 0, 0);
    board[0][4].piece = &pieces[31];
}

void Board::printBoard(){
    cout << endl << endl;
    for(int i = 0; i < 8; i++){
        cout << "  --" << i + 1 << "--\t";
    }
    cout << endl << endl;
    for(int y = 0; y < 8; y++){
        cout << y + 1 << "|";
        for(int x = 0; x < 8; x++){
            
            if(board[y][x].piece == NULL){
                cout << " \t|";
            }
            else{
                cout << "   " << board[y][x].piece->display << "\t|";
            }
        }
        
        cout << endl << endl;
        for(int i = 0; i < 8; i++){
            cout << "  -----\t";
        }
        cout << endl << endl;
    }
}

void Board::movePiece(char * move){
    cout << move << endl;
    int piece = getPiece((int) (move[0] - '0') - 1, (int) (move[1] - '0') - 1, move[2]);
    // cout << piece << endl;
    int newX = (int)(move[3] - '0') - 1;
    int newY = (int)(move[4] - '0') - 1;

    if(isValid(newX, newY, piece)){
        pieces[piece].move(newX, newY);
        board[(int) (move[1] - '0') - 1][(int) (move[0] - '0') - 1].piece = NULL;
        board[newY][newX].piece = &pieces[piece];
    }
    
}

bool Board::isValid(int x, int y, int piece){
    if(pieces[piece].display == 'P'){
        if(pieces[piece].x == x 
        && ((pieces[piece].y - 1 == y && pieces[piece].team == 0) || (pieces[piece].y + 1 == y && pieces[piece].team == 1)) 
        && spaceEmpty(x, y)){
            return true;
        }
        else if((pieces[piece].x - 1 == x || pieces[piece].x + 1 == x ) 
            && ((pieces[piece].y - 1 == y && pieces[piece].team == 0) || (pieces[piece].y + 1 == y && pieces[piece].team == 1))
            && !spaceEmpty(x, y)){
                return true;
        }
        else if(pieces[piece].x == x
            && ((pieces[piece].y - 2 == y && pieces[piece].y == 6 && pieces[piece].team == 0) || (pieces[piece].y + 2 == y && pieces[piece].y == 1 && pieces[piece].team == 1))
            && spaceEmpty(x, y)){
                return true;
        }
        else{
            return false;
        }


    }
    else if(pieces[piece].display == 'R'){

    }
    else if(pieces[piece].display == 'N'){

    }
    else if(pieces[piece].display == 'B'){

    }
    else if(pieces[piece].display == 'K'){

    }
    else if(pieces[piece].display == 'Q'){

    }
    return true;
}

bool Board::spaceEmpty(int x, int y){
    for(int i = 0; i < 32; i++){
        if(pieces[i].x == x && pieces[i].y == y){
            return false;
        }
    }

    return true;
}

int Board::getPiece(int x, int y, char display){

    for(int i = 0; i < 32; i++){
        if(pieces[i].x == x && pieces[i].y == y && pieces[i].display == display){
            return i;
        }
    }

    return -1;

}

