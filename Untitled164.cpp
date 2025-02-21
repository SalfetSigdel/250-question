#include <stdio.h>
#include <string.h>

void search_word(FILE *file, const char *word) {
    char line[256];
    int line_number = 0;
    
    while (fgets(line, sizeof(line), file)) {
        line_number++;
        if (strstr(line, word)) {
            printf("Found \"%s\" at line %d: %s", word, line_number, line);
        }
    }
}

int main() {
    FILE *file = fopen("strings.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    search_word(file, "C");
    fclose(file);
    return 0;
}
