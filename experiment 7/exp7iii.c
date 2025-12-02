#include <stdio.h>
#include <string.h> 

struct book {
    int id;
    char title[100];
    char author[100];
    float price;
};

void print(struct book b) {
    printf("\n--- Book Details ---\n");
    printf("Book ID: %d\n", b.id);
    printf("Title: %s\n", b.title);
    printf("Author: %s\n", b.author);
    printf("Price: %f\n", b.price);
}

int main() {
    struct book b;

    b.id = 001;
    strcpy(b.title, "Harry Potter");
    strcpy(b.author, "J.K. Rowling");
    b.price = 430;

    print(b);

    return 0;
}