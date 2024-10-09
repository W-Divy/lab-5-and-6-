#include <stdio.h>

int main() {
    // Loop through to print each line
    for (int i = 0; i < 5; i++) {
        // Print leading zeros
        for (int j = 0; j < i; j++) {
            printf("0");
        }
        // Print the '1'
        printf("1");
        // Print trailing zeros
        for (int j = 0; j < 4 - i; j++) {
            printf("0");
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
