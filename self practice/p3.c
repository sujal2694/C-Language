#include <stdio.h>

void main()
{
    int num, newNum1, newNum2, newNum3, sum;
    printf("Enter three digit number for sumation until sum in one digit: ");
    scanf("%d", &num);

    for (int i = 0; i <= num; i++)
    {
        newNum1=num%10;
        newNum2=(num/10)%10;
        newNum3=num/100;
        sum=newNum1+newNum2+newNum3;
    }
    printf("%d", sum);
}