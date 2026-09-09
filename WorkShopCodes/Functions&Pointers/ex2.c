#include <stdio.h>

int minimum(int a, int b){

    if( a<b ) return a;
    else return b;
}

int main() {
    
    int x = 5;
    int y = 3;

    //Without Functions:
    /*
    int min;

    if( x<y ) min = x;
    else min = y; 
    */
//================================

    //With functions:
    int min = minimum(x,y);

    return 0;

}