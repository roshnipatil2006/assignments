#include <stdio.h>

struct library {
    char title[100];
    char author[100];
    char subject[100];
    int book_id;
};

int main() {
    struct library bookList[5]; // Array of structures to store details of five books
    
    printf("Enter details of five books:\n");
    for (int i = 0; i < 5; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: ");
        scanf("%s", bookList[i].title);
        printf("Author: ");
        scanf("%s", bookList[i].author);
        printf("Subject: ");
        scanf("%s", bookList[i].subject);
        printf("Book ID: ");
        scanf("%d", &bookList[i].book_id);
    }

    printf("\nDetails of the entered books:\n");
    for (int i = 0; i < 5; i++) {
        printf("Book %d:\n", i + 1);
        printf("Title: %s\n", bookList[i].title);
        printf("Author: %s\n", bookList[i].author);
        printf("Subject: %s\n", bookList[i].subject);
        printf("Book ID: %d\n\n", bookList[i].book_id);
    }

    return 0;
}
