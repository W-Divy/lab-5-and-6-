#include <stdio.h>

int main() {
    int arr[10];
    int countPositive = 0, countNegative = 0, countZero = 0;

    // Read 10 integers into the array
    printf("Enter 10 integers:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);

        // Count positive, negative, and zero elements
        if (arr[i] > 0) {
            countPositive++;
        } else if (arr[i] < 0) {
            countNegative++;
        } else {
            countZero++;
        }
    }

    // Output results
    printf("Total number of positive integers: %d\n", countPositive);
    printf("Total number of negative integers: %d\n", countNegative);
    printf("Total number of zero elements: %d\n", countZero);

    return 0;
}
