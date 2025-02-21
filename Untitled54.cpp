#include <stdio.h>

int main() {
    int arr[] = {1, 3, 4, 5, 2};
    int largest = arr[0], second_largest = arr[0];

    for (int i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            second_largest = largest;
            largest = arr[i];
        } else if (arr[i] > second_largest && arr[i] != largest) {
            second_largest = arr[i];
        }
    }

    printf("Second largest element: %d\n", second_largest);
    return 0;
}
