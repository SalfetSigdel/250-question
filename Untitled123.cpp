#include <stdio.h>

void reverse_columns(int arr[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0, k = cols - 1; j < k; j++, k--) {
            int temp = *(arr[i] + j);
            *(arr[i] + j) = *(arr[i] + k);
            *(arr[i] + k) = temp;
        }
    }
}

void print_array(int arr[3][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(arr[i] + j));
        }
        printf("\n");
    }
}

int main() {
    int arr[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int rows = 3, cols = 3;
    
    printf("Original Array:\n");
    print_array(arr, rows, cols);
    
    reverse_columns(arr, rows, cols);
    
    printf("Array after reversing columns:\n");
    print_array(arr, rows, cols);
    
    return 0;
}
