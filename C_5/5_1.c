#include <stdio.h>

int main()
{
    float x, y;
    printf("Nhap phan thuc x: ");
    scanf("%f", &x);
    printf("Nhap phan ao y: ");
    scanf("%f", &y);
    printf("So phuc vua nhap la: %.2f + %.2fi", x, y);
    return 0;
}