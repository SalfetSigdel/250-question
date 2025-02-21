#include <stdio.h>

struct Student {
    int roll_no;
    float marks;
};

int main() {
    struct Student s1 = {1, 89.5};
    printf("Roll Number: %d, Marks: %.2f\n", s1.roll_no, s1.marks);
    return 0;
}
