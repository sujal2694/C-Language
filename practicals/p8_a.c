#include <stdio.h>

int exch_nums(int a, int b);

void main()
{
    int x;
    x = exch_nums(5,6);
    printf("%d",x);
}

int exch_nums(int a, int b)
{
    printf("Enter two numbers: ");
    scanf("%d%d", &a, &b);

    a = a * b;
    b = a / b;
    a = a / b;

    return a,b;
}