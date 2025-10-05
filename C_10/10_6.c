#include <stdio.h>


int soSanhMang(int n, int a[], int b[]) {
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i]) {
            return 0;
        }
    }
    return 1; 
}

int main() {
    int n;
    int a[10], b[10];


    do {
        printf("Nhap so phan tu n (n <= 10): ");
        scanf("%d", &n);
    } while (n <= 0 || n > 10);


    printf("Nhap %d phan tu cho mang a:\n", n);
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }


    printf("Nhap %d phan tu cho mang b:\n", n);
    for (int i = 0; i < n; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }


    if (soSanhMang(n, a, b) == 1) {
        printf("\nHai mang bang nhau.\n");
    } else {
        printf("\nHai mang KHONG bang nhau.\n");
    }

    return 0;
}
