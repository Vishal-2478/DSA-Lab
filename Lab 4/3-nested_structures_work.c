#include <stdio.h>

struct Date
{
    int day;
    int month;
    int year;
};

struct Student
{
    int roll;
    char name[50];
    struct Date dob;
};

int main()
{
    struct Student s1;

    printf("Enter student roll number: ");
    scanf("%d", &s1.roll);

    printf("Enter student name: ");
    scanf("%s", s1.name);

    printf("Enter date of birth (dd mm yyyy): ");
    scanf("%d %d %d", &s1.dob.day, &s1.dob.month, &s1.dob.year);

    printf("\n--- Student Information ---\n");
    printf("Roll No: %d\n", s1.roll);
    printf("Name: %s\n", s1.name);
    printf("Date of Birth: %02d-%02d-%04d\n", s1.dob.day, s1.dob.month, s1.dob.year);

    return 0;
}
