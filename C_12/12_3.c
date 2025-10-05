#include <stdio.h>

    void reverseArray1 (int *arr, int size) {
        for (int i = 0; i < size / 2; i++) {
            int temp = arr[i];
            arr[i] = arr[size - 1 - i];
            arr[size - 1 - i] = temp;
        }
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
    }

void reverseArray(int *arr, int size) {
    for (int i = 0 ; i < size; i++ ) {
        printf("%d ", *(arr + size - 1 - i)); 
    }
}
int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int *p = arr; 
    int choice; 
    scanf("%d", &choice);
    switch (choice) {
        case 1: 
            reverseArray(p, 5);
            break;
        case 2: 
            reverseArray1(p, 5);
            break;
        default: 
            printf("Invalid choice\n");
    }
}