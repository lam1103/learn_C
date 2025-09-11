#include<stdio.h>

int main() {
    int a,b,c ;
    int Kq1, Kq2;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    printf("Nhap c: ");
    scanf("%d", &c);
    Kq1 = a++ + ++a;
    Kq2 = --a - b-- * ++c ;
    printf("Kq1 = %d\n", Kq1);
    printf("Kq2 = %d\n", Kq2);
}