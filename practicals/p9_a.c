#include <stdio.h>

int max_num(int a[10]);

void main()
{
    int a[10],i,n;

    printf("Enter 10 numbers: ");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &n);
        a[i] = n;
    }

    printf("%d",a);
    
}

int max_num(int a[10])
{
    int max=a[0];
    for (int i = 1; i < 10; i++)
    {
        if (max > a[i])
        {
            max=a[i];
        }
    }
    return max;
}
