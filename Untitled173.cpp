#include <stdio.h>
#include <string.h>

void reverse_file(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    fseek(file, 0, SEEK_END);
    long file_size = ftell(file);

    while (file_size--) {
        fseek(file, file_size, SEEK_SET);
        putchar(fgetc(file));
    }

    fclose(file);
}

int main() {
    reverse_file("file.txt");
    return 0;
}
