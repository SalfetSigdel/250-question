#include <stdio.h>

struct Student {
    int roll_no;
    char name[50];
};

int main() {
    struct Student s1 = {1, "John"};
    struct Student *ptr = &s1;
    printf("Roll Number: %d, Name: %s\n", ptr->roll_no, ptr->name);
    return 0;
}
