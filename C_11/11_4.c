/* Chương trình C sử dụng con trỏ để duyệt
 một mảng các số nguyên và in các giá trị
 theo thứ tự đảo ngược.*/
#include <stdio.h>

int main() {
    int a[5] = {10, 20, 30, 40, 50};
    int *p;
    p = a;
    for(int i = 0; i < 5; i++) {
        printf("%d ", *(p + 4 - i));
    }
}