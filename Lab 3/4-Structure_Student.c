#include <stdio.h>

struct student
{
    char name[50];
    int rollNo;
    float marks;
};

int main()
{
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    struct student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter name of student %d : ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter roll number of student %d : ", i + 1);
        scanf("%d", &s[i].rollNo);
        printf("Enter marks of student %d : ", i + 1);
        scanf("%f", &s[i].marks);
    }
    float maxMarks = 0.0;
    int index = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i].marks > maxMarks)
        {
            maxMarks = s[i].marks;
            index = i;
        }
    }
    printf("Name of student : %s\n", s[index].name);
    printf("Roll Number of student : %d\n", s[index].rollNo);
    printf("Marks of student : %.2f\n", s[index].marks);
}