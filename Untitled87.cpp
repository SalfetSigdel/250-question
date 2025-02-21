#include <stdio.h>

int main() {
    char *arr[] = {"C", "Python", "Java", "JavaScript"};
    
    for (int i = 0; i < 4; i++) {
        printf("%s\n", arr[i]);
    }

    return 0;
}
