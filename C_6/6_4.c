#include<stdio.h>
int main() { 
    int a, b, c;
    int max = 0;
    do {
    max++;
    printf("Enter three integers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a + b > c && a + c > b && b + c > a) {
        printf("3 canh tren tao thanh 1 tam giac.\n");
    } else {
        printf("3 canh tren khong tao thanh 1 tam giac.\n");
    }
} while (max < 5);
}