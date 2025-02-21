#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int numbers[] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++) {
        fprintf(file, "%d\n", numbers[i]);
    }

    fclose(file);
    printf("Numbers written to file successfully!\n");
    return 0;
}
