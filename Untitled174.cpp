#include <stdio.h>

int compare_files(FILE *file1, FILE *file2) {
    char ch1, ch2;
    while (1) {
        ch1 = fgetc(file1);
        ch2 = fgetc(file2);

        if (ch1 != ch2) {
            return 0;
        }

        if (ch1 == EOF && ch2 == EOF) {
            return 1;
        }
    }
}

int main() {
    FILE *file1 = fopen("file1.txt", "r");
    if (file1 == NULL) {
        printf("Error opening file1!\n");
        return 1;
    }

    FILE *file2 = fopen("file2.txt", "r");
    if (file2 == NULL) {
        printf("Error opening file2!\n");
        fclose(file1);
        return 1;
    }

    if (compare_files(file1, file2)) {
        printf("Files are identical.\n");
    } else {
        printf("Files are different.\n");
    }

    fclose(file1);
    fclose(file2);
    return 0;
}
