#include <stdio.h>

int main() {
    FILE *file1, *file2, *outputFile;
    char ch;

    file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("Error opening file1!\n");
        return 1;
    }

    file2 = fopen("file2.txt", "r");
    if (file2 == NULL) {
        printf("Error opening file2!\n");
        fclose(file1);
        return 1;
    }

    outputFile = fopen("merged.txt", "w");
    if (outputFile == NULL) {
        printf("Error opening output file!\n");
        fclose(file1);
        fclose(file2);
        return 1;
    }

    while ((ch = fgetc(file1)) != EOF) {
        fputc(ch, outputFile);
    }

    while ((ch = fgetc(file2)) != EOF) {
        fputc(ch, outputFile);
    }

    fclose(file1);
    fclose(file2);
    fclose(outputFile);

    printf("Files merged successfully!\n");
    return 0;
}
