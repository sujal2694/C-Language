#include <stdio.h>

void main(){
    int height, base;
    float area;
    printf("Enter height: ");
    scanf("%d", &height);
    printf("Enter base: ");
    scanf("%d", &base);

    area=0.5*(height*base);

    printf("The area of triangle is: ");
    printf("%f", area);
}