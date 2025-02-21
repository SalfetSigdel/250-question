#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n, sum = 0;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        sum += fibonacci(i);
    }

    printf("Sum of first %d Fibonacci numbers is %d\n", n, sum);
    return 0;
}
