#include <stdio.h>
#include <string.h>

struct Student
{
    int id;
    char name[50];
    float marks;
};

int main()
{
    struct Student s1, s2;

    printf("Enter details of first student:\n");
    printf("ID: ");
    scanf("%d", &s1.id);
    printf("Name: ");
    scanf("%s", s1.name);
    printf("Marks: ");
    scanf("%f", &s1.marks);

    printf("\nEnter details of second student:\n");
    printf("ID: ");
    scanf("%d", &s2.id);
    printf("Name: ");
    scanf("%s", s2.name);
    printf("Marks: ");
    scanf("%f", &s2.marks);

    if (s1.id == s2.id && strcmp(s1.name, s2.name) == 0 && s1.marks == s2.marks)
    {
        printf("\nThe two students are the SAME.\n");
    }
    else
    {
        printf("\nThe two students are DIFFERENT.\n");
    }

    return 0;
}
