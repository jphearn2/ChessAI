#include <iostream>
#include "Queen.h"

Queen::Queen(){

}

Queen::Queen(int x, int y, int team){
    this->x = x;
    this->y = y;
    this->team = team;
    name = "Queen";
    display = 'Q';
}

// bool Queen::isValid(int x, int y){

//     return true;
// }

// bool Queen::move(int x, int y){
//     if(isValid(x, y)){
//         this->x = x;
//         this->y = y;
//         return true;

//     }
//     return false;
// }