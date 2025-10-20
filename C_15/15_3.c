#include <stdio.h>
#include <stdlib.h>

int main () {
    int n, m;
    int *ptr;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    ptr = (int*) calloc(n, sizeof(int));
    for(int i =0; i< n; i++) {
        printf("Nhap phan tu %d: ", i+1);
        scanf("%d", &ptr[i]);
    }
    printf("Cac phan tu trong mang la: ");
    for(int i =0; i< n; i++) {
        printf("%d ", ptr[i]);
    }
    printf("\n");
    printf("nhap them phan tu(<=5): ");
    scanf("%d", &m);
    ptr = (int*) realloc(ptr, m* sizeof(int));
    for(int i = n; i< m+n ; i++) {
        printf("Nhap phan tu %d: \n", i+1);
        scanf("%d", &ptr[i]);
    }
    printf("\n");
    printf("Cac phan tu vua nhap la: ");
    for(int i = n; i< m+n; i++) {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    return 0;
}