#include <stdio.h>
#include <string.h>

struct book
{
    char title[50];
    char author[50];
    float price;
};

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct book s[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter title of book %d : ", i + 1);
        scanf("%s", s[i].title);
        printf("Enter name of author %d : ", i + 1);
        scanf("%s", s[i].author);
        printf("Enter price of book %d : ", i + 1);
        scanf("%f", &s[i].price);
    }
    int newPrice = 0;
    printf("Enter miniumum price for books: ");
    scanf("%d", &newPrice);

    for (int i = 0; i < n; i++)
    {
        if (s[i].price > newPrice)
        {
            printf("Name of Book : %s\n", s[i].title);
            printf("Author : %s\n", s[i].author);
            printf("price : %2f\n", s[i].price);
            printf("\n");
        }
    }
    for (int i = 0; i < n; i++)
    {
    }
}