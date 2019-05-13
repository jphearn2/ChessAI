#include "Knight.h"

using namespace std;

Knight::Knight(){

}

Knight::Knight(int x, int y, int team){
    this->x = x;
    this->y = y;
    this->team = team;
    name = "Knight";
    display = 'N';
}

// bool Knight::isValid(int x, int y){

//     return true;
// }

// bool Knight::move(int x, int y){
//     if(isValid(x, y)){
//         this->x = x;
//         this->y = y;
//         return true;

//     }
//     return false;
// }