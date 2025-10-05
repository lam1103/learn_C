
#include <stdio.h>

#define MAX 50
#define WATT_PER_USE 400        // 400 Watt = 0.4 kW
#define COST_PER_KW 750         // 750 VNĐ/kWh

int status[MAX];  // 0 = rỗi, 1 = đang dùng
int count[MAX];   // số lần sử dụng

// Dùng máy
void dungMay(int id) {
    if (id < 1 || id > MAX) {
        printf("So hieu may khong hop le!\n");
        return;
    }
    if (status[id-1] == 0) {
        status[id-1] = 1;
        count[id-1]++;
        printf("May %d da duoc cap.\n", id);
    } else {
        printf("May %d dang duoc su dung!\n", id);
    }
}

// Rời máy
void roiMay(int id) {
    if (id < 1 || id > MAX) {
        printf("So hieu may khong hop le!\n");
        return;
    }
    if (status[id-1] == 1) {
        status[id-1] = 0;
        printf("May %d da duoc giai phong.\n", id);
    } else {
        printf("May %d dang o trang thai roi.\n", id);
    }
}

// In trạng thái các máy
void inTrangThai() {
    for (int i = 0; i < MAX; i++) {
        printf("May %2d: %s\n", i+1, status[i] ? "Dang su dung" : "Roi");
    }
}

// In điện năng tiêu thụ của từng máy
void inDienTieuThu() {
    for (int i = 0; i < MAX; i++) {
        double kW = count[i] * (WATT_PER_USE / 1000.0);
        printf("May %2d: %.2f kW\n", i+1, kW);
    }
}

// In tổng điện năng tiêu thụ và tiền điện
void inTongDien() {
    double tongKW = 0;
    for (int i = 0; i < MAX; i++) {
        tongKW += count[i] * (WATT_PER_USE / 1000.0);
    }
    double tien = tongKW * COST_PER_KW;
    printf("Tong dien nang tieu thu: %.2f kW\n", tongKW);
    printf("Tong tien dien: %.0f VND\n", tien);
}

// Máy dùng nhiều nhất và ít nhất
void inThongKe() {
    int maxUse = count[0], minUse = count[0];
    for (int i = 1; i < MAX; i++) {
        if (count[i] > maxUse) maxUse = count[i];
        if (count[i] < minUse) minUse = count[i];
    }

    printf("May duoc dung nhieu nhat (so lan %d): ", maxUse);
    for (int i = 0; i < MAX; i++) {
        if (count[i] == maxUse) printf("%d ", i+1);
    }
    printf("\n");

    printf("May duoc dung it nhat (so lan %d): ", minUse);
    for (int i = 0; i < MAX; i++) {
        if (count[i] == minUse) printf("%d ", i+1);
    }
    printf("\n");
}

int main() {
    int choice, id;

    // Khởi tạo
    for (int i = 0; i < MAX; i++) {
        status[i] = 0;
        count[i] = 0;
    }

    do {
        printf("\n===== MENU =====\n");
        printf("1. Dung may\n");
        printf("2. Roi may\n");
        printf("3. In trang thai cac may\n");
        printf("4. In dien nang tieu thu tren tung may\n");
        printf("5. In tong dien nang va tien dien\n");
        printf("6. In may dung nhieu nhat va it nhat\n");
        printf("0. Thoat\n");
        printf("Lua chon: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1:
                printf("Nhap so hieu may (1-50): ");
                scanf("%d", &id);
                dungMay(id);
                break;
            case 2:
                printf("Nhap so hieu may (1-50): ");
                scanf("%d", &id);
                roiMay(id);
                break;
            case 3:
                inTrangThai();
                break;
            case 4:
                inDienTieuThu();
                break;
            case 5:
                inTongDien();
                break;
            case 6:
                inThongKe();
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
