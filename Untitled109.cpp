#include <stdio.h>

void fibonacci(int *num1, int *num2, int terms) {
    int next_term;
    for (int i = 0; i < terms; i++) {
        printf("%d ", *num1);
        next_term = *num1 + *num2;
        *num1 = *num2;
        *num2 = next_term;
    }
    printf("\n");
}

int main() {
    int num1 = 0, num2 = 1, terms = 10;
    fibonacci(&num1, &num2, terms);
    return 0;
}
