#include <stdio.h>

void main()
{
    int sub1, sub2, sub3, sub4, sub5;
    float total, passtage;
    printf("Enter marks out of 100 according to subjects: \n");
    printf("Maths: ");
    scanf("%d", &sub1);
    printf("Science: ");
    scanf("%d", &sub2);
    printf("Chemistry: ");
    scanf("%d", &sub3);
    printf("English: ");
    scanf("%d", &sub4);
    printf("Computer: ");
    scanf("%d", &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    passtage = 0.6 * 500;
    if (sub1 >= 40 && sub2 >= 40 && sub3 >= 40 && sub4 >= 40 && sub5 >= 40)
    {
        if (total > passtage)
        {
            printf("Total Marks:");
            printf("%f\n", total);
            printf("Status: PASS");
        }
        else
        {
            printf("You are not eligible\n");
            printf("%f", total);
            printf("Status: FAIL");
        }
    }
    else if (sub1 < 40 && sub2 < 40 && sub3 < 40 && sub4 < 40 && sub5 < 40)
    {
        printf("%f\n", total);
        printf("Status: FAIL");
    }
    else if (sub1 < 40)
    {
        printf("Failed in maths");
    }
    else if (sub2 < 40)
    {
        printf("Failed in science");
    }
    else if (sub3 < 40)
    {
        printf("Failed in chemistry");
    }
    else if (sub4 < 40)
    {
        printf("Failed in english");
    }
    else if (sub5 < 40)
    {
        printf("Failed in computer");
    }
}