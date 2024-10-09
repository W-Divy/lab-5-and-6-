#include <stdio.h>

int main() {
    int array1[10], array2[10];

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

    // Swap the arrays
    for (int i = 0; i < 10; i++) {
        int temp = array1[i];
        array1[i] = array2[i];
        array2[i] = temp;
    }

    // Display the swapped arrays
    printf("After swapping:\n");
    printf("First array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array1[i]);
    }
    printf("\n");

    printf("Second array:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", array2[i]);
    }
    printf("\n");

    return 0;
}
