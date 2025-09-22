#include<stdio.h>

int main() {
    int n;
    printf("nhap n: \n");
    scanf("%d", &n);
    float S = 1;
    for(int i = 2; i <= n; i++) {
        S += (1.0/i);
    }
    printf("Tong S = %f\n", S);
}