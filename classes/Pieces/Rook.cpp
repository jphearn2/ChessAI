#include "Rook.h"
#include <iostream>

using namespace std;

Rook::Rook(){

}

Rook::Rook(int x, int y, int team){
    this->x = x;
    this->y = y;
    this->team = team;
    name = "Rook";
    display = 'R';
}

// bool Rook::isValid(int x, int y){

//     return true;
// }

// bool Rook::move(int x, int y){
//     if(isValid(x, y)){
//         this->x = x;
//         this->y = y;
//         return true;

//     }
//     return false;
// }