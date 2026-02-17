#include <stdio.h>

void main(){
    float f,c;
    printf("Enter temperature in cellcious for convert into fernhit: ");
    scanf("%f", &c);

    f=(1.8*c)+32;
    printf("After conversion of temperture: ");
    printf("%f", f);
}