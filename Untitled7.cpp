#include <stdio.h>
int main() {
    int n;
    printf("Enter the size of the checkerboard: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if ((i + j) % 2 == 0)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
