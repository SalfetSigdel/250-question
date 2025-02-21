#include <stdio.h>

int sum_diagonal_elements(int *arr, int rows, int cols) {
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        sum += *(arr + i * cols + i);
    }
    return sum;
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int sum = sum_diagonal_elements((int *)arr, 3, 3);
    printf("Sum of diagonal elements: %d\n", sum);
    return 0;
}
