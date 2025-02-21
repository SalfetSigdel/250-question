#include <stdio.h>

int find_second_largest(int *arr, int size) {
    int largest = *arr, second_largest = *arr;
    for (int i = 1; i < size; i++) {
        if (*(arr + i) > largest) {
            second_largest = largest;
            largest = *(arr + i);
        } else if (*(arr + i) > second_largest && *(arr + i) != largest) {
            second_largest = *(arr + i);
        }
    }
    return second_largest;
}

int main() {
    int arr[] = {12, 34, 56, 1, 99};
    int size = sizeof(arr) / sizeof(arr[0]);
    int second_largest = find_second_largest(arr, size);
    printf("Second largest number is %d\n", second_largest);
    return 0;
}
