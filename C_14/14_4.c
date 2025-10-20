
#include <stdio.h>
#include <string.h>
typedef struct {
    char name[20];
    char mahs[8];
    int sophach;
} thisinh_t;
typedef struct {
    int sophach;
    float diem;
} diemthi_t;    
void input(thisinh_t *ts) {
    printf("Nhap ten thi sinh: ");
    scanf("%s", ts->name);
    printf("Nhap ma so hoc sinh: ");
    scanf("%s", ts->mahs);
    printf("Nhap so phach: ");
    scanf("%d", &ts->sophach);
}
void inputdiem(diemthi_t *dt) {
    printf("Nhap so phach: ");
    scanf("%d", &dt->sophach);
    printf("Nhap diem: ");
    scanf("%f", &dt->diem);
}
void sapxep(thisinh_t *ts, int n) {
    thisinh_t tg;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(ts[i].sophach > ts[j].sophach) {
                tg = ts[i];
                ts[i] = ts[j];
                ts[j] = tg;
            }
        }
    }
}
void sapxepdiem(diemthi_t *dt, int n) {
    diemthi_t tg;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(dt[i].sophach > dt[j].sophach) {
                tg = dt[i];
                dt[i] = dt[j];
                dt[j] = tg;
            }
        }
    }
}
int main() {
    int n;
    thisinh_t tg , ts[10];
    diemthi_t dt[10];
    printf("Nhap so luong thi sinh: ");
    scanf("%d", &n);
    while(n > 10) {
        printf("Nhap lai so luong thi sinh: ");
        scanf("%d", &n);
    }
    for(int i = 0; i < n; i++) {
        printf("Nhap thong tin thi sinh thu %d:\n", i+1);
        input(&ts[i]);
    }
    sapxep(ts, n);
    printf("Danh sach thi sinh vua nhap:\n");
    printf("+------+--------------------+------------+----------+\n");
    printf("| STT  |        Ten         | Ma so HS   | So phach |\n");
    printf("+------+--------------------+------------+----------+\n");
    for(int i = 0; i < n; i++) {
        printf("| %-4d | %-18s | %-10s | %-8d |\n", i+1, ts[i].name, ts[i].mahs, ts[i].sophach);
        printf("+------+--------------------+------------+----------+\n");
    }
    printf("Nhap diem thi cua cac thi sinh:\n");
    for(int i = 0; i < n; i++) {
        printf("Nhap thong tin diem thi thu %d:\n", i+1);
        inputdiem(&dt[i]);
    }
    sapxepdiem(dt, n);
    printf("Bang diem thi cua cac thi sinh:\n");
    printf("+------+--------------------+------------+----------+\n");
    printf("| STT  |        Ten         | Ma so HS   | Diem     |\n");
    printf("+------+--------------------+------------+----------+\n");
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(ts[i].sophach == dt[j].sophach) {
                printf("| %-4d | %-18s | %-10s | %-8.2f |\n", i+1, ts[i].name, ts[i].mahs, dt[j].diem);
                printf("+------+--------------------+------------+----------+\n");
            }
        }
        
    }
}
