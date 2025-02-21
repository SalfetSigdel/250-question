#include <stdio.h>

int sum_of_digits(int *n) {
    int sum = 0;
    while (*n != 0) {
        sum += *n % 10;
        *n /= 10;
    }
    return sum;
}

int main() {
    int num = 12345;
    int sum = sum_of_digits(&num);
    printf("Sum of digits: %d\n", sum);
    return 0;
}
