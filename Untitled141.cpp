#include <stdio.h>

void add(int *a, int *b, int *result) {
    *result = *a + *b;
}

int main() {
    int x = 5, y = 10, result;
    add(&x, &y, &result);
    printf("Sum: %d\n", result);
    return 0;
}
