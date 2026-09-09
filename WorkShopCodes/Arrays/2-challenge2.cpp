#include <iostream>
using namespace std;

int main(){

    int a[5] = {4, 7, 2, 9, 5};

    a[1] = a[3];
    a[4] = a[0] + a[2];

    printf("%d %d %d\n", a[1], a[4], a[3]);

    return 0;
}
