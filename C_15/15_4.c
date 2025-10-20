#include <stdio.h>  
#include <stdlib.h>
/*Dùng con trỏ động này để sắp xếp các dãy số tăng dần và giảm dần.*/
int main() {
    int *a; 
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
    a = (int*) malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    printf("Mang ban dau la: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Sắp xếp tăng dần
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                int temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("Mang sau khi sap xep tang dan: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    free(a);
    return 0;
}