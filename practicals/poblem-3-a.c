#include <stdio.h>

void main(){
    int a,b,s,m,d,sub;
    printf("Enter two numbers as num1 and num2: ");
    scanf("%d%d", &a, &b);

    //addition
    s=a+b;
    //multiplication
    m=a*b;
    //divison
    d=a/b;
    //substraction
    sub=a-b;

    printf("Sum of num1 & num2: ");
    printf("%d\n",s);
    printf("Multiplication of num1 & num2: ");
    printf("%d\n",m);
    printf("Divison of num1 & num2: ");
    printf("%d\n",d);
    printf("Substraction of num1 & num2: ");
    printf("%d\n",sub);
}