#include <stdio.h>
#include <stdbool.h>

int main() {
    // Arrays for hat sizes and corresponding circumferences
    float hat_sizes[] = {6.5, 6.75, 7.0, 7.25, 7.5, 7.75, 8.0};
    float circumferences[] = {20.5, 21.25, 22.0, 22.75, 23.5, 24.25, 25.0}; // Corresponding circumferences in inches
    int num_sizes = sizeof(hat_sizes) / sizeof(hat_sizes[0]);

    float head_circumference;
    bool found_size = false;

    // Prompt user for head circumference
    printf("Enter your head circumference in inches: ");
    scanf("%f", &head_circumference);

    // Find the corresponding hat size
    for (int i = 0; i < num_sizes; i++) {
        if (head_circumference <= circumferences[i]) {
            printf("Your hat size is: %.2f\n", hat_sizes[i]);
            found_size = true;
            break;
        }
    }

    // If no size was found
    if (!found_size) {
        printf("Your head circumference is too large for the available sizes.\n");
    }

    return 0;
}
