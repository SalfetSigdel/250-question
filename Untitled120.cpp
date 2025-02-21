#include <stdio.h>

void multiply_matrices(int *A, int *B, int *result, int row1, int col1, int row2, int col2) {
    for (int i = 0; i < row1; i++) {
        for (int j = 0; j < col2; j++) {
            *(result + i * col2 + j) = 0;
            for (int k = 0; k < col1; k++) {
                *(result + i * col2 + j) += *(A + i * col1 + k) * *(B + k * col2 + j);
            }
        }
    }
}

void print_matrix(int *matrix, int row, int col) {
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", *(matrix + i * col + j));
        }
        printf("\n");
    }
}

int main() {
    int A[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int B[3][2] = {{7, 8}, {9, 10}, {11, 12}};
    int result[2][2];
    
    multiply_matrices(&A[0][0], &B[0][0], &result[0][0], 2, 3, 3, 2);

    printf("Resultant Matrix:\n");
    print_matrix(&result[0][0], 2, 2);
    
    return 0;
}
