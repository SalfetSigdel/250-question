#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.bin", "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int numbers[] = {1, 2, 3, 4, 5};
    fwrite(numbers, sizeof(numbers), 1, file);

    fclose(file);
    printf("Numbers written to binary file successfully!\n");
    return 0;
}
