#include<stdio.h>

int main() { 
    int n ;
    printf("nhap n: \n");
    scanf("%d", &n);
    printf("Vui long chon tinh chan hay le (0: chan, 1: le): \n");
    int choice;
    scanf("%d", &choice);
    if(choice  ==0) {
        printf("tong cac so chan tu 1 den %d la: ", n);
        int sum = 0;
        for(int i = 1; i <= n; i++) {
            if(i % 2 == 0) {
                sum += i;
            }
        }
        printf("%d\n", sum);
    }else{
        printf("tong cac so le tu 1 den %d la: ", n);
        int sum = 0;
        for(int i = 1; i <= n; i++) {
            if(i % 2 != 0) {
                sum += i;
            }
        }
        printf("%d\n", sum);
    }
}