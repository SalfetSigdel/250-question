#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Student {
    int roll_no;
    struct Date dob;
};

int main() {
    struct Student s = {1, {12, 5, 1998}};
    printf("Roll Number: %d, DOB: %d/%d/%d\n", s.roll_no, s.dob.day, s.dob.month, s.dob.year);
    return 0;
}
