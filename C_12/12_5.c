#include <stdio.h>
#include <math.h>
double* approximate(double *arr, int size, double target) {
    if (size <= 0) {
        return NULL; // Handle empty array case
    }
    double *closest = arr;
    for (int i = 1; i < size; i++) {
        if (fabs(*(arr + i) - target) < fabs(*closest - target)) {
            closest = arr + i;
        }
    }
    return closest;
}

int main () {
    double arr[] = {1.0, 2.5, 3.8, 4.2, 5.9};
    int size = sizeof(arr) / sizeof(arr[0]);
    double target; 
    printf("Enter the target value: ");
    scanf("%lf", &target);

    double *result = approximate(arr, size, target);
    if (result) {
        printf("Closest value to %.2f is %.2f\n", target, *result);
    } else {
        printf("Array is empty.\n");
    }

    return 0;
}