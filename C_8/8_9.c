
#include<stdio.h>

void menu() {
        printf("CHUONG TRINH TINH\n");
        printf("1- Phep cong\n");
        printf("2- Phep tru\n");
        printf("3- Phep nhan\n");
        printf("4- Phep chia\n");
        printf("An phim khac: Thoat\n");
        printf("Moi ban lua chon chuong trinh: ");
}

void choose(int choice) {
    scanf("%d", &choice);
            if(choice >= 1 && choice <= 4) {
                int a, b;
                printf("Nhap so thu 1: ");
                scanf("%d", &a);
                printf("Nhap so thu 2: ");
                scanf("%d", &b);
                switch(choice) {
                    case 1:
                        printf("Tong hai so la: %d\n", a + b);
                        break;
                    case 2:
                        printf("Hieu hai so la: %d\n", a - b);
                        break;
                    case 3:
                        printf("Tich hai so la: %d\n", a * b);
                        break;
                    case 4:
                        if(b != 0) {
                            printf("Thuong hai so la: %.2f\n", (float)a / b);
                        } else {
                            printf("Loi: Khong the chia cho 0!\n");
                        }
                        break;
                }
            } else {
                printf("Thoat chuong trinh.\n");
            }
}

int main() {
    int choice;
    char cont;
    do {
        menu();
        choose(choice);
        printf("Ban co muon tiep tuc chuong trinh?(y/n): ");
        scanf(" %c", &cont);
    } while(cont == 'y' || cont == 'Y');
    return 0;
}