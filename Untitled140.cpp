#include <stdio.h>

int find_largest(int *arr, int rows, int cols) {
    int largest = *arr;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (*(arr + i * cols + j) > largest) {
                largest = *(arr + i * cols + j);
            }
        }
    }
    return largest;
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int largest = find_largest((int *)arr, 3, 3);
    printf("Largest element: %d\n", largest);
    return 0;
}
