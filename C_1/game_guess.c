#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;
    srand(time(0));
    number = rand() % 100 + 1; // số ngẫu nhiên từ 1-100

    printf("I chose a number between 1 and 100.\nLet's guess!\n");

    do {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("Your guess is too high!\n");
        } else if (guess < number) {
            printf("Your guess is too low!\n");
        } else {
            printf("Congratulations! You guessed it right after %d attempts.\n", attempts);
        }
    } while (guess != number);
    system("pause");
    return 0;
}
