#include<stdio.h>

int main() { 
    int a, b;
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);
    if(a > b) {
        printf("so lon nhat la %d.\n", a);
    } else if(a < b) {
        printf("so lon nhat la %d.\n", b);
    } else {
        printf("so lon nhat la %d.\n", a);
    }
}