#include <stdio.h>

int count_set_bits(int num) {
    int count = 0;
    while (num) {
        count += num & 1;
        num >>= 1;
    }
    return count;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Number of set bits: %d\n", count_set_bits(num));
    return 0;
}
