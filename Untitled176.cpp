#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[20];
    char email[50];
};

void add_contact(FILE *file) {
    struct Contact c;
    printf("Enter name: ");
    scanf("%s", c.name);
    printf("Enter phone: ");
    scanf("%s", c.phone);
    printf("Enter email: ");
    scanf("%s", c.email);
    fwrite(&c, sizeof(c), 1, file);
}

void view_contacts(FILE *file) {
    struct Contact c;
    fseek(file, 0, SEEK_SET);
    while (fread(&c, sizeof(c), 1, file)) {
        printf("Name: %s, Phone: %s, Email: %s\n", c.name, c.phone, c.email);
    }
}

int main() {
    FILE *file = fopen("contacts.dat", "a+b");
    if (file == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    int choice;
    while (1) {
        printf("1. Add Contact\n2. View Contacts\n3. Exit\nEnter choice: ");
        scanf("%d", &choice);
        if (choice == 1) {
            add_contact(file);
        } else if (choice == 2) {
            view_contacts(file);
        } else {
            break;
        }
    }

    fclose(file);
    return 0;
}
