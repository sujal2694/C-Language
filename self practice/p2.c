#include <stdio.h>

void main()
{
    int num1, num2;
    printf("Enter num1 & num2 and get even numbers between those numbers: ");
    scanf("%d%d", &num1, &num2);

    int i = num1;
    printf("Even numbers: \n");
    while (i <= num2)
    {
        if (i % 2 == 0)
        {
            printf("%d\n", i);
        }
        i++;
    }
}