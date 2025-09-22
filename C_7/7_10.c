
#include<stdio.h>
int main() {
    int n;
    printf("nhap n: \n");
    scanf("%d", &n);
    int is_prime = 1; 
    if(n < 2) {
        is_prime = 0; 
    }else{
        for(int i = 2; i <= n / 2; i++) {
            if(n % i == 0) {
                is_prime = 0; 
                break;
            }
        }
    }
    if(is_prime) {
        printf("%d la so nguyen to\n", n);
    }else{
        printf("%d khong phai la so nguyen to\n", n);
    }
}