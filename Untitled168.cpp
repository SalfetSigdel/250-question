#include <stdio.h>

int main() {
    FILE *file = fopen("check_file.txt", "r");
    
    if (file != NULL) {
        printf("File exists.\n");
        fclose(file);
    } else {
        printf("File does not exist. Creating the file...\n");
        file = fopen("check_file.txt", "w");
        if (file == NULL) {
            printf("Error creating file!\n");
            return 1;
        }
        fprintf(file, "This file was created because it did not exist.\n");
        fclose(file);
        printf("File created successfully.\n");
    }
    return 0;
}
