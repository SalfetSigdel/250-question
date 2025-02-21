#include <stdio.h>

void print_message() {
    printf("Hello from the function!\n");
}

int main() {
    void (*func_ptr)() = print_message;
    func_ptr();  // Calling function using pointer
    return 0;
}
