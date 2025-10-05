#include <stdio.h>
#include <string.h>

void removeSpaces(char *str) {
    int count = 0;
    for (int i = 0; str[i]; i++) {
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n') {
            str[count++] = str[i];
        }
    }
    str[count] = '\0';
}

int main() {
    char  a[20];
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = 0;
    removeSpaces(a);
    printf("String after removing spaces, tabs, and newlines: \"%s\"\n", a);
    return 0;
}