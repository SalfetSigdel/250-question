#include <stdio.h>
#include <ctype.h>

int count_words(FILE *file) {
    char ch;
    int in_word = 0;
    int word_count = 0;

    while ((ch = fgetc(file)) != EOF) {
        if (isspace(ch)) {
            if (in_word) {
                in_word = 0;
                word_count++;
            }
        } else {
            in_word = 1;
        }
    }

    if (in_word) {
        word_count++; // Count the last word
    }

    return word_count;
}

int main() {
    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int words = count_words(file);
    printf("Number of words in the file: %d\n", words);

    fclose(file);
    return 0;
}
