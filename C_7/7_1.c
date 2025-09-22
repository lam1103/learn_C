/*Liệt kê các số tự nhiên nhỏ hơn 1000
có đặc tính sau:*/

#include <stdio.h>
#include <math.h>
 int main() {
    int i;
    printf("Cac so tu nhien nho hon 1000:\n");
        for(i= 1; i<1000; i++) {
            int hundreds = i / 100;
            int tens = (i / 10) % 10;
            int units = i % 10;
            if (hundreds + units == tens) {
                printf("%d\n", i);
            }
        }
 }