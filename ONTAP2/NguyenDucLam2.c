#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_CUSTOMERS 100
#define NAME_LENGTH 31
#define CURRENT_YEAR 2024

typedef struct {
    char name[NAME_LENGTH];
    int birthYear;
    float weight;
    float height;
} Customer;

// 🧩 Nhập thông tin 1 khách hàng
void inputCustomer(Customer *c) {
    printf("Nhap ten khach hang: ");
    fgets(c->name, NAME_LENGTH, stdin);
    c->name[strcspn(c->name, "\n")] = 0; // Xóa ký tự '\n' nếu có

    do {
        printf("Nhap nam sinh (1900-%d): ", CURRENT_YEAR);
        scanf("%d", &c->birthYear);
        while (getchar() != '\n'); // Xóa bộ đệm
    } while (c->birthYear < 1900 || c->birthYear > CURRENT_YEAR);

    do {
        printf("Nhap can nang (kg): ");
        scanf("%f", &c->weight);
        while (getchar() != '\n');
    } while (c->weight <= 0);

    do {
        printf("Nhap chieu cao (m): ");
        scanf("%f", &c->height);
        while (getchar() != '\n');
    } while (c->height <= 0);
}

// 🧩 In thông tin 1 khách hàng
void printCustomer(const Customer *c) {
    printf("\nThong tin khach hang:\n");
    printf("Ten: %s\n", c->name);
    printf("Nam sinh: %d\n", c->birthYear);
    printf("Can nang: %.2f kg\n", c->weight);
    printf("Chieu cao: %.2f m\n", c->height);
}

// 🧩 Tính và in BMI
void calculateBMI(const Customer *c) {
    float bmi = c->weight / (c->height * c->height);
    printf("Chi so BMI: %.2f - ", bmi);
    if (bmi < 18.5)
        printf("Thieu can\n");
    else if (bmi < 24.9)
        printf("Binh thuong\n");
    else if (bmi < 29.9)
        printf("Thua can\n");
    else
        printf("Beo phi\n");
}

// 🧩 Nhập số lượng khách hàng
void nhapSoLuong(int *n) {
    do {
        printf("Nhap so luong khach hang (1-%d): ", MAX_CUSTOMERS);
        scanf("%d", n);
        while (getchar() != '\n');
    } while (*n <= 0 || *n > MAX_CUSTOMERS);
}

// 🧩 Đếm loại khách hàng theo độ tuổi
void demLoaiKhachHang(int n, Customer customers[]) {
    int thieuNien = 0, thanhNien = 0, trungNien = 0, nguoiGia = 0;

    for (int i = 0; i < n; i++) {
        int age = CURRENT_YEAR - customers[i].birthYear;
        if (age >= 11 && age <= 16)
            thieuNien++;
        else if (age >= 17 && age <= 40)
            thanhNien++;
        else if (age >= 41 && age <= 60)
            trungNien++;
        else if (age >= 61)
            nguoiGia++;
    }

    printf("\nSo luong khach hang theo loai:\n");
    printf("Thieu nien (11-16 tuoi): %d\n", thieuNien);
    printf("Thanh nien (17-40 tuoi): %d\n", thanhNien);
    printf("Trung nien (41-60 tuoi): %d\n", trungNien);
    printf("Nguoi gia (61 tuoi tro len): %d\n", nguoiGia);
}

// 🧩 So sánh BMI để sắp xếp giảm dần
int compareBMI(const void *a, const void *b) {
    const Customer *ca = (const Customer *)a;
    const Customer *cb = (const Customer *)b;

    float bmiA = ca->weight / (ca->height * ca->height);
    float bmiB = cb->weight / (cb->height * cb->height);

    if (bmiA < bmiB) return 1;
    if (bmiA > bmiB) return -1;
    return 0;
}

// 🧩 In ra N khách hàng có BMI cao nhất
void inKhachHangBMICaoNhat(int topN, Customer customers[], int count) {
    if (topN > count) {
        printf("So luong can in lon hon tong so khach hang.\n");
        return;
    }

    qsort(customers, count, sizeof(Customer), compareBMI);

    printf("\n+-----+------------------------------+----------+------+\n");
    printf("| STT |             Ten              | Nam sinh | BMI  |\n");
    printf("+-----+------------------------------+----------+------+\n");

    for (int i = 0; i < topN; i++) {
        float bmi = customers[i].weight / (customers[i].height * customers[i].height);
        printf("| %-3d | %-28s | %-8d | %-4.1f |\n",
               i + 1, customers[i].name, customers[i].birthYear, bmi);
        printf("+-----+------------------------------+----------+------+\n");
    }
}

int main() {
    int n;
    nhapSoLuong(&n);

    Customer customers[MAX_CUSTOMERS];

    for (int i = 0; i < n; i++) {
        printf("\n--- Nhap thong tin khach hang thu %d ---\n", i + 1);
        inputCustomer(&customers[i]);
    }

    printf("\n===== DANH SACH KHACH HANG =====\n");
    for (int i = 0; i < n; i++) {
        printf("\n[%d]", i + 1);
        printCustomer(&customers[i]);
        calculateBMI(&customers[i]);
    }

    demLoaiKhachHang(n, customers);

    int topN;
    printf("\nNhap so luong khach hang co BMI cao nhat muon xem: ");
    scanf("%d", &topN);
    inKhachHangBMICaoNhat(topN, customers, n);

    return 0;
}
