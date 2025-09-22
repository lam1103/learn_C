

#include<stdio.h>
#include<math.h>
int main() {
    float epsilon;
    printf("nhap so epsilon < 1: \n");
    scanf("%f", &epsilon);
    if(epsilon >= 1) {
        printf("so epsilon khong hop le\n");
        return 1;
    }
    float pi_over_4 = 0.0; 
    int i = 0; 
    float term = 1.0; 
    while(term >= epsilon) {
        term = (float)(pow(-1, i)) / (2 * i + 1); 
        pi_over_4 += term; 
        i++; 
    }
    float pi = pi_over_4 * 4; 
    printf("Gia tri cua pi la: %f\n", pi);
}