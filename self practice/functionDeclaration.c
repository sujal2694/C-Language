#include <stdio.h>

int add_int(int a, int b);

void main(){
    int x;
    x = add_int(54,44);
    printf("%d", x);
}

int add_int(int c, int d){
    return c + d;
}
