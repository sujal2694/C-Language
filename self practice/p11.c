#include <stdio.h>

int sum(int a[100], int n);
int avg(int a[100], int n);

void main()
{
    int summation, average, a[100], n, i;
    printf("How many numbers want to add: \n");
    scanf("%d", &n);
    printf("Enter %d numbers: \n", n);
    for (i = 0; i < n; i++)
    {
        printf("Enter %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    summation = sum(a, n);
    printf("The summation is: %d\n", summation);
    average = avg(a, n);
    printf("The average is: %d", average);
}

int sum(int a[100], int n)
{
    int i, sum = 0;
    for (i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}

int avg(int a[100], int n)
{
    int addition;
    addition = sum(a, n);
    return (addition / n);
}