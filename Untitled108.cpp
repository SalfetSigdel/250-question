#include <stdio.h>

int count_occurrence(char *str, char ch) {
    int count = 0;
    while (*str) {
        if (*str == ch) {
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[] = "hello, world!";
    char ch = 'o';
    int result = count_occurrence(str, ch);
    printf("The character '%c' occurs %d times in the string.\n", ch, result);
    return 0;
}
