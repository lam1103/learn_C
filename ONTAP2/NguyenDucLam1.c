#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

void nhapXau(char s[]) {
    int hasUpper, hasLower, hasDigit, hasSpecial;

    do {
        printf("Nhap xau (it nhat 15 ky tu, bat dau bang A/a): ");
        fgets(s, 100, stdin);
        s[strcspn(s, "\n")] = 0; // Xóa ký tự '\n' cuối chuỗi nếu có

        // Reset các cờ kiểm tra
        hasUpper = hasLower = hasDigit = hasSpecial = 0;

        // Duyệt qua từng ký tự
        for (int i = 0; i < strlen(s); i++) {
            if (isupper(s[i])) hasUpper = 1;
            else if (islower(s[i])) hasLower = 1;
            else if (isdigit(s[i])) hasDigit = 1;
            else if (!isalnum(s[i]) && s[i] != ' ') hasSpecial = 1; 
        }

        // Thông báo lỗi nếu sai điều kiện
        if (strlen(s) < 15)
            printf(" Xau phai co it nhat 15 ky tu!\n");
        if (tolower(s[0]) != 'a')
            printf(" Ky tu dau tien phai la 'A' hoac 'a'!\n");
        if (!hasUpper)
            printf(" Phai co it nhat 1 chu hoa!\n");
        if (!hasLower)
            printf(" Phai co it nhat 1 chu thuong!\n");
        if (!hasDigit)
            printf(" Phai co it nhat 1 chu so!\n");
        if (!hasSpecial)
            printf(" Phai co it nhat 1 ky tu dac biet!\n");

        printf("\n");

    } while (strlen(s) < 15 || tolower(s[0]) != 'a' || !hasUpper || !hasLower || !hasDigit || !hasSpecial);
}

void demKyTu(char s[]) {
    int demUpper = 0, demLower = 0, demDigit = 0, demSpecial = 0;

    for (int i = 0; i < strlen(s); i++) {
        if (isupper(s[i])) demUpper++;
        else if (islower(s[i])) demLower++;
        else if (isdigit(s[i])) demDigit++;
        else if (!isalnum(s[i]) && s[i] != ' ') demSpecial++;
    }

    printf(" Xau hop le!\n");
    printf("So chu hoa: %d\n", demUpper);
    printf("So chu thuong: %d\n", demLower);
    printf("So chu so: %d\n", demDigit);
    printf("So ky tu dac biet: %d\n", demSpecial);
}

void changekitu(char s[]) {
    char special[] = "!@#$%^&*()?/\\";
    char newStr[200] = "";
    int j = 0;

    srand(time(NULL)); // sinh số ngẫu nhiên

    for (int i = 0; i < strlen(s); i++) {
        if (islower(s[i])) {
            // thay ký tự thường bằng ký tự đặc biệt ngẫu nhiên
            char randomChar = special[rand() % strlen(special)];
            newStr[j++] = randomChar;
        } else {
            newStr[j++] = s[i]; // giữ nguyên ký tự còn lại
        }
    }
    newStr[j] = '\0';

    printf("\n Xau sau khi thay cac chu thuong bang ky tu dac biet:\n%s\n", newStr);
}

int main() {
    char s[100];
    nhapXau(s);
    demKyTu(s);
    changekitu(s);
    return 0;
}
