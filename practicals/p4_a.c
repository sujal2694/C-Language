#include <stdio.h>

void main() {
    int a,b;
    printf("Enter any two numbers to swap them: ");
    scanf("%d%d", &a, &b);

    printf("Before swaping: ");
    printf("%d %d\n", a, b);

    a=a*b;
    b=a/b;
    a=a/b;

    printf("After swaping: ");
    printf("%d %d", a, b);
}