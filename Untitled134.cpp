#include <stdio.h>

void reverse_string(char *str) {
    char *start = str;
    char *end = str;
    while (*end) {
        end++;
    }
    end--;  // Move to the last character
    while (start < end) {
        char temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main() {
    char str[] = "Hello, world!";
    reverse_string(str);
    printf("Reversed string: %s\n", str);
    return 0;
}
