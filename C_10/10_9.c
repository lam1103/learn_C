#include <stdio.h>

#define MAX 20   // kích thước tối đa của ma trận

// Hàm nhập ma trận
void nhapMaTran(int n, int a[MAX][MAX]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
}

// Hàm in ma trận
void inMaTran(int n, int a[MAX][MAX]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%5d", a[i][j]);
        }
        printf("\n");
    }
}

// Cộng 2 ma trận
void congMaTran(int n, int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
}

// Trừ 2 ma trận
void truMaTran(int n, int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = a[i][j] - b[i][j];
        }
    }
}

// Nhân 2 ma trận
void nhanMaTran(int n, int a[MAX][MAX], int b[MAX][MAX], int c[MAX][MAX]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
}

int main() {
    int n;
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX];
    int choice;

    // Nhập kích thước n
    do {
        printf("Nhap kich thuoc ma tran n (n <= %d): ", MAX);
        scanf("%d", &n);
    } while (n <= 0 || n > MAX);

    // Nhập ma trận A
    printf("\nNhap ma tran A:\n");
    nhapMaTran(n, a);

    // Nhập ma trận B
    printf("\nNhap ma tran B:\n");
    nhapMaTran(n, b);

    // Menu
    do {
        printf("\n===== MENU =====\n");
        printf("1. Cong 2 ma tran\n");
        printf("2. Tru 2 ma tran\n");
        printf("3. Nhan 2 ma tran\n");
        printf("0. Thoat\n");
        printf("Lua chon: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                congMaTran(n, a, b, c);
                printf("\nKet qua A + B:\n");
                inMaTran(n, c);
                break;
            case 2:
                truMaTran(n, a, b, c);
                printf("\nKet qua A - B:\n");
                inMaTran(n, c);
                break;
            case 3:
                nhanMaTran(n, a, b, c);
                printf("\nKet qua A * B:\n");
                inMaTran(n, c);
                break;
            case 0:
                printf("Thoat chuong trinh.\n");
                break;
            default:
                printf("Lua chon khong hop le!\n");
        }
    } while (choice != 0);

    return 0;
}
