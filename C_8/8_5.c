#include<stdio.h>
#include<math.h>

float TinhgiaiThua(int n) {
    if(n == 0) return 1;
    return n * TinhgiaiThua(n - 1);
}

    void TInhsin(float x, int n) {
        float sinx = 0.0;
        for(int i = 0; i <= n; i++) {
            sinx += (pow(-1, i) * (pow(x, 2 * i + 1) / TinhgiaiThua(2 * i + 1)));
        }
        printf("sinx: %.3f\n", sinx);
    }

int main() {
    float x;
    int n;
    printf("Nhap x: ");
    scanf("%f", &x);
    printf("Nhap n: ");
    scanf("%d", &n);
    TInhsin(x, n);
    return 0;
}