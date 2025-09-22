#include<stdio.h>


int main() {
    printf("nhap so dong: \n");
    int rows;
    scanf("%d", &rows);
    for(int i = 1; i <= rows; i++) {
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}