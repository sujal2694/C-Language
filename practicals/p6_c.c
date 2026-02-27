#include <stdio.h>

void main()
{
    int i, j, k;
    // for first pattern
    //  for (i = 1; i <= 5; i++)
    //  {
    //      for (j = 1; j <= i; j++)
    //      {
    //          if (j % 2 != 0 && i % 2 != 0)
    //          {
    //              printf("%d%d", i, j);
    //          }
    //      }
    //  }

    // for second pattern
    for (i = 1; i <= 5; i++)
    {

        for (k = 4; k > 0; k--)
        {
            printf(" ");
        }
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
