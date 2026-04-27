#include <stdio.h>

void main()
{
    int a, b, c;

    int *p1, *p2, *p3;   // pointer variables

    // Input values
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Assign addresses to pointers
    p1 = &a;
    p2 = &b;
    p3 = &c;

    // Access values using pointers
    printf("\nAccessing values using pointers:\n");
    printf("Value of a = %d\n", *p1);  // dereferencing pointer
    printf("Value of b = %d\n", *p2);
    printf("Value of c = %d\n", *p3);
}