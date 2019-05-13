#include "Pawn.h"
#include "Piece.h"

Pawn::Pawn(){

}

Pawn::Pawn(int x, int y, int team){
    this->x = x;
    this->y = y;
    this->team = team;
    name = "Pawn";
    display = 'P';
}

// bool Pawn::isValid(int x, int y){

//     return true;
// }

// bool Pawn::move(int x, int y) {
//     cout << "test\n";
//     if(isValid(x, y)){
//         this->x = x;
//         this->y = y;
//         return true;

//     }
//     return false;
// }