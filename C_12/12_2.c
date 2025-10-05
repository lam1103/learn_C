#include <stdio.h>

double* maxium(double *a, int size) {
    double *max = a;
    for (int i = 1; i < size; i++) {
        if (*(a + i) > *max) {
            max = a + i;
        }
    }
    return max;
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    double arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%lf", &arr[i]);
    }
    double *max = maxium(arr, n);
    if(max != NULL){
        printf("Maximum value: %lf\n", *max);
    }else {
        printf("Array is empty.\n");
    }
}
