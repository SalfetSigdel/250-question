#include <stdio.h>

int main() {
    int numbers[5];
    FILE *file = fopen("numbers.bin", "rb");

    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fread(numbers, sizeof(numbers), 1, file);
    fclose(file);

    printf("Binary data read from file:\n");
    for (int i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
