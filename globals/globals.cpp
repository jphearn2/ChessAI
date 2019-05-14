#include "globals.h"

using namespace std;

int Globals::signOf(int s){
    if(s > 0) return 1;
    else if (s < 0) return -1;
    else return 0;
}