#include<stdio.h>

int main() {
    int n;
    printf("nhap n: \n");
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += i;
    }
    printf("Tong cua cac so tu 1 den %d la: %d\n", n, sum);
}