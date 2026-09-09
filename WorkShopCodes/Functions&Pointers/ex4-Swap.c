#include <stdio.h>

void swap(int x, int y){
    int temp = y;
    y = x;
    x = temp;

    // printf("x = %d\n", x);
    // printf("y = %d\n", y);
    // printf("\n");
    
    return;
}

int main() {
    
    int x = 4;
    int y = 9;
    
    
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("\n");

    
    // Target=> x=9, y=4;
    

    swap(x,y);
    
    printf("x = %d\n", x);
    printf("y = %d\n", y);
    
    
    return 0;
}