#include <stdio.h>

long get_file_size(FILE *file) {
    fseek(file, 0, SEEK_END);
    long size = ftell(file);
    fseek(file, 0, SEEK_SET);
    return size;
}

int main() {
    FILE *file = fopen("output.txt", "r");
    
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    long size = get_file_size(file);
    printf("File size: %ld bytes\n", size);
    
    fclose(file);
    return 0;
}
