#include <stdio.h>

int main() {
    FILE *file = fopen("names.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char name[50];
    for (int i = 0; i < 5; i++) {
        printf("Enter name %d: ", i + 1);
        scanf("%s", name);
        fprintf(file, "%s\n", name);
    }

    fclose(file);
    printf("Names written to file!\n");
    return 0;
}
