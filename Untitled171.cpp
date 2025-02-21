#include <stdio.h>

int main() {
    FILE *file = fopen("numbers.txt", "r");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int num, max = -1;
    while (fscanf(file, "%d", &num) != EOF) {
        if (num > max) {
            max = num;
        }
    }

    fclose(file);
    printf("Maximum number in the file is: %d\n", max);
    return 0;
}
