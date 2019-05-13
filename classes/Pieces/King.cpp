#include "King.h"

using namespace std;

King::King(){

}

King::King(int x, int y, int team){
    this->x = x;
    this->y = y;
    this->team = team;
    name = "King";
    display = 'K';

}

// bool King::isValid(int x, int y){

//     return true;
// }

// bool King::move(int x, int y){
//     if(isValid(x, y)){
//         this->x = x;
//         this->y = y;
//         return true;

//     }
//     return false;
// }