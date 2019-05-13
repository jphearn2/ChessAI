#include "Piece.h"

void Piece::move(int x, int y){
        this->x = x;
        this->y = y;
}

// not useable, needs information about the board that pieces don't have

// bool Piece::isValid(int x, int y){
//     if(display == 'P'){
//         if(this->x == x && this->y -1 == y){
//             return true;
//         }
//         else if()
//     }
// }