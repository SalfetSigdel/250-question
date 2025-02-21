#include <stdio.h>

int main() {
    int num, freq[10] = {0};
    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        freq[num % 10]++;
        num /= 10;
    }

    printf("Digit frequencies:\n");
    for (int i = 0; i < 10; i++) {
        if (freq[i] > 0) {
            printf("%d occurs %d times\n", i, freq[i]);
        }
    }
    return 0;
}
