#include <stdio.h>

int main()
{

    int x = 10;
    int y = 5;

    int *p = &x;
    int *q = &y;

    *p = *p + *q;
    q = p;
    *q = *q - 3;

    printf("%d %d\n", x, y);

    return 0;
}