#include<stdio.h>
#include<math.h>

void input(float *a, float *b, float *c) {
    printf("Nhap a: ");
    scanf("%f", a);
    printf("Nhap b: ");
    scanf("%f", b);
    printf("Nhap c: ");
    scanf("%f", c);
    if(*a == 0) {
        if(*b != 0) {
            printf("Phuong trinh co 1 nghiem: x = %.2f\n", -(*c)/(*b));
        } else {
            if(*c == 0) {
                printf("Phuong trinh vo so nghiem.\n");
            } else {
                printf("Phuong trinh vo nghiem.\n");
            }
        }
    }
    else if(*b == 0) {
        if (-(*c)/(*a) > 0 ) {
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.2f\n", sqrt(-(*c)/(*a)));
            printf("x2 = %.2f\n", -sqrt(-(*c)/(*a)));
        } else if (-(*c)/(*a) == 0) {
            printf("Phuong trinh co nghiem kep: x1 = x2 = 0\n");
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    } 
    else if(*c == 0) {
        printf("Phuong trinh co 2 nghiem phan biet:\n");
        printf("x1 = 0\n");
        printf("x2 = %.2f\n", -(*b)/(*a));
    }
    else{ 
        float delta = (*b)*(*b) - 4*(*a)*(*c);
        if(delta > 0) {
            printf("Phuong trinh co 2 nghiem phan biet:\n");
            printf("x1 = %.2f\n", (-(*b) + sqrt(delta)) / (2*(*a)));
            printf("x2 = %.2f\n", (-(*b) - sqrt(delta)) / (2*(*a)));
        } else if(delta == 0) {
            printf("Phuong trinh co nghiem kep: x1 = x2 = %.2f\n", -(*b)/(2*(*a)));
        } else {
            printf("Phuong trinh vo nghiem.\n");
        }
    }
}

int main() {
    float a, b, c;
    do{ 
        input(&a, &b, &c);
    } while(a == 0 && b == 0 && c == 0);
    return 0;
}