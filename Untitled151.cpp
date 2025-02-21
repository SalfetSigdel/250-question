#include <stdio.h>

int main() {
    FILE *source, *destination;
    char ch;
    
    source = fopen("output.txt", "r");
    if (source == NULL) {
        printf("Error opening source file!\n");
        return 1;
    }
    
    destination = fopen("copy.txt", "w");
    if (destination == NULL) {
        printf("Error opening destination file!\n");
        fclose(source);
        return 1;
    }
    
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, destination);
    }
    
    printf("File copied successfully!\n");
    
    fclose(source);
    fclose(destination);
    return 0;
}
