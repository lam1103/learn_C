/* • Viết chương trình nhập vào một số
 nguyên (0-100) từ bàn phím. In ra
 màn hình số vừa nhập (giả sử ta
 nhập số 25) theo đúng như dưới đây:–So vua nhap: 25–Tuong ung: \25%\”25%”\’25%’\0*/    

#include <stdio.h>

int main() {
    int num;
    printf("Nhap vao mot so nguyen (0-100): ");
    scanf("%d", &num);
    printf("So vua nhap: %d\n", num);
    printf("Tuong ung: \\%d%%\\\"%d%%\\'%d%%'\\", num, num, num);
    return 0;
}