#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void xau(char a[], char b[]) {
    int seen1[256] = {0}, seen2[256] = {0};

      for (int i = 0; i < strlen(a); i++) seen1[(unsigned char)a[i]] = 1;
    for (int i = 0; i < strlen(b); i++) seen2[(unsigned char)b[i]] = 1;

    for (int i = 0; i < strlen(a); i++) {
        unsigned char c = a[i];
        if ((seen1[c] && !seen2[c]) || (!seen1[c] && seen2[c]))
            a[i] = '#';
    }

    for (int i = 0; i < strlen(b); i++) {
        unsigned char c = b[i];
        if ((seen1[c] && !seen2[c]) || (!seen1[c] && seen2[c]))
            b[i] = '#';
    }

    printf("Sau khi thay:\n");
    printf("s1 = %s\n", a);
    printf("s2 = %s\n", b);
}


void checkxau(char s[], int n) {
    int dem = 0;
    for (int i = 0; i < strlen(s); i++) {
        dem++;
    }
    if (dem > n) {
        for(int i = n; i < dem; i++) {
            s[i] = '\0';
        }
    }
    else{
        int j = 0;
        for (int i = dem; i < n; i++) {
            s[i] = s[j];      // sao chép tuần tự từ đầu
            j++;
            if (j == dem) j = 0;  // quay lại đầu chuỗi
        }
        s[n] = '\0';  // kết thúc chuỗi
    }

    printf("Xau ket qua: %s\n", s);
}

int main () {
    char s1[100], s2[100], s3[100];
    int n;

    printf("Nhap xau 1: ");
    fgets(s1, sizeof(s1), stdin);
    s1[strcspn(s1, "\n")] = 0; 

    printf("Nhap xau 2: ");
    fgets(s2, sizeof(s2), stdin);
    s2[strcspn(s2, "\n")] = 0; 

    
    printf("Nhap xau 3: ");
    fgets(s3, sizeof(s3), stdin);
    s3[strcspn(s3, "\n")] = 0;

    xau(s1, s2);

    printf("Nhap n: ");
    scanf("%d", &n);

    checkxau(s3, n);

    return 0;
}