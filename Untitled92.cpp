#include <stdio.h>

int main() {
    int arr[2][2] = {{1, 2}, {3, 4}};
    int *ptr = &arr[0][0];

    printf("Element at [0][0]: %d\n", *(ptr));
    printf("Element at [0][1]: %d\n", *(ptr + 1));
    printf("Element at [1][0]: %d\n", *(ptr + 2));
    printf("Element at [1][1]: %d\n", *(ptr + 3));

    return 0;
}
