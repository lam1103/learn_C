#include<stdio.h>
int main() {
    int a[11], i;
    printf("nhap du lieu: ") ;
    for(i = 0;i<11; i++) {
        scanf("%d" , &a[i]);
    }
    printf("luong mua cac thang trong nam la: \n") ;
    for(int i = 0; i<11 ; i++ ){
        printf("%d:  %dmm \n", i, a[i]);
    }
}