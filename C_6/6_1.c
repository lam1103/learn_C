#include <stdio.h>

int main() { 
    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);
    if(a % 2 == 0) {
        printf("ban vua nhap so chan.\n");
    } else {
        printf("ban vua nhap so le.\n");
    }
}