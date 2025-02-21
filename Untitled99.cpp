#include <stdio.h>

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n * factorial(n - 1);
}

int main() {
    int num = 5;
    int (*func_ptr)(int) = factorial;
    printf("Factorial of %d is %d\n", num, func_ptr(num));
    return 0;
}
