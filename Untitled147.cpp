#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "w");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fprintf(file, "Hello, this is a text file.\n");
    fprintf(file, "Writing some text to the file.\n");

    fclose(file);
    printf("Data written to file successfully!\n");
    return 0;
}
