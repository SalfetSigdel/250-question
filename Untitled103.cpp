#include <stdio.h>

void calculate_sum_avg(int *arr, int size, int *sum, float *avg) {
    *sum = 0;
    for (int i = 0; i < size; i++) {
        *sum += *(arr + i);
    }
    *avg = (float)(*sum) / size;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int sum;
    float avg;
    int size = sizeof(arr) / sizeof(arr[0]);
    
    calculate_sum_avg(arr, size, &sum, &avg);
    
    printf("Sum: %d, Average: %.2f\n", sum, avg);
    return 0;
}
