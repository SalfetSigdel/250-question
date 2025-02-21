#include <stdio.h>

void copy_string(char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0';
}

int main() {
    char source[] = "Hello, world!";
    char destination[50];

    copy_string(source, destination);
    printf("Copied string: %s\n", destination);

    return 0;
}
