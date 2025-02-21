#include <stdio.h>

struct Student {
    int rollNo;
    char name[50];
    int marks;
};

int main() {
    FILE *file = fopen("students.bin", "r+b");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int rollNoToUpdate = 102;
    struct Student student;
    while (fread(&student, sizeof(struct Student), 1, file)) {
        if (student.rollNo == rollNoToUpdate) {
            printf("Enter new marks for %s: ", student.name);
            scanf("%d", &student.marks);
            fseek(file, -sizeof(struct Student), SEEK_CUR);
            fwrite(&student, sizeof(struct Student), 1, file);
            break;
        }
    }

    fclose(file);
    printf("Record updated successfully!\n");
    return 0;
}
