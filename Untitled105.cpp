#include <stdio.h>

int find_max(int *arr, int size) {
    int max = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > max) {
            max = *(arr + i);
        }
    }
    return max;
}

int main() {
    int arr[] = {5, 3, 8, 2, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max = find_max(arr, size);
    printf("Maximum element in the array: %d\n", max);
    return 0;
}
