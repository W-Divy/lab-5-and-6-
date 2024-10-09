#include <stdio.h>

int main() {
    int n;

    printf("Enter the number of integers: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Please enter at least 2 integers.\n");
        return 1;
    }

    int arr[n];
    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max, secondMax;
    if (arr[0] > arr[1]) {
        max = arr[0]; secondMax = arr[1];
    } else {
        max = arr[1]; secondMax = arr[0];
    }

    for (int i = 2; i < n; i++) {
        if (arr[i] > max) {
            secondMax = max;
            max = arr[i];
        } else if (arr[i] > secondMax && arr[i] < max) {
            secondMax = arr[i];
        }
    }

    if (max == secondMax) {
        printf("There is no second maximum element.\n");
    } else {
        printf("Maximum: %d\nSecond maximum: %d\n", max, secondMax);
    }

    return 0;
}
