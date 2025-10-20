#include <stdio.h>
#include <stdlib.h>

int main () {
    int a, b, c, d, e; 
    int *ptr; 
    ptr = (int*) malloc(5 * sizeof(int));
    for(int i= 0; i< 5;i++ ) {
        printf("%d ", ptr[i]);
    }
    ptr[0] = a;
    ptr[1] = b;
    ptr[2] = c;
    ptr[3] = d;
    ptr[4] = e;
    for (int i = 0 ; i< 5;i ++) {
        printf("Nhap so thu %d: ", i+1);
        scanf("%d", &ptr[i]);
    }
    printf("Cac so vua nhap la: ");
    for (int i = 0 ; i< 5;i ++) {
        printf("%d ", ptr[i]);
    }
    free(ptr);
    ptr = NULL;

}