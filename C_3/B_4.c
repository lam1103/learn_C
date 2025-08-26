/*Viết chương trình nhập vào bán kính hình cầu, tính và in ra
 diện tích, thể tích của hình cầu đó. Hướng dẫn: S = 4πR^2
 và V = (4/3)πR^3.*/
#include <stdio.h>
#include <math.h>
#define PI 3.14159265358979323846
int main() {
    float radius;
    printf("input radius: ");
    scanf("%f", &radius);
    float surface_area = 4 * PI * pow(radius, 2);
    float volume = (4.0 / 3.0) * PI * pow(radius, 3);
    printf("result surface area: %.2f\n", surface_area);
    printf("result volume: %.2f\n", volume);
    return 0;
}
