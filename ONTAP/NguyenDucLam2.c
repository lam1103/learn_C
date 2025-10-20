#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_XE 100

typedef struct {
    char hangSX[31];
    char maXe[16];
    char loaiXe[31];
    float dungTich;
    int namSX;
    float giaBan;
} XeMay;

// ====================== KIỂM TRA NHẬP =========================

int kiemTraChuoiRong(const char *s) {
    return strlen(s) == 0;
}

float nhapSoThucDuong(const char *thongbao) {
    float x;
    do {
        printf("%s", thongbao);
        scanf("%f", &x);
        if (x <= 0) printf("❌ Gia tri phai lon hon 0. Nhap lai!\n");
    } while (x <= 0);
    return x;
}

int nhapNamSX() {
    int n;
    do {
        printf("Nhap nam san xuat: ");
        scanf("%d", &n);
        if (n < 1900 || n > 2025)
            printf("❌ Nam san xuat khong hop le (1900–2025). Nhap lai!\n");
    } while (n < 1900 || n > 2025);
    return n;
}

// ====================== HÀM NHẬP THÔNG TIN 1 XE =========================

void nhapXe(XeMay *xe) {
    getchar(); // loại bỏ ký tự '\n' còn lại trong bộ đệm

    do {
        printf("Nhap hang san xuat: ");
        fgets(xe->hangSX, sizeof(xe->hangSX), stdin);
        xe->hangSX[strcspn(xe->hangSX, "\n")] = '\0'; // xóa '\n'
        if (kiemTraChuoiRong(xe->hangSX))
            printf("❌ Hang san xuat khong duoc rong.\n");
    } while (kiemTraChuoiRong(xe->hangSX));

    do {
        printf("Nhap ma xe: ");
        fgets(xe->maXe, sizeof(xe->maXe), stdin);
        xe->maXe[strcspn(xe->maXe, "\n")] = '\0';
        if (kiemTraChuoiRong(xe->maXe))
            printf("❌ Ma xe khong duoc rong.\n");
    } while (kiemTraChuoiRong(xe->maXe));

    do {
        printf("Nhap loai xe (VD: SH, NVX, Wave...): ");
        fgets(xe->loaiXe, sizeof(xe->loaiXe), stdin);
        xe->loaiXe[strcspn(xe->loaiXe, "\n")] = '\0';
        if (kiemTraChuoiRong(xe->loaiXe))
            printf("❌ Loai xe khong duoc rong.\n");
    } while (kiemTraChuoiRong(xe->loaiXe));

    xe->dungTich = nhapSoThucDuong("Nhap dung tich xi-lanh (cc): ");
    xe->namSX = nhapNamSX();
    xe->giaBan = nhapSoThucDuong("Nhap gia ban (trieu VND): ");
}

// ====================== HÀM IN THÔNG TIN =========================

void hienThiXe(XeMay xe) {
    printf("\n--- Thong tin xe ---\n");
    printf("Hang SX     : %s\n", xe.hangSX);
    printf("Ma xe       : %s\n", xe.maXe);
    printf("Loai xe     : %s\n", xe.loaiXe);
    printf("Dung tich   : %.1f cc\n", xe.dungTich);
    printf("Nam SX      : %d\n", xe.namSX);
    printf("Gia ban     : %.2f trieu VND\n", xe.giaBan);
}

void taoMaXe(XeMay *xe) {
    char dungTichStr[10];

    // chuyển dung tích sang chuỗi (vì là float nên dùng sprintf)
    sprintf(dungTichStr, "%.0f", xe->dungTich);

    // đảm bảo chuỗi rỗng ban đầu
    xe->maXe[0] = '\0';

    // ghép mã theo dạng: Hãng.Loại.DungTich
    strcat(xe->maXe, xe->hangSX);
    strcat(xe->maXe, ".");
    strcat(xe->maXe, xe->loaiXe);
    strcat(xe->maXe, ".");
    strcat(xe->maXe, dungTichStr);
}

void taoMaDanhSach(XeMay ds[], int n) {
    for (int i = 0; i < n; i++) {
        taoMaXe(&ds[i]);
    }
}

void sapXepTheoGia(XeMay ds[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (ds[i].giaBan > ds[j].giaBan) {
                XeMay temp = ds[i];
                ds[i] = ds[j];
                ds[j] = temp;
            }
        }
    }
}

void inDanhSachXe(XeMay ds[], int n) {
    printf("Stt - Ma - Nam san xuat - Gia (trieu VND)\n");
    printf("--------------------------------------------\n");

    for (int i = 0; i < n; i++) {
        printf("%d - %s - %d - %.2f\n",
               i + 1,
               ds[i].maXe,
               ds[i].namSX,
               ds[i].giaBan);
    }
}

// ====================== CHƯƠNG TRÌNH CHÍNH =========================
int main() {
    XeMay ds[MAX_XE];
    int soXe = 0;
    char tieptuc;

    do {
        printf("\n=== Nhap thong tin xe may thu %d ===\n", soXe + 1);
        nhapXe(&ds[soXe]);
        soXe++;

        printf("Ban co muon nhap tiep? (y/n): ");
        scanf(" %c", &tieptuc); // có khoảng trắng để bỏ qua '\n'
    } while ((tieptuc == 'y' || tieptuc == 'Y') && soXe < MAX_XE);

    printf("\n========== DANH SACH XE MAY ==========\n");
    for (int i = 0; i < soXe; i++) {
        hienThiXe(ds[i]);
    }

    taoMaDanhSach(ds, soXe);

    for (int i = 0; i < soXe; i++) {
        printf("Xe %d: %s\n", i + 1, ds[i].maXe);
    }

    sapXepTheoGia(ds, soXe);
    printf("\n--- Danh sach xe sau khi sap xep theo gia ---\n");
    inDanhSachXe(ds, soXe);

    return 0;
}


