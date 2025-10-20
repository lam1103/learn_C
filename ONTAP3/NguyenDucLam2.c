#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>


typedef struct {
    char hoTen[50];
    char maHS[8]; 
    char lop[20];
    char khoa[20];
    float diemTB;
} HocSinh;

void nhapMaHS(char maHS[]) {
    int isValid;
    do {
        isValid = 1;
        printf("Nhap ma hoc sinh (7 chu so): ");
        fgets(maHS, 100, stdin);
        maHS[strcspn(maHS, "\n")] = 0; // Xóa ký tự '\n' cuối chuỗi nếu có

        if (strlen(maHS) != 7) {
            isValid = 0;
        } else {
            for (int i = 0; i < 7; i++) {
                if (!isdigit(maHS[i])) {
                    isValid = 0;
                    break;
                }
            }
        }

        if (!isValid) {
            printf("Ma hoc sinh phai gom 7 chu so. Vui long nhap lai.\n");
        }

    } while (!isValid);
}


void nhapThongTinHocSinh(HocSinh hs[], int n) {
    for (int i = 0; i < n; i++) {
        printf("Nhap thong tin hoc sinh thu %d:\n", i + 1);

        // Nhap ho ten
        do {
            printf(" Ho ten: ");
            fgets(hs[i].hoTen, 100, stdin);
            hs[i].hoTen[strcspn(hs[i].hoTen, "\n")] = 0; // Xóa ký tự '\n' cuối chuỗi nếu có
            if (strlen(hs[i].hoTen) > 40) {
                printf(" Ho ten khong duoc vuot qua 40 ki tu. Vui long nhap lai.\n");
            }
        } while (strlen(hs[i].hoTen) > 40);

        // Nhap ma hoc sinh
        nhapMaHS(hs[i].maHS);

        // Nhap lop
        do {
            printf(" Lop: ");
            fgets(hs[i].lop, 100, stdin);
            hs[i].lop[strcspn(hs[i].lop, "\n")] = 0; // Xóa ký tự '\n' cuối chuỗi nếu có
            if (strlen(hs[i].lop) > 12) {
                printf(" Lop khong duoc vuot qua 12 ki tu. Vui long nhap lai.\n");
            }
        } while (strlen(hs[i].lop) > 12);

        // Nhap khoa
        do {
            printf(" Khoa: ");
            fgets(hs[i].khoa, 100, stdin);
            hs[i].khoa[strcspn(hs[i].khoa, "\n")] = 0; // Xóa ký tự '\n' cuối chuỗi nếu có
            if (atoi(hs[i].khoa) <= 0) {
                printf(" Khoa phai la so nguyen duong. Vui long nhap lai.\n");
            }
        } while (atoi(hs[i].khoa) <= 0);

        // Nhap diem trung binh
        do {
            printf(" Diem trung binh: ");
            scanf("%f", &hs[i].diemTB);
            while(getchar() != '\n'); // Xóa bộ đệm nhập
            if (hs[i].diemTB < 0 || hs[i].diemTB > 10) {
                printf(" Diem trung binh phai tu 0 den 10. Vui long nhap lai.\n");
            }
        } while (hs[i].diemTB < 0 || hs[i].diemTB > 10);
        printf("\n");
    }
}



void inThongTinHocSinh(HocSinh hs[], int n) {
    printf("+-----+---------------+----------------------+----------+----------+----------+\n");
    printf("| STT |    Ma HS      |        Ten HS        |    Lop   |   Khoa   |  Diem TB |\n");
    printf("+-----+---------------+----------------------+----------+-------------+----------+\n");
    for (int i = 0; i < n; i++) {
        printf("| %-3d | %-13s | %-20s | %-8s | %-8s | %-8.2f |\n", 
               i + 1, hs[i].maHS, hs[i].hoTen, hs[i].lop, hs[i].khoa, hs[i].diemTB);
        printf("+-----+---------------+----------------------+----------+----------+----------+\n");
    }
}

void sapXepHocSinhTheoDiem(HocSinh hs[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (hs[i].diemTB < hs[j].diemTB) {
                HocSinh temp = hs[i];
                hs[i] = hs[j];
                hs[j] = temp;
            }
        }
    }
}

int main () {
    int n;
    printf("Nhap so luong hoc sinh: ");
    scanf("%d", &n);
    while(getchar() != '\n'); // Xóa bộ đệm nhập

    HocSinh *hs = (HocSinh *)malloc(n * sizeof(HocSinh));

    nhapThongTinHocSinh(hs, n);

    printf("Thong tin hoc sinh vua nhap:\n");
    inThongTinHocSinh(hs, n);

    sapXepHocSinhTheoDiem(hs, n);

    printf("Thong tin hoc sinh sau khi sap xep theo diem trung binh giam dan:\n");
    inThongTinHocSinh(hs, n);

    free(hs);   
    return 0;
}