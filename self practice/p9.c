#include <stdio.h>

void main()
{
    int num, sNum, eNum, i;
    float sum;
    printf("Enter how many numbers you want find avg: ");
    scanf("%d", &num);

    printf("Enter starting num: ");
    scanf("%d", &sNum);

    eNum = sNum + num;
    for (i = sNum; i <= eNum; i++)
    {
        sum += i;
    }
    sum /= num;
    printf("The avg is: %f", sum);
}