#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *f;
    int a[5][5];
    for(int i = 0; i< 5; i++) {
        for (int j = 0; j< 5 ; j++) {
            printf("nhap phan tu a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("ghi vao file matran 5x5\n");
    f = fopen("matran.txt", "w");
    for (int i = 0; i< 5; i++) {
        for (int j = 0; j< 5; j++) {
            fprintf(f, "%d ", a[i][j]);
        }
        fprintf(f, "\n");
    }
    fclose(f);
    return 0;
}   