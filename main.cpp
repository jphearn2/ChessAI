#include <iostream>
#include "classes/Board/Board.cpp"



#define TEST cout << "test\n";

using namespace std;

int main(){
    cout << "Greetings Master\n";
    Board b = Board(0);

    b.printBoard();
    char * test = "47P46";
    b.movePiece(test);
    b.printBoard();
    
    return 0;
}