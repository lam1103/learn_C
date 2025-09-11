/*Viết chương trình quay số trúng thưởng, khi vào
 chương trình, người dùng sẽ nhập 3 số nguyên từ 0
 đến 9 (nếu nhập sai thì có thông báo nhập sai và
 thoát luôn khỏi chương trình). Sau khi nhập xong,
 chương trình tự động quay ra 3 số ngẫu nhiên và
 nếu:- Trùng 1 số: thì người dùng đạt giải Khuyến khích;- Trùng 2 số: thì người dùng đạt giải Nhất;- Trùng 3 số: thì người dùng đạt giải Đặc biệt;*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() { 
    int a, b, c;
    printf("Nhap 3 so nguyen tu 0 den 9: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a < 0 || a > 9 || b < 0 || b > 9 || c < 0 || c > 9) {
        printf("Nhap sai. Thoat chuong trinh.\n");
        return 0;
    }
    srand(time(0));
    int x = rand() % 10;
    int y = rand() % 10;
    int z = rand() % 10;
    printf("So quay ra: %d %d %d\n", x, y, z);
    int count = 0;
    if(a == x || a == y || a == z) count++;
    if(b == x || b == y || b == z) count++;
    if(c == x || c == y || c == z) count++;
    if(count == 1) {
        printf("Chuc mung ban da trung giai Khuyen khich!\n");
    } else if(count == 2) {
        printf("Chuc mung ban da trung giai Nhat!\n");
    } else if(count == 3) {
        printf("Chuc mung ban da trung giai Dac biet!\n");
    } else {
        printf("Chuc ban may mắn lần sau!\n");
    }
    return 0;
}