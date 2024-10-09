#include <stdio.h>

int main() {
    int array1[10], array2[10], sumArray[10];

    // Read first array
    printf("Enter 10 integers for the first array:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array1[i]);
    }

    // Read second array
    printf("Enter 10 integers for the second array:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &array2[i]);
    }

    // Add arrays and store in sumArray
    for (int i = 0; i < 10; i++) {
        sumArray[i] = array1[i] + array2[i];
    }

    // Display the result
    printf("Sum of the two arrays:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", sumArray[i]);
    }
    printf("\n");

    return 0;
}
