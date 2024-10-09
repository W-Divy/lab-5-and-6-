#include <stdio.h>

int main() {
    // Loop through to print each line
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*"); // Print '*' for each column in the row
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
