#include <stdio.h>

void string_concatenate(char *str1, char *str2) {
    while (*str1) str1++;
    while (*str2) {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';
}

int main() {
    char str1[50] = "Hello, ";
    char str2[] = "world!";
    string_concatenate(str1, str2);
    printf("Concatenated string: %s\n", str1);
    return 0;
}
