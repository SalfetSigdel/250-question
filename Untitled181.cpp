#include <stdio.h>

int main() {
    FILE *source, *destination;
    char ch;

    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }

    destination = fopen("destination.txt", "w");
    if (destination == NULL) {
        printf("Error opening destination file!\n");
        fclose(source);
        return 1;
    }

    while ((ch = fgetc(source)) != EOF) {
        if (ch != '\n' || (ch == '\n' && fgetc(source) != EOF)) {
            fputc(ch, destination);
        }
    }

    fclose(source);
    fclose(destination);

    printf("Blank lines removed!\n");
    return 0;
}
