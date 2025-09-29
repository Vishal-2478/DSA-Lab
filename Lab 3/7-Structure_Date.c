#include <stdio.h>
#include <string.h>

struct Date
{
    int year;
    int month;
    int day;
};

int main()
{
    struct Date d1, d2;

    printf("Enter day of 1st date : ");
    scanf("%d", &d1.day);
    printf("Enter month of 1st date : ");
    scanf("%d", &d1.month);
    printf("Enter year of 1st date : ");
    scanf("%d", &d1.year);
    printf("Enter day of 1st date : ");
    scanf("%d", &d2.day);
    printf("Enter month of 1st date : ");
    scanf("%d", &d2.month);
    printf("Enter year of 1st date : ");
    scanf("%d", &d2.year);

    if (d1.year < d2.year)
    {
        printf("%d/%d/%d", d1.day, d1.month, d1.year);
    }
    else if (d1.year > d2.year)
    {
        printf("%d/%d/%d", d2.day, d2.month, d2.year);
    }
    else
    {
        if (d1.month < d2.month)
        {
            printf("%d/%d/%d", d1.day, d1.month, d1.year);
        }
        else if (d1.month > d2.month)
        {
            printf("%d/%d/%d", d2.day, d2.month, d2.year);
        }
        else
        {
            if (d1.day < d2.day)
            {
                printf("%d/%d/%d", d1.day, d1.month, d1.year);
            }
            else if (d1.day > d2.day)
            {
                printf("%d/%d/%d", d2.day, d2.month, d2.year);
            }
            else
            {
                printf("Both dates are same\n");
                printf("%d/%d/%d", d2.day, d2.month, d2.year);
            }
        }
    }
}