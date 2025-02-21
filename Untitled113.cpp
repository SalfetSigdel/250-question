#include <stdio.h>

void merge_arrays(int *arr1, int *arr2, int *result, int size1, int size2) {
    int i = 0, j = 0, k = 0;
    while (i < size1) {
        result[k++] = arr1[i++];
    }
    while (j < size2) {
        result[k++] = arr2[j++];
    }
}

int main() {
    int arr1[] = {1, 2, 3};
    int arr2[] = {4, 5, 6};
    int result[6];
    
    merge_arrays(arr1, arr2, result, 3, 3);

    printf("Merged Array: ");
    for (int i = 0; i < 6; i++) {
        printf("%d ", result[i]);
    }
    printf("\n");

    return 0;
}
