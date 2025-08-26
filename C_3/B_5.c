/* Nhập vào một số là số giây, đổi số giây này ra giờ phút
 giây và xuất theo dạng gio:phut:giay, mỗi thành phần có 2
 chữ số. Ví dụ 3661 = 01:01:01*/
#include <stdio.h>

int main() {
    int seconds;
    printf("input seconds: ");
    scanf("%d", &seconds);
    int hours = seconds / 3600;
    int minutes = (seconds % 3600) / 60;
    int remaining_seconds = seconds % 60;
    printf("result time: %02d:%02d:%02d\n", hours, minutes, remaining_seconds);
    return 0;
}
