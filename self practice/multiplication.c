#include <stdio.h>

void main()
{
    int i, j, k, a[100][100], b[100][100], c[100][100] = {0}, x, y, sum = 0;

    printf("Enter sixe of matrix: ");
    scanf("%d %d", &x, &y);

    printf("Enter all elemnts of 1st matrix: ");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d", &a[i][j]);
        }
        printf("\n");
    }

    printf("Enter all elemnts of 2nd matrix: ");
    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            scanf("%d ", &b[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < x; i++)
    {
        for (j = 0; j < y; j++)
        {
            c[i][j] = 0;
            for (k = 0; k < y; k++)
            {
                c[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }

}