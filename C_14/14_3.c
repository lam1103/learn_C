
#include <stdio.h>
#include <string.h>
typedef struct {
    char tenhang[20];
    char mahang[6];
    float dongia;
    int soluongban;
} hanghoa_t;

void input(hanghoa_t *hh) {
    printf("Nhap ten hang: ");
    scanf("%s", hh->tenhang);
    if(strcmp(hh->tenhang, "***") == 0) {
        return;
    }
    printf("Nhap ma hang: ");
    scanf("%s", hh->mahang);
    printf("Nhap don gia: ");
    scanf("%f", &hh->dongia);
    printf("Nhap so luong ban: ");
    scanf("%d", &hh->soluongban);
}
void sapxepmahang(hanghoa_t *hh, int n) {
    hanghoa_t tg;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(strcmp(hh[i].mahang, hh[j].mahang) > 0) {
                tg = hh[i];
                hh[i] = hh[j];
                hh[j] = tg;
            }
        }
    }
}
int main() {
    hanghoa_t tg , hh[100];
    int n = 0;
    int SL;
    printf("Nhap so luong hang hoa (toi da 100): ");
    scanf("%d", &SL);
    while(n < SL) {
        printf("Nhap thong tin hang hoa thu %d:\n", n+1);
        input(&hh[n]);
        if(strcmp(hh[n].tenhang, "***") == 0) {
            break;
        }
        n++;
    }

    sapxepmahang(hh, n);
    printf("Danh sach hang hoa vua nhap:\n");
    printf("+------+--------------------+------------+----------+--------------+\n");
    printf("| STT  |      Ten hang      |  Ma hang   | Don gia  | So luong ban |\n");
    printf("+------+--------------------+------------+----------+--------------+\n");
    for(int i = 0; i < n; i++) {
        printf("| %-4d | %-18s | %-10s | %-8.2f | %-12d |\n", i+1, hh[i].tenhang, hh[i].mahang, hh[i].dongia, hh[i].soluongban);
        printf("+------+--------------------+------------+----------+--------------+\n");
    }
}