#include <stdio.h>
#include <stdbool.h>

bool is_prime(int *n) {
    if (*n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= *n; i++) {
        if (*n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int num = 29;
    if (is_prime(&num)) {
        printf("%d is a prime number\n", num);
    } else {
        printf("%d is not a prime number\n", num);
    }
    return 0;
}
