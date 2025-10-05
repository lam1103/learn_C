/*Viết chương trình quản lý lương nhân
 viên:– N nhân viên, lương hiện tại được lưu trong mảng có N
 phần tử. Mã nhân viên là số thứ tự mảng.– Mảng lưu năm bắt đầu làm việc.– Viết hàm để tăng lương cho từng nhân viên. Quy tắc
 tăng lương là cứ 3 năm tăng 1 lần, mỗi lần 1% mức hiện
 tại. Đầu vào của hàm là năm bắt đầu làm việc, mức
 lượng hiên tại và đầu ra chính là mức lương đã được
 tăng (nếu có).– Yêu cầu: sử dụng con trỏ*/

#include <stdio.h>
#include <time.h>
#define MAX 100

int main() {
    int n;
    int luong[MAX], namvao[MAX];
    printf("Nhap so luong nhan vien: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Nhap luong nhan vien thu %d: ", i + 1);
        scanf("%d", &luong[i]);
        printf("Nhap nam vao lam cua nhan vien thu %d: ", i + 1);
        scanf("%d", &namvao[i]);
    }
    time_t now;
    time(&now);
    struct tm *local = localtime(&now);
    int currentYear = local->tm_year + 1900;
    for (int i = 0; i < n; i++) {
        int yearsOfService = currentYear - namvao[i];
        int increaseTimes = yearsOfService / 3;
        int *p = &luong[i];
        for (int j = 0; j < increaseTimes; j++) {
            *p += (*p) / 100;
        }
    }
    printf("Luong sau khi tang:\n");
    for (int i = 0; i < n; i++) {
        printf("Nhan vien thu %d: %d\n", i + 1, luong[i]);
    }
}