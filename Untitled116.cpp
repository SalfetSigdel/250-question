#include <stdio.h>

int remove_duplicates(int *arr, int size) {
    int new_size = size;
    for (int i = 0; i < new_size; i++) {
        for (int j = i + 1; j < new_size; j++) {
            if (*(arr + i) == *(arr + j)) {
                for (int k = j; k < new_size - 1; k++) {
                    *(arr + k) = *(arr + k + 1);
                }
                new_size--;
                j--;
            }
        }
    }
    return new_size;
}

int main() {
    int arr[] = {1, 2, 3, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    size = remove_duplicates(arr, size);
    
    printf("Array after removing duplicates: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
