/*Viết chương trình nhập vào 2 số nguyên dương
 từ bàn phím và đưa ra ước số chung lớn nhất
 của chúng.*/

#include<stdio.h>

int gcd(int a, int b) {
    if(b == 0) return a;
    return gcd(b, a % b);
}       

int main () {
    int a, b;
    printf("Nhap a: ");
    scanf("%d", &a);
    printf("Nhap b: ");
    scanf("%d", &b);
    while(a <= 0 || b <= 0) {
        printf("Nhap lai a: ");
        scanf("%d", &a);
        printf("Nhap lai b: ");
        scanf("%d", &b);
    }
    int result = gcd(a, b);
    printf("Uoc so chung lon nhat cua %d va %d la: %d\n", a, b, result);
    return 0;
}