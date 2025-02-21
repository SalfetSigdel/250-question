#include <stdio.h>

int main() {
    int numbers[] = {10, 20, 30, 40, 50};
    FILE *file = fopen("numbers.bin", "wb");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fwrite(numbers, sizeof(numbers), 1, file);
    fclose(file);

    printf("Binary data written to file successfully!\n");
    return 0;
}
