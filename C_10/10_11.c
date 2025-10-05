#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int count[13] = {0}; 
    int dice1, dice2, sum;

    srand(time(NULL)); 

    // Tung 100 lần
    for (int i = 0; i < 100; i++) {
        dice1 = rand() % 6 + 1;
        dice2 = rand() % 6 + 1;
        sum = dice1 + dice2;
        count[sum]++;
    }

    // In kết quả
    printf("Thong ke so lan tung xuat hien trong 100 lan:\n");
    for (int i = 2; i <= 12; i++) {
        printf("Tong %2d: %d lan\n", i, count[i]);
    }

    return 0;
}
