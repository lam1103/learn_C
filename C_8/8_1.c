#include<stdio.h>

int gt(int n) {
    if(n== 0) return 1;
    else return n * gt(n-1);
}
int main() {
    int n;
    printf("nhap n: "); 
    scanf("%d", &n);
    while(n > 8) {
        printf("nhap lai n: ");
        scanf("%d", &n);
    }
    int result = gt(n);
    printf("Giai thua cua %d la: %d\n", n, result);
}
