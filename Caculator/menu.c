#include<stdlib.h>
#include<stdio.h>
#include<math.h>

void printMenu() {
    printf("1. Cong\n");
    printf("2. Tru\n");
    printf("3. Nhan\n");
    printf("4. Chia\n");
    printf("5. Can bac 2\n");
    printf("6. Luy thua\n");
    printf("7. Logarit\n");
    printf("0. Thoat\n");
    printf("Nhap lua chon cua ban: ");
}

double cong(double a, double b) {
    return a + b;
}

double tru(double a, double b) {
    return a - b;
}

double nhan(double a, double b) {
    return a * b;
}

double chia(double a, double b) {
    if (b != 0) {
        return a / b;
    } else {
        printf("Loi: Khong the chia cho 0\n");
        return 0;
    }
}

double can_bac_2(double a) {
    if(a< 0) {
        printf("Loi: Khong the tinh can bac 2 cua so am\n");
        return 0;  
    } else {
        return sqrt(a);
    }
}

double luythua(double base, double exponent) {
    if(base == 0 && exponent <= 0) {
        printf("Loi: Khong the tinh luy thua voi co so 0 va so mu <= 0\n");
        return 0;
    }else {
    return pow(base, exponent);
}
}

double loga(double x) {
    if (x > 0) {
        return log(x);
    } else {
        printf("Loi: Khong the tinh logarit cua so <= 0\n");
        return 0;
    }
}
int main() {
    int choice;
    double a, b;
    do {
        printMenu();
        scanf("%d", &choice);
        if (choice >= 1 && choice <= 7) {
            switch (choice) {
                case 1:
                    printf("Ban da chon phep cong\n");
                    break;
                case 2:
                    printf("Ban da chon phep tru\n");
                break;
                case 3:
                    printf("Ban da chon phep nhan\n");
                    break;
                case 4:
                    printf("Ban da chon phep chia\n");
                    break;
                case 5:
                    printf("Ban da chon can bac 2\n");
                    break;
                case 6:
                    printf("Ban da chon luy thua\n");
                    break;
                case 7: 
                    printf("Ban da chon phep logarit\n");
                    break;
                case 0:
                    printf("Ban da chon thoat\n");
                    break;
                default:
                    printf("Lua chon khong hop le\n");
                    break;
            }
            if (choice >= 1 && choice <= 7) {
                if (choice == 5 || choice == 7) {
                    printf("Nhap so a: ");
                    scanf("%lf", &a);

                } else {
                    printf("Nhap hai so a va b: ");
                    scanf("%lf %lf", &a, &b);
                }
 
                double result;
                switch (choice) {
                    case 1:
                        result = cong(a, b);
                        break;
                    case 2:
                        result = tru(a, b);
                        break;
                    case 3:
                        result = nhan(a, b);
                        break;
                    case 4:
                        result = chia(a, b);
                        break;
                    case 5:
                        result = can_bac_2(a);
                        break;
                    case 6:
                        result = luythua(a,b);
                        break;
                    case 7: 
                        result = loga(a);
                        break;
                    default:
                        result = 0; 
                }
                printf("Ket qua: %.4f\n", result);
            }
}
    } while(choice != 0);
    return 0;
}
