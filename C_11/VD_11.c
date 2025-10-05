#include <stdio.h>

int main() {
    float *point;
    float a = 10;
    float b = 20;
    float c = 30;
    point = &a ;
    *point += 10;
    printf("Dia chi cua a: %f\n", *point);
    point = &b ;
    *point += 10;
    printf("Dia chi cua b: %f\n", *point);
    point = &c ;
    *point += 10;
    printf("Dia chi cua c: %f\n", *point);

}