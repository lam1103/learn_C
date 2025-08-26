/*Viết chương trình đọc và 2 số nguyên và in ra kết quả của
 phép (+), phép trừ (-), phép nhân (*), phép chia (/). Nhận
 xét kết quả chia 2 số nguyên.*/
#include <stdio.h>

int main() {
    int a, b;
    printf("input a: ");
    scanf("%d", &a);
    printf("input b: ");
    scanf("%d", &b);
    printf("result add: %d + %d = %d\n", a, b, a + b);
    printf("result sub: %d - %d = %d\n", a, b, a - b);
    printf("result mul: %d * %d = %d\n", a, b, a * b);
    if (b != 0) {
        printf("result div: %d / %d = %d\n", a, b, a / b);
    } else {
        printf("Cannot divide by zero.\n");
    }
    return 0;
}
