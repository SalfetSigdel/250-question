#include <stdio.h>
#include <stdlib.h>

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    FILE *file = fopen("numbers.txt", "r+");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int numbers[100], count = 0;
    while (fscanf(file, "%d", &numbers[count]) != EOF) {
        count++;
    }

    qsort(numbers, count, sizeof(int), compare);

    fclose(file);
    file = fopen("numbers.txt", "w");

    for (int i = 0; i < count; i++) {
        fprintf(file, "%d\n", numbers[i]);
    }

    fclose(file);
    printf("Numbers sorted in the file!\n");
    return 0;
}
