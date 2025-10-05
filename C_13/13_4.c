#include <stdio.h>
#include <string.h>
//dem so tu trong chuoi


int main() {
    char a[100]; 
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = 0;

    int wordCount = 0;
    char *token = strtok(a, " ");
    while (token != NULL) {
        wordCount++;
        token = strtok(NULL, " ");
    }
    printf("Number of words: %d\n", wordCount);
    return 0;
}