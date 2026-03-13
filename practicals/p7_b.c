#include <stdio.h>

int find_max(int a, int b);

void main()
{
    int x;
    x = find_max(1, 6);
    printf("%d", x);
}

int find_max(int a, int b)
{
    if (a > b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
