#include <stdio.h>

int main() {
    char a; 
    int b;
    float c; 
    double d;
    printf("Nhap vao mot ky tu: ");
    scanf(" %c", &a);
    printf("Ky tu vua nhap: %c\n", a);
    
    printf("Nhap vao mot so nguyen: ");
    scanf("%d", &b);
    printf("So nguyen vua nhap: %d\n", b);

    printf("Nhap vao mot so thuc: ");
    scanf("%f", &c);
    printf("So thuc vua nhap: %f\n", c);

    printf("Nhap vao mot so thuc giai thua: ");
    scanf("%lf", &d);
    printf("So thuc giai thua vua nhap: %lf\n", d);
    return 0;
}
