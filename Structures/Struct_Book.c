#include<stdio.h>

struct Book
{
    char title[20];
    char author[20];
    int price;
};

int main(void)
{

    struct Book b1, b2, b3;
        
    printf("Enter Book 1 Title: ");
    scanf("%s", &b1.title);
    printf("Enter Book 1 Author: ");
    scanf("%s", &b1.author);
    printf("Enter Book 1 Price: ");
    scanf("%d", &b1.price);
    
    printf("\nEnter Book 2 Title: ");
    scanf("%s", &b2.title);
    printf("Enter Book 2 Author: ");
    scanf("%s", &b2.author);
    printf("Enter Book 2 Price: ");
    scanf("%d", &b2.price);
    
    printf("\nEnter Book 3 Title: ");
    scanf("%s", &b3.title);
    printf("Enter Book 3 Author: ");
    scanf("%s", &b3.author);
    printf("Enter Book 3 Price: ");
    scanf("%d", &b3.price);

    printf("\n--- Book Details ---\n");
    printf("Book 1: Title: %s, Author: %s, Price: %d\n", b1.title, b1.author, b1.price);
    printf("Book 2: Title: %s, Author: %s, Price: %d\n", b2.title, b2.author, b2.price);
    printf("Book 3: Title: %s, Author: %s, Price: %d\n", b3.title, b3.author, b3.price);

    return 0;
}