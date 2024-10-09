#include <stdio.h>

int main() {
    // Loop through to print each line
    for (char c = 'a'; c <= 'd'; c++) {
        for (char j = 'a'; j <= c; j++) {
            printf("%c", j);
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}
