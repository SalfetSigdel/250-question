#include <stdio.h>

int string_length(char *str) {
    int length = 0;
    while (*str) {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str[] = "Hello, world!";
    printf("Length of the string: %d\n", string_length(str));
    return 0;
}
