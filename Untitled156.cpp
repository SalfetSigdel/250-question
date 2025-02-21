#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    int year;
};

int main() {
    struct Book book1 = {"The C Programming Language", "Dennis Ritchie", 1978};
    FILE *file;

    file = fopen("book.dat", "wb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }
    
    fwrite(&book1, sizeof(book1), 1, file);
    fclose(file);

    file = fopen("book.dat", "rb");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    struct Book book2;
    fread(&book2, sizeof(book2), 1, file);
    printf("Title: %s\n", book2.title);
    printf("Author: %s\n", book2.author);
    printf("Year: %d\n", book2.year);
    
    fclose(file);
    return 0;
}
