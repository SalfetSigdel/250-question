#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 1;

    printf("Enter a string: ");
    gets(str);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ' ')
            count++;
    }

    printf("Number of words: %d\n", count);
    return 0;
}
