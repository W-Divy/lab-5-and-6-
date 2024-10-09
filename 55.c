#include <stdio.h>

int main() {
    int arr[10];
    int countOdd = 0;
    int frequency[101] = {0}; // Adjusted size for 0-100 range

    // Read 10 integers into the array
    printf("Enter 10 integers (0-100):\n");
    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);

        // Check for valid input
        if (arr[i] < 0 || arr[i] > 100) {
            printf("Please enter numbers between 0 and 100.\n");
            i--; // Decrement to re-enter the value
            continue; // Skip to the next iteration
        }

        // Count odd numbers
        if (arr[i] % 2 != 0) {
            countOdd++;
        }

        // Count frequency of each element
        frequency[arr[i]]++;
    }

    // Output results
    printf("Total number of odd integers: %d\n", countOdd);

    printf("Frequency of each element:\n");
    for (int i = 0; i <= 100; i++) {
        if (frequency[i] > 0) {
            printf("%d occurs %d time(s)\n", i, frequency[i]);
        }
    }

    return 0;
}
