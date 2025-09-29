#include <stdio.h>
#include <string.h>

struct student
{
    int id;
    char name[50];
    char depart[50];
    float salary;
};

int main()
{
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);
    struct student s[n];

    for (int i = 0; i < n; i++)
    {
        printf("Enter id of employee %d : ", i + 1);
        scanf("%d", &s[i].id);
        printf("Enter name of employee %d : ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter department of employee %d : ", i + 1);
        scanf("%s", s[i].depart);
        printf("Enter salary of employee %d : ", i + 1);
        scanf("%f", &s[i].salary);
    }
    for (int i = 0; i < n; i++)
    {
        if (strcmp(s[i].depart, "IT") == 0)
        {
            s[i].salary = s[i].salary + (s[i].salary * 0.1);
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("Department : %s\n", s[i].depart);
        printf("New Salary : %.2f\n", s[i].salary);
    }
}