#include <stdio.h>
#include <string.h>

int is_palindrome(char *str) {
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (*(str + i) != *(str + len - i - 1)) {
            return 0;
        }
    }
    return 1;
}

void largest_palindrome(char *arr[], int size) {
    char *largest = arr[0];
    for (int i = 1; i < size; i++) {
        if (is_palindrome(arr[i]) && strlen(arr[i]) > strlen(largest)) {
            largest = arr[i];
        }
    }
    printf("Largest palindrome: %s\n", largest);
}

int main() {
    char *arr[] = {"madam", "level", "hello", "racecar"};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    largest_palindrome(arr, size);
    return 0;
}
