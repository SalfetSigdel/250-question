#include <stdio.h>

struct Student {
    char name[50];
    int age;
};

int main() {
    FILE *file = fopen("students.bin", "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    struct Student student;
    while (fread(&student, sizeof(struct Student), 1, file)) {
        printf("Name: %s, Age: %d\n", student.name, student.age);
    }

    fclose(file);
    return 0;
}
