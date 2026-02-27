#include <stdio.h>

void main()
{
    int num1, num2, num3;

    printf("Enter three numbers to find max out of them: ");
    scanf("%d%d%d", &num1, &num2, &num3);

    (void)((num1 > num2 && num1 > num3) ? printf("The max num is: %d", num1) : 0);
    (void)((num2 > num1 && num2 > num3) ? printf("The max num is: %d", num2) : 0);
    (void)((num3 > num2 && num3 > num1) ? printf("The max num is: %d", num3) : 0);
}