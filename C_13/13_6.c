
#include <stdio.h>
#include <string.h>

int main() {
    char text[256];
    int shift;

    // Nhập đoạn văn bản
    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0; // Loại bỏ ký tự xuống dòng nếu có

    // Nhập giá trị dịch chuyển
    printf("Enter shift value: ");
    scanf("%d", &shift);

    // Mã hóa
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        if (ch >= 'a' && ch <= 'z') {
            text[i] = (ch - 'a' + shift) % 26 + 'a';
        } else if (ch >= 'A' && ch <= 'Z') {
            text[i] = (ch - 'A' + shift) % 26 + 'A';
        }
    }
    printf("Encoded string: %s\n", text);

    // Giải mã
    for (int i = 0; text[i] != '\0'; i++) {
        char ch = text[i];
        if (ch >= 'a' && ch <= 'z') {
            text[i] = (ch - 'a' - shift + 26) % 26 + 'a';
        } else if (ch >= 'A' && ch <= 'Z') {
            text[i] = (ch - 'A' - shift + 26) % 26 + 'A';
        }
    }
    printf("Decoded string: %s\n", text);

    return 0;
}