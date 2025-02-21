#include <stdio.h>

int count_char(FILE *file, char target) {
    int count = 0;
    char ch;

    while ((ch = fgetc(file)) != EOF) {
        if (ch == target) {
            count++;
        }
    }

    return count;
}

int main() {
    FILE *file = fopen("strings.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char target = 'o';
    int occurrences = count_char(file, target);
    printf("Character '%c' occurred %d times in the file.\n", target, occurrences);

    fclose(file);
    return 0;
}
