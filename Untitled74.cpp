#include <stdio.h>
#include <string.h>
#include <ctype.h>

int are_anagrams(char str1[], char str2[]) {
    if (strlen(str1) != strlen(str2)) return 0;

    int count[256] = {0};
    
    for (int i = 0; i < strlen(str1); i++) {
        count[tolower(str1[i])]++;
        count[tolower(str2[i])]--;
    }

    for (int i = 0; i < 256; i++) {
        if (count[i] != 0) return 0;
    }
    
    return 1;
}

int main() {
    char str1[100], str2[100];
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    if (are_anagrams(str1, str2)) {
        printf("The strings are anagrams.\n");
    } else {
        printf("The strings are not anagrams.\n");
    }

    return 0;
}
