
#include<stdio.h>
#include<math.h>
void menu(){
        printf("CHUONG TRINH TINH\n");
        printf("1- So pi\n");
        printf("2- So e\n");
        printf("3- sin(x)\n");
        printf("An phim khac: Thoat\n");
        printf("Moi ban lua chon chuong trinh: ");
}

float TinhgiaiThua(int n) {
    if(n == 0) return 1;
    return n * TinhgiaiThua(n - 1);
}

void TinhSOPI(float e, int n) {
    float pi = 0.0;
    for(int i = 0; i <= n; i+= 2) {
        pi += (pow(-1, i) * (1.0 / (2 * i + 1)));
    }
    pi *= 4;
    printf("SOPI: %f\n", pi);
}

void TinhEpselon(float e, int n) {
    for(int i = 1; i <= n; i++) {
        float term = 1 / TinhgiaiThua(i);
        if(term < e) break;
        e += term;
    }
    printf("Epselon: %f\n", e);
}

void TInhsin(float x, int n) {
    float sinx = 0.0;
    for(int i = 0; i <= n; i++) {
        sinx += (pow(-1, i) * (pow(x, 2 * i + 1) / TinhgiaiThua(2 * i + 1)));
    }
    printf("sinx: %.3f\n", sinx);
}

void choose(int choice) {
        scanf("%d", &choice);
        if(choice >= 1 && choice <= 3) {
            float e, x;
            int n;
            printf("Nhap n: ");
            scanf("%d", &n);
            switch(choice) {
                case 1:
                    TinhSOPI(e, n);
                    break;
                case 2:
                    printf("Nhap e (0 < e < 1): ");
                    scanf("%f", &e);
                    TinhEpselon(e, n);
                    break;
                case 3:
                    printf("Nhap x: ");
                    scanf("%f", &x);
                    TInhsin(x, n);
                    break;
            }
        } else {
            printf("Thoat chuong trinh.\n");
        }

}

int main() {
    int choice;
    char cont;
    do {
        menu();
        choose(choice);
        printf("Ban co muon tiep tuc chuong trinh?(y/n): ");
        scanf(" %c", &cont);
    } while(cont == 'y' || cont == 'Y');
    return 0;
}
