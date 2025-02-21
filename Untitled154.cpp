#include <stdio.h>

struct Student {
    int id;
    char name[30];
};

int main() {
    struct Student s1 = {1, "John Doe"};
    FILE *file;

    file = fopen("student.dat", "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fwrite(&s1, sizeof(s1), 1, file);
    fclose(file);
    
    file = fopen("student.dat", "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    struct Student s2;
    fread(&s2, sizeof(s2), 1, file);
    printf("Student ID: %d\n", s2.id);
    printf("Student Name: %s\n", s2.name);
    
    fclose(file);
    return 0;
}
