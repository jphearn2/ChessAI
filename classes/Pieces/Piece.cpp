#include "Piece.h"
#include <string>

using namespace std;

void Piece::move(int x, int y)
{
        this->x = x;
        this->y = y;
}

string Piece::toString()
{
        string toPrint ="";
        toPrint = toPrint + display + '\n';
        toPrint = toPrint + to_string(x) + ", " + to_string(y) + '\n';
        toPrint = toPrint + to_string(team) + "\n\n";

        return toPrint;
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