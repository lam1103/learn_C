#include<stdio.h>

int main() {
    printf(" tien dien sinh hoat co 4 muc:\n");
    printf("- Tu 1- 50KWH : gia 500 \n- Tu 51- 100KWH : gia 1000 \n- Tu 101- 150KWH : gia 1200 \n- Tu 151- 200KWH : gia 1600");
    int sodien; 
    int tien;
    printf("\n Nhap so dien tieu thu trong thang: ");
    scanf("%d", &sodien);
    if(sodien <=50) { 
        tien = sodien * 500;
    }
    else if(sodien <= 100 && sodien > 50) {
        tien = sodien * 1000;
    }
    else if(sodien >100 && sodien <=150) { 
        tien = sodien * 1200;
    }
    else {
        tien = sodien * 1600;
    }
    printf("So muc dien tieu thu la: %d KWh\n", sodien);
    printf("So tien dien phai tra trong thang la: %d dong", tien);
    return 0;
}