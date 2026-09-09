#include <stdio.h>

//Function Declaration
int add(int a, int b);

int main() {
    
    int x = 5;
    int y = 3;
    int sum = add(x,y);

    printf("%d", sum);

    return 0;

}

//Function definition
int add(int a, int b){

    return (a+b) ;

}

