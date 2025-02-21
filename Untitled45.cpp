#include <stdio.h>

int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int main() {
    int low, high;
    printf("Enter range (low high): ");
    scanf("%d %d", &low, &high);

    printf("Prime numbers in range: ");
    for (int i = low; i <= high; i++) {
        if (isPrime(i)) {
            printf("%d ", i);
        }
    }
    return 0;
}
