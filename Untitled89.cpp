#include <stdio.h>

void modify(int *ptr) {
    *ptr = 100;  // Modify value of x through pointer
}

int main() {
    int x = 10;
    printf("Before modification: %d\n", x);
    modify(&x);
    printf("After modification: %d\n", x);
    return 0;
}
