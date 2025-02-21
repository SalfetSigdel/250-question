#include <stdio.h>

void sort_descending(int *arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) < *(arr + j)) {
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int arr[] = {12, 34, 5, 23, 67};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    sort_descending(arr, size);
    
    printf("Sorted Array in Descending Order: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
    return 0;
}
