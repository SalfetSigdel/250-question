#include <stdio.h>
#include <stdlib.h>

struct Student {
    int roll_no;
    float marks;
};

int main() {
    struct Student *ptr = (struct Student *)malloc(sizeof(struct Student));
    if (ptr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    ptr->roll_no = 1;
    ptr->marks = 92.5;
    printf("Roll Number: %d, Marks: %.2f\n", ptr->roll_no, ptr->marks);
    
    free(ptr);
    return 0;
}
