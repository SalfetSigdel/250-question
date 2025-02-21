#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
};

int main() {
    struct Student students[2] = {{1, "John"}, {2, "Jane"}};
    for (int i = 0; i < 2; i++) {
        printf("Roll Number: %d, Name: %s\n", students[i].roll_no, students[i].name);
    }
    return 0;
}
