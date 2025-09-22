#include<stdio.h>

int sum(int n ) {
    if(n <= 1) return n;
    else return n + sum(n - 1);
}
int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    while(n < 10 || n > 100) {
        printf("Re-enter n: ");
        scanf("%d", &n);
    }
    int result = sum(n);
    printf("The sum of numbers from 1 to %d is: %d\n", n, result);
}