#include <stdio.h>

int main() {
    int arr[] = {64, 25, 12, 22, 11};
    int temp, min_index;
    for (int i = 0; i < 4; i++) {
        min_index = i;
        for (int j = i + 1; j < 5; j++) {
            if (arr[j] < arr[min_index]) {
                min_index = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index] = temp;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
