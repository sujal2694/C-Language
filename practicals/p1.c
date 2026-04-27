#include <stdio.h>

void main()
{
    int first, second, next, num;
    num = 10 ;
    first = 0;
    second = 1;
    printf("%d ", first, second);
    for (int i = 0; i <= num; i++)
    {
        next = first + second;
        first = second;
        second = next;
        printf("%d ", first, next);
    }
}