#include <stdio.h>
#include <string.h>

int is_palindrome(char str[]) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}

int main() {
    char str[100], largest_palindrome[100];
    printf("Enter a string: ");
    gets(str);

    int max_length = 0;
    char temp[100];

    for (int i = 0; i < strlen(str); i++) {
        for (int j = i; j < strlen(str); j++) {
            strncpy(temp, &str[i], j - i + 1);
            temp[j - i + 1] = '\0';
            if (is_palindrome(temp) && strlen(temp) > max_length) {
                strcpy(largest_palindrome, temp);
                max_length = strlen(temp);
            }
        }
    }

    printf("Largest palindrome: %s\n", largest_palindrome);
    return 0;
}
