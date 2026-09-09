#include <stdio.h>

int main() {
    
    int x = 2;
    int y = 9;
    
    int* p1 = &x;

    printf("\n %p", &x);
    printf("\n %d", *p1);

    
    return 0;
}