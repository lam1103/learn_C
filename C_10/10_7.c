
#include <stdio.h>
#include <stdlib.h>

// Hàm hoán đổi 2 số
void swap(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

// Hàm sắp xếp tăng dần
void sapXepTang(int n, int a[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] > a[j]) {
                swap(&a[i], &a[j]);
            }
        }
    }
}

// Hàm sắp xếp giảm dần
void sapXepGiam(int n, int a[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i] < a[j]) {
                swap(&a[i], &a[j]);
            }
        }
    }
}

// Hàm in mảng
void inMang(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int n, choice;
    int a[50]; // tối đa 50 phần tử cho tiện

    // Nhập số phần tử
    do {
        printf("Nhap so phan tu n (1 <= n <= 50): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 50);

    // Nhập mảng
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    // Menu lựa chọn
    printf("\n===== MENU =====\n");
    printf("1. Sap xep tang dan\n");
    printf("2. Sap xep giam dan\n");
    printf("Nhap lua chon: ");
    scanf("%d", &choice);

    if (choice == 1) {
        sapXepTang(n, a);
        printf("\nMang sau khi sap xep tang dan: ");
        inMang(n, a);
    } else if (choice == 2) {
        sapXepGiam(n, a);
        printf("\nMang sau khi sap xep giam dan: ");
        inMang(n, a);
    } else {
        printf("\nLua chon khong hop le!\n");
    }

    return 0;
}
