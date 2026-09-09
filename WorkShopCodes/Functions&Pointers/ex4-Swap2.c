#include <stdio.h>

void swap(int* p1, int* p2){
    int temp = *p2;
    *p2 = *p1;
    *p1 = temp;
    return;
}

int main() {
    
    int x = 4;
    int y = 9;

    
    printf("x = %d\n", x);
    printf("y = %d\n", y);

    // Target=> x=9, y=4;

    swap( &x, &y);

    printf("x = %d\n", x);
    printf("y = %d\n", y);

    
    return 0;
}