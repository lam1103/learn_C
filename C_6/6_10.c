/*Người bán vé nhập thông tin bán vé như sau:
 Ten phim: Warcraft
 So luong ve: 1
 Loại vé (Nhap 1- Tre em, khac-Nguoi lon): 1
 Ngay xem (Nhap 1- Chu nhat, khac- Ngay thuong): 1
 gia ve tre em giam 50% ngay chu nhat*/

#include<stdio.h>
#include<string.h>

void ngay(int ngayxem, int loaive, long giave) {
    if(ngayxem == 1) {
        printf("Ngay xem: Chu nhat\n");
        if(loaive == 1) {
            giave == 50000;
            printf("Loai ve: Tre em\n");
        } else {
            giave == 100000;
            printf("Loai ve: Nguoi lon\n");
        }
    } else {
        printf("Ngay xem: Ngay thuong\n");
        if(loaive == 1) {
            giave == 35000;
            printf("Loai ve: Tre em\n");
        } else {
            giave == 70000;
            printf("Loai ve: Nguoi lon\n");
        }
    }
}


int main() { 
    char tenphim[50];
    int soluongve;
    int loaive;
    int ngayxem;
    long giave;
    int tongtien;
    printf("Nhap ten phim: ");
    fgets(tenphim, sizeof(tenphim), stdin);
    tenphim[strcspn(tenphim, "\n")] = 0; // Xoa ky tu xuong dong neu co
    printf("Nhap so luong ve: ");
    scanf("%d", &soluongve);
    printf("Nhap loai ve (1- Tre em, khac- Nguoi lon): ");
    scanf("%d", &loaive);
    printf("Nhap ngay xem (1- Chu nhat, khac- Ngay thuong): ");
    scanf("%d", &ngayxem);  

    printf("thong tin ve:\n");
    printf("Ten phim: %s\n", tenphim);
    printf("So luong ve: %d\n", soluongve);
    ngay(ngayxem, loaive, giave);
    tongtien = giave * soluongve;
    printf("Tong tien: %ld\n", tongtien);
    return 0;
}