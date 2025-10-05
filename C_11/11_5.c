/* Viết chương trình kiểm tra một chuỗi có
 phải là palindrome. Một chuỗi được gọi là
 palindrome nếu sau khi đảo ngược các ký
 tự của nó ta vẫn nhận được chuỗi như
 ban đầu. Ví dụ chuỗi MADAM*/
#include <stdio.h>
#include <string.h>
int main() {
    char str[100];
    char *p = str;
    printf("Nhap chuoi: ");
    fgets(str, sizeof(str), stdin);
    int len = 0;
    while (*(p + len ) != '\0') {
        len++;
    }
    printf("Do dai chuoi: %d\n", len);
    int isPalindrome = 1;
    for (int i = 0; i < len / 2; i++) {
        if (*(p + i) != *(p + len - 2 - i)) {
            isPalindrome = 0;
            break;
        }
    }
    if (isPalindrome == 0) {
        printf("Chuoi '%s' khong la palindrome.\n", str);
    } else {
        printf("Chuoi '%s' la palindrome.\n", str);
    }
}