#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
};

void printStudent(struct Student s) {
    printf("Roll Number: %d, Name: %s\n", s.roll_no, s.name);
}

int main() {
    struct Student students[2] = {{1, "Alice"}, {2, "Bob"}};
    for (int i = 0; i < 2; i++) {
        printStudent(students[i]);
    }
    return 0;
}
