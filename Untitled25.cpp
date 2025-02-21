#include <stdio.h>

struct Book {
    char title[50];
    char author[50];
    float price;
};

int main() {
    struct Book b;
    printf("Enter book title: ");
    scanf("%s", b.title);
    printf("Enter author: ");
    scanf("%s", b.author);
    printf("Enter price: ");
    scanf("%f", &b.price);
    
    printf("Book Details:\nTitle: %s\nAuthor: %s\nPrice: %.2f\n", b.title, b.author, b.price);
    return 0;
}
