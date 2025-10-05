#include <stdio.h>

int main() {
    int n;
    int a[10], b[10], c[10];   // mảng tối đa 10 phần tử
    int nb = 0, nc = 0;        // số phần tử trong b và c

    // Nhập số lượng phần tử
    do {
        printf("Nhap so phan tu n (n <= 10): ");
        scanf("%d", &n);
    } while (n > 10 || n <= 0);

    // Nhập dãy số vào mảng a
    printf("Nhap %d so bat ky:\n", n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Phân loại số dương và số âm
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            b[nb++] = a[i];   // thêm vào mảng b
        } else if (a[i] < 0) {
            c[nc++] = a[i];   // thêm vào mảng c
        }
    }

    // Xuất mảng b
    printf("\nMang b (so duong): ");
    if (nb == 0) {
        printf("Khong co so duong");
    } else {
        for (int i = 0; i < nb; i++) {
            printf("%d ", b[i]);
        }
    }

    // Xuất mảng c
    printf("\nMang c (so am): ");
    if (nc == 0) {
        printf("Khong co so am");
    } else {
        for (int i = 0; i < nc; i++) {
            printf("%d ", c[i]);
        }
    }

    printf("\n");
    return 0;
}
