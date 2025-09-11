#include<stdio.h>

int main() { 
    int a;
    printf("nhap thang:");
    scanf("%d", &a);
    switch(a) {
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            printf("Thang %d co 31 ngay.\n", a);
            break;
        case 4:
        case 6:
        case 9:
        case 11:
            printf("Thang %d co 30 ngay.\n", a);
            break;
        case 2:
            printf("Thang %d co 28 hoac 29 ngay.\n", a);
            break;
        default:
            printf("Khong phai thang hop le.\n");
    }
}