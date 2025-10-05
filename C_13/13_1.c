# include <stdio.h>
# include <string.h>

int checkspace(char ch) {
    int plus = 0;
    if(ch == ' ' || ch == '\t' || ch == '\n') {
        plus++;
    }
    return plus;
}

int main() {
    char a[20]; 
    printf("Enter a string: ");
    fgets(a, sizeof(a), stdin);
    a[strcspn(a, "\n")] = 0; 
    int count = 0;
    for(int i = 0; a[i] != '\0'; i++) {
        count += checkspace(a[i]);
    }
    printf("Number of spaces, tabs, and newlines: %d\n", count);
    return 0;
}