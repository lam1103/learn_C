/* Lập chương trình quản lí điểm thi môn C cho một lớp học có n học
 sinh, n <=10.
 • Thông tin về điểm thi môn C của từng học sinh được lưu dưới
 dạng bản ghi:– Tên học sinh: không vượt quá 20 kí tự– Mãhọc sinh: số nguyên– Điểm tổng kết: số thực
 • Viết chương trình nhập dữ liệu cho một lớp có n học sinh, với n là
 số nguyên được nhập từ bàn phím và n<=10*/

#include <stdio.h>
#include <math.h>
typedef struct { 
    char name[20];
    int mahs; 
    float diemtk;
} student_t;

void input(student_t *sv) {
    printf("Nhap ten sinh vien: ");
    scanf("%s", &sv-> name); 
    printf("Nhap ma so hoc sinh: ");
    scanf("%d", &sv-> mahs);
    printf("Nhap diem tong ket: ");
    scanf("%f", &sv-> diemtk);


}

void sapxepgiam(student_t *sv, int n) {
    student_t tg;
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(sv[i].diemtk < sv[j].diemtk) {
                tg = sv[i];
                sv[i] = sv[j];
                sv[j] = tg;
            }
        }
    }
}


int main() {
    int n;
    student_t tg , sv[10];
    printf("Nhap so luong hoc sinh: ");
    scanf("%d", &n);
    while(n > 10) {
        printf("Nhap lai so luong hoc sinh: ");
        scanf("%d", &n);
    }
    for(int i = 0; i < n; i++) {
        printf("Nhap thong tin hoc sinh thu %d:\n", i+1);
        input(&sv[i]);
    }

    sapxepgiam(sv, n);
    printf("Danh sach hoc sinh vua nhap:\n");
    printf("+------+--------------------+------------+----------+\n");
    printf("| STT  |        Ten         | Ma so HS   | Diem TK  |\n");
    printf("+------+--------------------+------------+----------+\n");
    for(int i = 0; i < n; i++) {
        printf("| %-4d | %-18s | %-10d | %-8.2f |\n", i+1, sv[i].name, sv[i].mahs, sv[i].diemtk);
    }
    printf("+------+--------------------+------------+----------+\n");
}