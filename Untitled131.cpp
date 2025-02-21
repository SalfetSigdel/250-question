#include <stdio.h>

void transpose_matrix(int *arr, int *result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(result + j * rows + i) = *(arr + i * cols + j);
        }
    }
}

void print_matrix(int *arr, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", *(arr + i * cols + j));
        }
        printf("\n");
    }
}

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int result[3][2];
    
    transpose_matrix((int *)arr, (int *)result, 2, 3);
    
    printf("Transposed Matrix:\n");
    print_matrix((int *)result, 3, 2);
    
    return 0;
}
