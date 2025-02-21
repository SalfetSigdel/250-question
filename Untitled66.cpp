#include <stdio.h>

int fact(int n) {
    if (n == 0 || n == 1) return 1;
    return n * fact(n - 1);
}

int main() {
    int rows;
    printf("Enter number of rows: ");
    scanf("%d", &rows);

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j <= i; j++) {
            printf("%d ", fact(i) / (fact(j) * fact(i - j)));
        }
        printf("\n");
    }

    return 0;
}
