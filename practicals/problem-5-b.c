#include <stdio.h>
#include <conio.h>

void main()
{
    int a, b, c;
    printf("Enter three integer numbers: ");
    scanf("%d%d%d", &a, &b, &c);

    if (a > c && a > b)
    {
        printf("Maximum number is: ");
        printf("%d", a);
    }
    else if (b > c && b > a)
    {
        printf("Maximum number is: ");
        printf("%d", b);
    }
    else if (c > a && b > c)
    {
        printf("Maximum number is: ");
        printf("%d", c);
    }
}