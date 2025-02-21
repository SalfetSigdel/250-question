#include <stdio.h>

void update_line(const char *filename, int line_number, const char *new_line) {
    FILE *file = fopen(filename, "r+");
    if (file == NULL) {
        printf("Error opening file!\n");
        return;
    }

    char line[256];
    int current_line = 1;
    
    while (fgets(line, sizeof(line), file)) {
        if (current_line == line_number) {
            fseek(file, -strlen(line), SEEK_CUR);
            fprintf(file, "%s", new_line);
            break;
        }
        current_line++;
    }

    fclose(file);
}

int main() {
    update_line("strings.txt", 2, "Updated line of text.\n");
    printf("Line updated successfully!\n");
    return 0;
}
