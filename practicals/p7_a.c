#include <stdio.h>

int add_nums(int n, int startNum);

void main()
{
    int x;
    x = add_nums(5, 1);
    printf("%d",x);
}

int add_nums(int n, int startNum)
{
    int sum = 0;
    printf("Enter how many number's sum you want: ");
    scanf("%d", &n);

    printf("Starting number: ");
    scanf("%d", &startNum);

    for (int i = startNum; i < (startNum + n); i++)
    {
        sum += i;
    }
    return sum;
}