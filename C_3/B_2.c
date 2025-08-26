/* Viết chương trình đọc từ bàn phím 3 số nguyên biểu diễn
 ngày, tháng, năm và xuất ra màn hình dưới dạng
 “dd/mm/yyyy”.*/
#include <stdio.h>

int main() {
    int day, month, year;
    printf("input day: ");
    scanf("%d", &day);
    printf("input month: ");
    scanf("%d", &month);
    printf("input year: ");
    scanf("%d", &year);
    printf("day month year: %02d/%02d/%04d\n", day, month, year);
    return 0;
}