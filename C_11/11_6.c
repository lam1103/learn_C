#include<stdio.h>
#include<stdlib.h>
int main() {
    int a[20] = {10, 20, 30, 40, 50};
    int b[20] = {1, 2, 3, 4, 5};
    int *p;
    
    //nối mảng b vào mảng a
    p = a;
    for(int i = 0; i < 5; i++) {
        *(p + 5 + i) = b[i];
    }
    printf("mang a sau khi noi mang b vao:\n");
    for(int i = 0; i < 10; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");
}