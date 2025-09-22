#include<stdio.h>

int main () {
    int giai_thua;
    if(giai_thua > 8) {
        printf("khong dung yeu cau\n");
        return 1;
    }else{
        printf("nhap n: \n");
        scanf("%d", &giai_thua);
    }
      int n = 1;
    for(int i = 1; i <= giai_thua; i++) {
        n *= i;
    }
    printf("giai thua cua %d la: %d\n", giai_thua, n);
}