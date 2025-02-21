#include <stdio.h>

void add_matrices(int *arr1, int *arr2, int *result, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            *(result + i * cols + j) = *(arr1 + i * cols + j) + *(arr2 + i * cols + j);
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
    int arr1[2][2] = {{1, 2}, {3, 4}};
    int arr2[2][2] = {{5, 6}, {7, 8}};
    int result[2][2];
    
    add_matrices((int *)arr1, (int *)arr2, (int *)result, 2, 2);
    
    printf("Resultant Matrix:\n");
    print_matrix((int *)result, 2, 2);
    
    return 0;
}
