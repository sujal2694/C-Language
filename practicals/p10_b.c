#include <stdio.h>

// Define structure
struct student_record
{
    char name[50];
    char branch[30];
    float total_marks;
};

int main()
{
    struct student_record s[10];  // array of 10 students
    int i;

    // Input data
    printf("Enter details of 10 students:\n");

    for (i = 0; i < 10; i++)
    {
        printf("\nStudent %d\n", i + 1);

        printf("Enter Name: ");
        scanf(" %s", s[i].name);   // read full name with spaces

        printf("Enter Branch: ");
        scanf(" %s", s[i].branch);

        printf("Enter Total Marks: ");
        scanf("%f", &s[i].total_marks);
    }

    // Display data
    printf("\n\n---------- Student Records ----------\n");

    for (i = 0; i < 10; i++)
    {
        printf("\nStudent %d\n", i + 1);
        printf("Name        : %s\n", s[i].name);
        printf("Branch      : %s\n", s[i].branch);
        printf("Total Marks : %.2f\n", s[i].total_marks);
    }

    return 0;
}