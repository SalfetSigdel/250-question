#include <stdio.h>

int main() {
    FILE *file = fopen("user_input.txt", "w");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    char buffer[256];
    printf("Enter some text (Ctrl+D to stop):\n");
    while (fgets(buffer, sizeof(buffer), stdin)) {
        fputs(buffer, file);
    }

    fclose(file);
    printf("User input written to file successfully!\n");
    return 0;
}
