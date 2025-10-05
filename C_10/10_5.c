#include <stdio.h>

int main() {
    int n, a[10];
    int sum = 0;


    do {
        printf("Nhap so phan tu n (n <= 10): ");
        scanf("%d", &n);
    } while (n > 10 || n <= 0);

    printf("Nhap %d so bat ky:\n", n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }


    for (int i = 1; i < n - 1; i++) {
        if (a[i] > a[i - 1] && a[i] > a[i + 1]) {
            sum += a[i];
        }
    }

    printf("\nTong cac cuc dai dia phuong = %d\n", sum);

    return 0;
}
