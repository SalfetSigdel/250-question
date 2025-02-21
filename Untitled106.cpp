#include <stdio.h>

int reverse_integer(int *n) {
    int reversed = 0;
    while (*n != 0) {
        reversed = reversed * 10 + *n % 10;
        *n /= 10;
    }
    return reversed;
}

int main() {
    int num = 12345;
    int reversed = reverse_integer(&num);
    printf("Reversed number: %d\n", reversed);
    return 0;
}
