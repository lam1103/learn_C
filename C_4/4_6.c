/*• Viết chương trình nhập các dữ liệu cần thiết 
để có thể in ra nhật ký sử dụng phòng thực 
hành của giảng viên Việt Nhật như sau
 • STT  Ngày Tháng Tên lớp  Tên môn học    Bắt đầu   Kết thúc
 • 23 10/03/2011  5C
 C Programming 8:30       
11:15*/

#include <stdio.h>
#include <string.h>
int main() {
    int stt, day, month, year;
    char class_name[50], subject_name[100];
    char start_time[6], end_time[6];

    printf("Nhap STT: ");
    scanf("%d", &stt);

    printf("Nhap ngay thang (dd mm yyyy): ");
    scanf("%d %d %d", &day, &month, &year);

    getchar(); // Đọc ký tự newline còn sót lại

    printf("Nhap ten lop: ");
    fgets(class_name, sizeof(class_name), stdin);
    class_name[strcspn(class_name, "\n")] = 0; // Loại bỏ ký tự newline

    printf("Nhap ten mon hoc: ");
    fgets(subject_name, sizeof(subject_name), stdin);
    subject_name[strcspn(subject_name, "\n")] = 0; // Loại bỏ ký tự newline

    printf("Nhap thoi gian bat dau (hh:mm): ");
    scanf("%5s", start_time);

    printf("Nhap thoi gian ket thuc (hh:mm): ");
    scanf("%5s", end_time);

    printf("\n--- Nhat ky su dung phong thuc hanh ---\n");
    printf("STT: %d\n", stt);
    printf("Ngay Thang: %02d/%02d/%04d\n", day, month, year);
    printf("Ten lop: %s\n", class_name);
    printf("Ten mon hoc: %s\n", subject_name);
    printf("Bat dau: %s\n", start_time);
    printf("Ket thuc: %s\n", end_time);

    return 0;
}
