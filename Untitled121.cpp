#include <stdio.h>

void find_intersection(int *arr1, int *arr2, int *result, int size1, int size2, int *res_size) {
    *res_size = 0;
    for (int i = 0; i < size1; i++) {
        for (int j = 0; j < size2; j++) {
            if (*(arr1 + i) == *(arr2 + j)) {
                *(result + (*res_size)++) = *(arr1 + i);
                break;
            }
        }
    }
}

void print_array(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}

int main() {
    int arr1[] = {1, 2, 3, 4, 5};
    int arr2[] = {3, 4, 5, 6, 7};
    int result[5];
    int res_size;

    find_intersection(arr1, arr2, result, 5, 5, &res_size);
    
    printf("Intersection of arrays: ");
    print_array(result, res_size);
    
    return 0;
}
