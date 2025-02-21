#include <stdio.h>

int count_vowels(char *str) {
    int count = 0;
    while (*str) {
        if (*str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u' ||
            *str == 'A' || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U') {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[] = "Hello, World!";
    int vowels = count_vowels(str);
    printf("Number of vowels: %d\n", vowels);
    return 0;
}
