#include <iostream>
#include "classes/Board/Board.cpp"



#define TEST cout << "test\n";

using namespace std;

int main(){
    cout << "Greetings Master\n";
    Board b = Board(0);

    b.printBoard();
    char * test = "17P15";
    b.movePiece(test);
    test = "15P14";
    b.movePiece(test);
    test = "14P13";
    b.movePiece(test);
    test = "18R14";
    b.movePiece(test);
    test = "14R84";
    b.movePiece(test);
    b.printBoard();
    
    return 0;
}