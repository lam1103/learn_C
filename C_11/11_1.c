#include <stdio.h>
int main() {
    int *ptr ; 
    int a,b, c; 
    printf("Nhap 3 so nguyen: ");
    scanf("%d%d%d", &a, &b, &c);
    ptr = &a;
    printf("gia tri cua a: %d\n", *ptr);
    ptr = &b ;
    printf("gia tri cua b la: %d\n", *ptr);
    ptr = &c;
    printf("gia tri cua c la: %d\n", *ptr);
}