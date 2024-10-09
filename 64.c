#include <stdio.h>

int main() {
    int matrix[3][3];
    int rowSum[3] = {0}; // Array to store the sum of each row

    // Input the 3x3 matrix
    printf("Enter the elements of the 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the sum of each row
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            rowSum[i] += matrix[i][j];
        }
    }

    // Print the sum of each row
    printf("Sum of each row:\n");
    for (int i = 0; i < 3; i++) {
        printf("Sum of row %d: %d\n", i + 1, rowSum[i]);
    }

    return 0;
}
