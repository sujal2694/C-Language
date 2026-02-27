#include <stdio.h>

void main()
{
    int num1, num2, num3, i;

    printf("Enter three numbers to find maximum out of them: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    for (i = 1; i <= 3; i++)
    {
        switch (i)
        {
        case 1:
            if (num1 > num2 && num1 > num3)
            {
                printf("The max num is: %d\n", num1);
            }
            continue;

        case 2:
            if (num2 > num1 && num2 > num3)
            {
                printf("The max num is: %d\n", num2);
            }
            continue;

        case 3:
            if (num3 > num1 && num3 > num2)
            {
                printf("The max num is: %d\n", num3);
            }
            continue;

        default:
            break;
        }
    }
}