#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char account[100];
    printf("tai khoan khach hang: \n");
    fgets(account, sizeof(account), stdin);
    account[strcspn(account, "\n")] = '\0';
    printf("nhap so tien gui: \n");
    int amount;
    scanf("%d", &amount);
    printf("lai suat hang nam: \n");
    float rate;
    scanf("%f", &rate);
    long tien_lai = amount * rate / 100;
    long so_du = amount + tien_lai;
    printf("tai khoan khach hang: %s\n", account);
    printf("Thang   tien dau ki   tien lai     so du\n");
    for(int month = 1; month <= 12; month++) {
        printf("%d         %d       %ld       %ld ", month, amount, tien_lai, so_du);
        amount = so_du;
        so_du = amount + tien_lai;
        tien_lai = amount * rate / 100;
        printf("\n");
    }
    printf("Tong tien lai nhan duoc sau 1 nam: %ld\n", tien_lai * 12);
    return 0;
}