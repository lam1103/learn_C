#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main() {
    float x, y, z;
    float F;

    printf("Nhap x: ");
    scanf("%f", &x);
    printf("Nhap y: ");
    scanf("%f", &y);
    printf("Nhap z: ");
    scanf("%f", &z);
    F = ((x + y + sqrt(z)) / (pow(x, 2) + pow(y, 2) + 1)) - (sin(x) - z*cos(y));
    printf("Gia tri F la: %.2f", F);
}