/* Viết chương trình
 nhập vào thông
 tincủa2sinhviên
 (tên, quê quán,
 nămsinh), sauđó
 intất cảthôngtin
 của 5 sinh viên
 nàyramànhình.*/

#include <stdio.h>

int main() {
    char names[10][100];
    char hometowns[10][100];
    int year_old[10];

    for (int i = 0; i < 2; i++) {
        printf("nhap thong tin sinh vien %d:\n", i + 1);
        printf("Ten: ");
        scanf("%s", names[i]);
        printf("Que quan: ");
        scanf("%s", hometowns[i]);
        printf("nam sinh: ");
        scanf("%d", &year_old[i]);
    }

    printf("\nCac sinh vien da nhap vao:\n");
    printf("*--------------------------------------*\n");
    printf("|  ten     |  que quan   |   tuoi      |\n");
    printf("*--------------------------------------*\n");
    for (int i = 0; i < 2; i++) {
        printf("|  %-7s |  %-10s |   %-5d     |\n", names[i], hometowns[i], year_old[i]);
        printf("*--------------------------------------*\n");
    }
    printf("*--------------------------------------*\n");
    return 0;
}
