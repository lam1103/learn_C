/*Viết chương trình nhập vào
 các thông tin trên thẻ sinh
 viên, sau đó in ra màn hình
 các thông tin đó trên từng
 dòng.*/
#include <stdio.h>
#include <string.h>
int main() {
    char name[100];
    int ma_sv;
    int date, month, year;
    char nganh[100], khoa[100];
    int khoa_hoc;

    printf("Nhap ten sinh vien: ");
    fgets(name, sizeof(name), stdin);

    printf("Nhap ma sinh vien: ");
    scanf("%d", &ma_sv);

    printf("Nhap ngay sinh (dd mm yyyy): ");
    scanf("%d %d %d", &date, &month, &year);

    getchar(); 

    printf("Nhap nganh: ");
    fgets(nganh, sizeof(nganh), stdin);
    nganh[strcspn(nganh, "\n")] = 0;
    printf("Nhap khoa: ");
    fgets(khoa, sizeof(khoa), stdin);
    khoa[strcspn(khoa, "\n")] = 0;

    printf("Nhap khoa hoc: ");
    scanf("%d", &khoa_hoc);

    printf("\n--- Thong tin sinh vien ---\n");
    printf("Ten: %s", name);
    printf("Ma sinh vien: %d\n", ma_sv);
    printf("Ngay sinh: %02d/%02d/%04d\n", date, month, year);
    printf("Nganh: %s\n", nganh);
    printf("Khoa: %s\n", khoa);
    printf("Khoa hoc: %d\n", khoa_hoc);

    return 0;
}