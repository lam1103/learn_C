#include <stdio.h>

int main() {
    int x, y,z ;
    int *p, *q, *r;
    p = &x;
    q = &y;
    r = &z;
    printf("Nhap 3 so nguyen: ");
    scanf("%d%d%d", &x, &y, &z);
    printf("gia tri cua p: %p\n", p);
    printf("gia tri cua q: %p\n", q);
    printf("gia tri cua r: %p\n", r);
    printf("gia tri cua *p: %d\n", *p);
    printf("gia tri cua *q: %d\n", *q);
    printf("gia tri cua *r: %d\n", *r);
    printf("gia tri cua x: %d\n", x);
    printf("gia tri cua y: %d\n", y);
    printf("gia tri cua z: %d\n", z);
    printf("-------------------------\n");
    int temp = x;
    x= y;
    p = &x;
    printf("gia tri cua p: %p\n", p);
    printf("gia tri cua *p: %d\n", *p);
    printf("gia tri cua x: %d\n", x);
    y = z;
    q = &y;
    printf("gia tri cua q: %p\n", q);
    printf("gia tri cua *q: %d\n", *q);
    printf("gia tri cua y: %d\n", y);
    z = temp;
    r = &z;
    printf("gia tri cua r: %p\n", r);
    printf("gia tri cua *r: %d\n", *r);
    printf("gia tri cua z: %d\n", z);

}