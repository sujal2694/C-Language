#include <stdio.h>

int main()
{
    int a = 5, b = 3, c = 2;
    int x, y;

    x = a++ + --b * c;
    y = (a > b && c != 0) ? a + b : a - b;

    printf("a = %d b = %d c = %d x = %d y = %d", a, b, c, x, y);
    return 0;
}

//----------output---------
// a = 6, b = 2, c = 2
// x = 9, y = 8