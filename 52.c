#include <stdio.h>

int main() {
    int rows = 4; // Number of rows for the pyramid

    for (int i = 1; i <= rows; i++) {
        // Print leading spaces
        for (int j = i; j < rows; j++) {
            printf(" ");
        }
        // Print the increasing numbers
        for (int j = 1; j <= i; j++) {
            printf("%d", j);
        }
        // Print the decreasing numbers
        for (int j = i - 1; j >= 1; j--) {
            printf("%d", j);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
