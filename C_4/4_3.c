#include <stdio.h>
#define PI 3.14
int main() {
    float radius, area, circle;
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    printf("Dien tich hinh tron: %f\n", area);
    circle = 2 * PI * radius;
    printf("Chu vi hinh tron: %f\n", circle);
    return 0;
}
