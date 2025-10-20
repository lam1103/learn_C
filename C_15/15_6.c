/*Viết chương trình C đọc file “matran1.txt” vừa tạo ra ở bài tập trên. 
Nhân ma trận này với hệ số a=5 và ghi lại ma trận mới vào file “matran2.txt”*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *f1, *f2;
    int a[5][5];
    f1 = fopen("matran.txt", "r");
    if (f1 == NULL) {
        printf("Khong the mo file matran.txt\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            fscanf(f1, "%d", &a[i][j]);
        }
    }
    fclose(f1);

    // Nhân ma trận với hệ số a=5
    int factor = 5;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            a[i][j] *= factor;
        }
    }

    // Ghi ma trận mới vào file "matran2.txt"
    f2 = fopen("matran2.txt", "w");
    if (f2 == NULL) {
        printf("Khong the mo file matran2.txt\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            fprintf(f2, "%d ", a[i][j]);
        }
        fprintf(f2, "\n");
    }
    fclose(f2);

    printf("Da nhan ma tran voi he so %d va ghi vao file matran2.txt\n", factor);
    return 0;
}