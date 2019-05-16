#include <iostream>
#include "classes/Board/Board.cpp"



#define TEST cout << "test\n";

using namespace std;

int main(){
    string input;
    char toMove [10];
    cout << "Greetings Master\n";
    cout << "don't forget to load up the chess board\n";
    Board b = Board(0);

    b.printBoard();
    cin >> input;
    while(input != "q"){
        // cout << input << endl;
        system("clear");
        strcpy(toMove, input.c_str());
        b.movePiece(toMove);
        b.printBoard();
        if(b.createsCheck(b.turnCount)){
            cout << "you're in check\n";
            }
        cin >> input;
    }
    
    return 0;
}