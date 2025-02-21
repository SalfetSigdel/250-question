#include <stdio.h>

struct Student {
    char name[50];
    int rollNo;
    float marks;
};

int main() {
    FILE *file = fopen("students.dat", "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    struct Student s1 = {"John Doe", 101, 85.5};
    fwrite(&s1, sizeof(s1), 1, file);

    fclose(file);
    printf("Student data written to file successfully!\n");
    return 0;
}
