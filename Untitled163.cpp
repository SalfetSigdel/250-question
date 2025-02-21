#include <stdio.h>

int main() {
    FILE *file = fopen("strings.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char *strings[] = {"Hello, World!", "Welcome to C programming.", "File handling in C."};
    for (int i = 0; i < 3; i++) {
        fprintf(file, "%s\n", strings[i]);
    }

    fclose(file);
    printf("Strings written to file successfully!\n");
    return 0;
}
