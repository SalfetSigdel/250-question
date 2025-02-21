#include <stdio.h>

int linear_search(int *arr, int size, int key) {
    for (int i = 0; i < size; i++) {
        if (*(arr + i) == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {12, 34, 23, 45, 56};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 45;
    
    int result = linear_search(arr, size, key);
    if (result != -1) {
        printf("Element %d found at index %d\n", key, result);
    } else {
        printf("Element %d not found\n", key);
    }
    return 0;
}
