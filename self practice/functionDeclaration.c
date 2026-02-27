#include <stdio.h>

int add_int(int a, int b);

void main(){
    int x;
    x = add_int(5,4);
    printf("%d", x);
}

int add_int(int a, int b){
    return a + b;
}
