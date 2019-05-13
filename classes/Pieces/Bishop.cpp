#include "Bishop.h"

using namespace std;

Bishop::Bishop(){

}

Bishop::Bishop(int x, int y, int team){
    this->x = x;
    this->y = y;
    this->team = team;
    name = "Bishop";
    display = 'B';
}

bool Bishop::isValid(int x, int y){
    return true;
}

bool Bishop::move(int x, int y){
    return true;
}