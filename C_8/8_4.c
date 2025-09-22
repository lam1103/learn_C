
#include<stdio.h>
#include<math.h>

float TinhgiaiThua(int n) {
    if(n == 0) return 1;
    return n * TinhgiaiThua(n - 1);
}
void TinhSOPI(float e, int n) {
    printf("nhap e: ");
    scanf("%f", &e);
    float pi = 0.0;
    for(int i = 0; i <= n; i+= 2) {
        pi += (pow(-1, i) * (1.0 / (2 * i + 1)));
    }
    pi *= 4;
    printf("SOPI: %f\n", pi);
}

void TinhEpselon(float e, int n) {
    do {
        printf("Nhap e (0 < e < 1): ");
        scanf("%f", &e);
    } while(e <= 0 || e >= 1);
    for(int i = 1; i <= n; i++) {
        float term = 1 / TinhgiaiThua(i);
        if(term < e) break;
        e += term;
    }
    printf("Epselon: %f\n", e);
}

int main() {
    float e;
    int n; 
    int choice;
    printf("nhap lua chon: ");
    scanf("%d", &choice);
    printf("Nhap n: ");
    scanf("%d", &n);
    switch(choice){
        case 1:
            TinhEpselon(e, n);
            break;
        case 2:
            TinhSOPI(e, n);
            break;
    }
    return 0;
}