#include <stdio.h>
#include <ctype.h>

int count_words(char *str) {
    int count = 0, in_word = 0;
    while (*str) {
        if (isspace(*str)) {
            in_word = 0;
        } else if (!in_word) {
            in_word = 1;
            count++;
        }
        str++;
    }
    return count;
}

int main() {
    char str[] = "Hello, I am learning C!";
    int count = count_words(str);
    printf("Number of words: %d\n", count);
    return 0;
}
