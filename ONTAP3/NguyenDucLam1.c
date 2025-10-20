#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <time.h>

void nhapXau(char s[]) {
    int hasUpper;

    do {
        printf("Nhap xau (khong vuot qua 12 ki tu): ");
        fgets(s, 100, stdin);
        s[strcspn(s, "\n")] = 0; // Xóa ký tự '\n' cuối chuỗi nếu có

        // Reset các cờ kiểm tra
        hasUpper = 0;

        // Duyệt qua từng ký tự
        for (int i = 0; i < strlen(s); i++) {
            if (isupper(s[i])) hasUpper++;
        }

        // Thông báo lỗi nếu sai điều kiện
        if (strlen(s) > 12)
            printf(" Xau khong duoc vuot qua 12 ki tu!\n");
        if (!hasUpper)
            printf(" tat ca ki tu phai la chu hoa!\n");
        printf("\n");

    } while (strlen(s) > 12 || !hasUpper);

    printf("Xau hop le: %s\n", s);
}



//Viết hàm truyền vào một xâu và kiểm tra xem xâu đó có đối xứng hay không. Hàm trả về 1 nếu xâu truyền vào đối xứng còn nếu không trả về 0.
int kiemTraDoiXung(char s[]) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

//Viết chương trình con truyền vào một xâu A và đưa ra số xâu con a đối xứng trong xâu A. Ví dụ xâu A=”FDAADMJKJHNF” thì có 3 xâu: a=”DAAD”, a=”AA” và a=”JKJ” là đối xứng.
int demXauConDoiXung(char s[]) {
    int count = 0;
    int len = strlen(s);

    for (int i = 0; i < len; i++) {
        for (int j = i + 1; j <= len; j++) {
            char sub[100];
            strncpy(sub, s + i, j - i);
            sub[j - i] = '\0';

            if (kiemTraDoiXung(sub) && strlen(sub) > 1) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    char s[100];
    nhapXau(s);
    int result = demXauConDoiXung(s);
    printf("So xau con doi xung trong xau: %d\n", result);
    return 0;
}

