#include <stdio.h>

void main()
{
    int a;
    printf("Enter any number between 1 to 7: ");
    scanf("%d", &a);

    switch (a)
    {
    case 1:
        printf("Sunday");
        break;

    case 2:
        printf("Monday");
        break;

    case 3:
        printf("Tuesday");
        break;

    case 4:
        printf("Wednesday");
        break;

    case 5:
        printf("Thursday");
        break;

    case 6:
        printf("Saturday");
        break;

    default:
        printf("Nothing");
        break;
    }
}