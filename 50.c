#include <stdio.h>

int main() {
    // Loop through characters 'a' to 'd'
    for (char c = 'a'; c <= 'd'; c++) {
        // Print the character 'c' (i+1) times
        for (int j = 0; j < (c - 'a' + 1); j++) {
            printf("%c", c);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
