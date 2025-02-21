#include <stdio.h>

int count_negative(int *arr, int size) {
    int count = 0;
    for (int i = 0; i < size; i++) {
        if (*(arr + i) < 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {-1, -2, 3, 4, -5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = count_negative(arr, size);
    printf("Number of negative numbers: %d\n", count);
    return 0;
}
