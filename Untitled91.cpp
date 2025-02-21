#include <stdio.h>

int main() {
    char *arr[] = {"Hello", "World", "Pointer", "Example"};
    
    for (int i = 0; i < 4; i++) {
        printf("String %d: %s\n", i + 1, arr[i]);
    }

    return 0;
}
