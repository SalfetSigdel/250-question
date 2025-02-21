#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "a");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fprintf(file, "\nAppending this line to the file.");
    fclose(file);
    printf("Data appended to the file successfully!\n");
    return 0;
}
