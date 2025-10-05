#include <stdio.h>

int main(){
    int *ptr;
    int a =3, b=5, c=7;
    a = b;
    ptr = &a;
    printf("gia tri cua a: %d\n", *ptr);
    b = c;
    ptr = &b;
    printf("gia tri cua b: %d\n", *ptr);
    c = a;
    ptr = &c;
    printf("gia tri cua c: %d\n", *ptr);
}