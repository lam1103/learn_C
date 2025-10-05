# include <stdio.h>

int countEnven(int *arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            count++;
        }
    }
    return count;
}

void input(){
    int n; 
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int count = countEnven(arr, n);
    printf("Number of even numbers: %d\n", count);
}
int main() {
    input();
    return 0;
}