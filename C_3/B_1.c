/* Viết chương trình nhập vào một số a bất kỳ và in ra giá trị
 a2, a3, a4*/
#include <stdio.h>
#include <math.h>

int main() {
    float a;
    printf("input a: ");
    scanf("%f", &a);
    printf("a^2 = %.2f\n", pow(a, 2));
    printf("a^3 = %.2f\n", pow(a, 3));
    printf("a^4 = %.2f\n", pow(a, 4));
    return 0;
}