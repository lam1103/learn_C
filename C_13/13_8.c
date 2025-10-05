

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char text[256];
    char targetChar;
    int count = 0;


    printf("Enter a string: ");
    fgets(text, sizeof(text), stdin);
    text[strcspn(text, "\n")] = 0; 


    printf("Enter a character to count: ");
    scanf(" %c", &targetChar);


    for (int i = 0; text[i] != '\0'; i++) {
        if (text[i] == targetChar && (isalnum(text[i]))) {
            count++;
        }
    }

    printf("The character '%c' appears %d times in the string.\n", targetChar, count);
    return 0;
}