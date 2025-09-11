/* Học lực của sinh viên được đánh giá theo điểm như sau:
  từ 0 đến dưới 5 là học lực kém,
  từ 5 đến dưới 7 là học lực trung bình;
  từ 7 đến dưới 8 là học lực khá;
  từ 8 đến dưới 9 là học lực giỏi,
  từ 9 đến 10 là học lực xuất sắc*/
#include<stdio.h>

int main() {
    float diem;
    printf("Nhap diem cua sinh vien: ");
    scanf("%f", &diem);
    if(diem < 0 || diem > 10) {
        printf("Diem khong hop le.\n");
    } else if(diem < 5) {
        printf("Hoc luc kem.\n");
    } else if(diem < 7) {
        printf("Hoc luc trung binh.\n");
    } else if(diem < 8) {
        printf("Hoc luc kha.\n");
    } else if(diem < 9) {
        printf("Hoc luc gioi.\n");
    } else {
        printf("Hoc luc xuat sac.\n");
    }
    return 0;
}