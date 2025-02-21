#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int word_count = 1;  // Start from 1 to count the first word

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ') {
            word_count++;
        }
    }

    printf("Number of words: %d\n", word_count);
    return 0;
}
