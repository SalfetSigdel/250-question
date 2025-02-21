#include <stdio.h>

int find_nth_from_end(int *arr, int size, int n) {
    int *ptr = arr + size - n;
    return *ptr;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    int n = 2;
    
    int result = find_nth_from_end(arr, size, n);
    printf("Element at %d-th position from the end: %d\n", n, result);
    return 0;
}
