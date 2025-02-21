#include <stdio.h>

void find_max_min(int *arr, int size, int *max, int *min) {
    *max = *arr;
    *min = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > *max) {
            *max = *(arr + i);
        }
        if (*(arr + i) < *min) {
            *min = *(arr + i);
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int max, min;
    find_max_min(arr, size, &max, &min);
    printf("Max: %d, Min: %d\n", max, min);
    return 0;
}
