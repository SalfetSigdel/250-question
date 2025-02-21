#include <stdio.h>

int count_digits(int *n) {
    int count = 0;
    while (*n) {
        count++;
        *n /= 10;
    }
    return count;
}

int main() {
    int num = 12345;
    printf("Number of digits: %d\n", count_digits(&num));
    return 0;
}
