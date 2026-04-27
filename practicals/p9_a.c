#include <stdio.h>

int max_num(int a[10]);
int min_num(int a[10]);

void main()
{
    int a[10], i, n, x, y;

    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        a[i] = n;
    }
    x = max_num(a);
    printf("The maximum number is: %d", x);
    y = min_num(a);
    printf("\nThe minimum number is: %d", y);
}

int max_num(int a[10])
{
    int max = a[0];
    for (int i = 1; i < 10; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int min_num(int a[10])
{
    int min = a[0];
    for (int i = 1; i < 10; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
