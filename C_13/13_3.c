/*Viết chương trình nhập vào từ bàn phím họ và
 tên của một người, sau đó in phần tên ra màn
 hình. Ví dụ:“Le Hoang Anh“ thì in ra “Anh".*/

#include <stdio.h>
#include <string.h>

int main() {
    char fullName[100];
    printf("Enter full name: ");
    fgets(fullName, sizeof(fullName), stdin);
    fullName[strcspn(fullName, "\n")] = 0; // Remove newline character if present

    char *lastSpace = strrchr(fullName, ' ');
    if (lastSpace != NULL) {
        printf("Last name: %s\n", lastSpace + 1);
    } else {
        printf("No spaces found in the name.\n");
    }

    return 0;

}