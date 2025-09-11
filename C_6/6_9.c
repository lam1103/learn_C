/* Tính số tuổi của người dùng và đưa ra
 nhận định người đó đang trong độ tuổi nào:
  từ 0 đến dưới 6 là trẻ em,
  từ 6 đến dưới 11 là học sinh cấp 1;
  từ 11 đến dưới 15 là học sinh cấp 2;
  từ 15 đến dưới 18 là học sinh cấp 3;
  Từ 18 đến dưới 40 là thanh niên;
  từ 40 đến dưới 60 là trung niên;
  từ 60 trở đi là người già*/
#include<stdio.h>

 int main() { 
        int tuoi;
        printf("Nhap so tuoi cua ban: ");
        scanf("%d", &tuoi);
        if(tuoi < 0) {
            printf("So tuoi khong hop le.\n");
        } else if(tuoi < 6) {
            printf("Ban dang trong do tuoi tre em.\n");
        } else if(tuoi < 11) {
            printf("Ban dang trong do tuoi hoc sinh cap 1.\n");
        } else if(tuoi < 15) {
            printf("Ban dang trong do tuoi hoc sinh cap 2.\n");
        } else if(tuoi < 18) {
            printf("Ban dang trong do tuoi hoc sinh cap 3.\n");
        } else if(tuoi < 40) {
            printf("Ban dang trong do tuoi thanh nien.\n");
        } else if(tuoi < 60) {
            printf("Ban dang trong do tuoi trung nien.\n");
        } else {
            printf("Ban dang trong do tuoi nguoi gia.\n");
        }
        return 0;
 }