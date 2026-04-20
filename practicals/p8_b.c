#include <stdio.h>

int reveerse_num(int num);

void main()
{
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    x = reveerse_num(x);
    printf("Reversed number is: %d", x);
}  

int reveerse_num(int num)
{
    int rev = 0;
    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    return rev;
}