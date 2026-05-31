#include <stdio.h>

void main()
{
    int i,j,k;

    printf("Enter a number: ");
    scanf("%d", &k);

    for (i = 1; i <= k; i++)
    {
        for (j = 1; j <= k - i; j++)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("%d", i);
        }
        printf("\n");
    }
    
}