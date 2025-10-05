#include <stdio.h>

#define ROWS 5
#define COLS 3

// Hàm in trạng thái ma trận đèn
void inDanDen(int a[ROWS][COLS]) {
    printf("\nTrang thai dan den (1: sang, 0: tat):\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%2d", a[i][j]);
        }
        printf("\n");
    }
}

// Hàm tính công suất của 1 bóng đèn theo vị trí
int congSuat(int row, int col) {
    if ((row % 2 == 1) && (col % 2 == 1)) {
        return 10;
    } else if ((row % 2 == 0) && (col % 2 == 0)) {
        return 20;
    } else {
        return 15;
    }
}

// Hàm tính tổng công suất tiêu thụ hiện tại
int tongCongSuat(int a[ROWS][COLS]) {
    int sum = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (a[i][j] == 1) {
                sum += congSuat(i + 1, j + 1); // cộng dồn công suất nếu đèn sáng
            }
        }
    }
    return sum;
}

int main() {
    int a[ROWS][COLS] = {0}; // ban đầu tất cả đèn tắt
    int choice;

    do {
        printf("\n===== MENU =====\n");
        printf("1. Bat/tat den theo hang\n");
        printf("2. Bat/tat den theo cot\n");
        printf("3. Bat/tat den theo vi tri\n");
        printf("4. Xem cong suat tieu thu\n");
        printf("0. Thoat\n");
        printf("Nhap lua chon: ");
        scanf("%d", &choice);

        if (choice == 1) {
            int row, state;
            printf("Nhap so hang (1-%d): ", ROWS);
            scanf("%d", &row);
            printf("Nhap trang thai (1: bat, 0: tat): ");
            scanf("%d", &state);
            if (row >= 1 && row <= ROWS) {
                for (int j = 0; j < COLS; j++) {
                    a[row - 1][j] = state;
                }
            }
            inDanDen(a);
        } 
        else if (choice == 2) {
            int col, state;
            printf("Nhap so cot (1-%d): ", COLS);
            scanf("%d", &col);
            printf("Nhap trang thai (1: bat, 0: tat): ");
            scanf("%d", &state);
            if (col >= 1 && col <= COLS) {
                for (int i = 0; i < ROWS; i++) {
                    a[i][col - 1] = state;
                }
            }
            inDanDen(a);
        } 
        else if (choice == 3) {
            int row, col, state;
            printf("Nhap vi tri hang (1-%d): ", ROWS);
            scanf("%d", &row);
            printf("Nhap vi tri cot (1-%d): ", COLS);
            scanf("%d", &col);
            printf("Nhap trang thai (1: bat, 0: tat): ");
            scanf("%d", &state);
            if (row >= 1 && row <= ROWS && col >= 1 && col <= COLS) {
                a[row - 1][col - 1] = state;
            }
            inDanDen(a);
        } 
        else if (choice == 4) {
            int sum = tongCongSuat(a);
            printf("\nTong cong suat tieu thu hien tai: %d W\n", sum);
        } 
        else if (choice == 0) {
            printf("Thoat chuong trinh.\n");
        } 
        else {
            printf("Lua chon khong hop le!\n");
        }

    } while (choice != 0);

    return 0;
}
