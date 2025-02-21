#include <stdio.h>

int is_palindrome(int *num) {
    int original = *num, reversed = 0;
    while (*num != 0) {
        reversed = reversed * 10 + *num % 10;
        *num /= 10;
    }
    return original == reversed;
}

int main() {
    int num = 121;
    if (is_palindrome(&num)) {
        printf("%d is a palindrome number.\n", num);
    } else {
        printf("%d is not a palindrome number.\n", num);
    }
    return 0;
}
