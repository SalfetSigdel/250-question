#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int count = 0;

    printf("Enter a string: ");
    gets(str);
    printf("Enter a character to count: ");
    scanf("%c", &ch);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == ch) {
            count++;
        }
    }

    printf("The character '%c' appears %d times in the string.\n", ch, count);
    return 0;
}
