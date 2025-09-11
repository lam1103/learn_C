#include<stdio.h>
#include<math.h>

float delta(float a, float b, float c) {
    return b*b - 4*a*c;
}

int main() {
    float a, b, c;
    float dlt;
    printf("Nhap a: ");
    scanf("%f", &a);
    printf("Nhap b: ");
    scanf("%f", &b);
    printf("Nhap c: ");
    scanf("%f", &c);
    dlt = delta(a, b, c);
    printf("Gia tri delta la: %.2f\n", dlt);
    if(dlt < 0) {
        printf("Phuong trinh vo nghiem");
    }
    else if(dlt == 0) {
        float x = -b/(2*a);
        printf("Phuong trinh co nghiem kep x1 = x2 = %.2f", x);
    }
    else {
        float x1 = (-b + sqrt(dlt)) / (2*a);
        float x2 = (-b - sqrt(dlt)) / (2*a);
        printf("Phuong trinh co 2 nghiem phan biet:\n");
        printf("x1 = %.2f\n", x1);
        printf("x2 = %.2f", x2);
    }
}