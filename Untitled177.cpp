#include <stdio.h>
#include <string.h>

void replace_word(FILE *file, const char *old_word, const char *new_word) {
    char line[256];
    while (fgets(line, sizeof(line), file)) {
        if (strstr(line, old_word)) {
            char *pos = strstr(line, old_word);
            if (pos) {
                *pos = '\0';  // null-terminate at old word
                printf("%s%s\n", line, new_word);
            }
        }
    }
}

int main() {
    FILE *file = fopen("file.txt", "r+");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    replace_word(file, "old_word", "new_word");

    fclose(file);
    return 0;
}
