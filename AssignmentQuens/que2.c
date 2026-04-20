#include <stdio.h>

void main()
{
    int N, count = 0, sum = 0, digit;
    N = 200;

    while (N >= 10)
    {
        sum = 0;
        while (N > 0)
        {
            digit = N % 10;
            sum = sum + digit;
            N = N / 10;
            count = count + 1;
        }
        N = sum;
    }
    printf("N = %d, count = %d", N, count);
}