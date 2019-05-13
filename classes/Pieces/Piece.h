#ifndef PIECES_H
#define PIECES_H

#include <string>
using namespace std;

class Piece{
    private:
        virtual bool isValid(int x, int y){
            return false;
        }
    public:
        int team;
        char display;
        string name;
        int x;
        int y;
        virtual bool move(int x, int y){
            return false;
        }

        
};

#endif