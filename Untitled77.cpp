#include <stdio.h>

int largest_prime_factor(int num) {
    int largest = 0;

    for (int i = 2; i * i <= num; i++) {
        while (num % i == 0) {
            largest = i;
            num /= i;
        }
    }

    if (num > 1) {
        largest = num;
    }

    return largest;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Largest prime factor: %d\n", largest_prime_factor(num));
    return 0;
}
