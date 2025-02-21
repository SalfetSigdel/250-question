#include <stdio.h>

int main() {
    FILE *file = fopen("file.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char line[256];
    int line_number = 1;

    while (fgets(line, sizeof(line), file)) {
        printf("Line %d: %s", line_number++, line);
    }

    fclose(file);
    return 0;
}
