#include <stdio.h>

int count_lines(FILE *file) {
    char ch;
    int lines = 0;
    while ((ch = fgetc(file)) != EOF) {
        if (ch == '\n') {
            lines++;
        }
    }
    return lines;
}

int main() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int lines = count_lines(file);
    printf("Number of lines in the file: %d\n", lines);

    fclose(file);
    return 0;
}
