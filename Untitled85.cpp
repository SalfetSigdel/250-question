#include <stdio.h>

int main() {
    int x = 10;
    int *ptr1 = &x;
    int **ptr2 = &ptr1;

    printf("Value of x: %d\n", x);
    printf("Using pointer ptr1: %d\n", *ptr1);
    printf("Using pointer to pointer ptr2: %d\n", **ptr2);

    return 0;
}
