#include <stdio.h>

int main() {
    int n, i, j;

    // Set the height of the diamond
    printf("Enter the number of rows for the diamond (half height): ");
    scanf("%d", &n);

    // Print the upper half of the diamond
    for (i = 1; i <= n; i++) {
        // Print leading spaces
        for (j = i; j < n; j++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    // Print the lower half of the diamond
    for (i = n - 1; i >= 1; i--) {
        // Print leading spaces
        for (j = n; j > i; j--) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
