#include <stdio.h>

int main() {
    FILE *file = fopen("output.txt", "r");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    char ch;
    printf("Reading from file:\n");
    while ((ch = fgetc(file)) != EOF) {
        putchar(ch);
    }
    
    fclose(file);
    return 0;
}
