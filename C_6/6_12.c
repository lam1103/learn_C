#include<stdio.h>

int main () { 
    int choice;
    float a, b;
    printf("CHUONG TRINH MAY TINH DIEN TU\n");
    printf("An phim 1- Phep cong\n");
    printf("An phim 2- Phep tru\n");
    printf("An phim 3- Phep nhan\n");
    printf("An phim 4- Phep chia\n");
    printf("Thoat: an phim khac\n");
    printf("Moi ban chon phep tinh: ");
    scanf("%d", &choice);
    if(choice < 1 || choice > 4) {
        printf("Thoat chuong trinh.\n");
        return 0;
    }
    printf("Nhap hai so thuc: ");
    scanf("%f %f", &a, &b);
    switch(choice) {
        case 1:
            printf("%.2f + %.2f = %.2f\n", a, b, a + b);
            break;
        case 2:
            printf("%.2f - %.2f = %.2f\n", a, b, a - b);
            break;
        case 3:
            printf("%.2f * %.2f = %.2f\n", a, b, a * b);
            break;
        case 4:
            if(b == 0) {
                printf("Khong the chia cho 0.\n");
            } else {
                printf("%.2f / %.2f = %.2f\n", a, b, a / b);
            }
            break;
        default:
            printf("Lua chon khong hop le.\n");
    }
    return 0;
}