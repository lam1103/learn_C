#include <stdio.h>
#include <stdlib.h>

int main () {
    int a[4];
    int *ptr;
    ptr = (int*) calloc(4, sizeof(int));
    for(int i =0; i< 4; i++) {
        printf("%d ", ptr[i]);
    }
    for (int i = 0 ; i< 4;i ++) {
        printf("Nhap so thu %d: ", i+1);
        scanf("%d", &a[i]);
    }
    for (int i = 0 ; i< 4;i ++) {
        ptr[i] = a[i];
    }
    for (int i = 0 ; i< 4;i ++) {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    ptr = NULL;
}