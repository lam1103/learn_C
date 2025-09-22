
#include<stdio.h>

int main() {
    float epsilon;
    printf("nhap so epsilon < 1: \n");
    scanf("%f", &epsilon);
    if(epsilon >= 1) {
        printf("so epsilon khong hop le\n");
        return 1;
    }
    float e = 1.0; 
    float term = 1.0; 
    int n = 1; 
    while(term >= epsilon) {
        term /= n; 
        e += term; 
        n++; 
    }
    printf("Gia tri cua e la: %f\n", e);
}