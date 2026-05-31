#include <stdio.h>
#include <math.h>

// void main()
// {
//     int N,sum=0,d1,d2,d3;

//     printf("Enter a number");
//     scanf("%d", &N);

//     d1 = N % 10;
//     printf("%d\n", d1);
//     d2 = (N / 10) % 10;
//     printf("%d\n", d2);
//     d3 = N / 100;
//     printf("%d\n", d3);

//     sum = d1 + d2 + d3;
//     printf("%d", sum);
// }

// void main()
// {
//     char ch = 'A';

//     for (int i = 1; i <= 4; i++)
//     {
//         for (int j = 0; j < i; j++)
//         {
//             printf("%c", ch);
//             ch++;
//         }
//         printf("\n");
//     }
    
// }

void main()
{
    int a,b,c, x1, x2, delta;
    printf("Enter all cofficients: ");
    scanf("%d %d %d", &a, &b, &c);

    delta = sqrt((b*b) - (4*a*c));

    x1 = (-b + delta)/(2*a);
    x2 = (-b - delta)/(2*a);


    if (delta==0)
    {
        printf("%d", x1);
    }
    else if (delta > 0)
    {
        printf("%d %d", x1, x2);
    }
    else if(delta < 0)
    {
        printf("Roots are not posible");
    }
}