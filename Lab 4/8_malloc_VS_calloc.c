#include <stdio.h>
#include <stdlib.h>

// Structure
struct Student
{
    int id;
    float marks;
};

int main()
{
    int n = 3, i;

    // Using malloc
    struct Student *s1 = (struct Student *)malloc(n * sizeof(struct Student));

    // Using calloc
    struct Student *s2 = (struct Student *)calloc(n, sizeof(struct Student));

    printf("--- Using malloc ---\n");
    for (i = 0; i < n; i++)
    {
        printf("Student %d: id=%d, marks=%.2f\n", i + 1, s1[i].id, s1[i].marks);
    }

    printf("\n--- Using calloc ---\n");
    for (i = 0; i < n; i++)
    {
        printf("Student %d: id=%d, marks=%.2f\n", i + 1, s2[i].id, s2[i].marks);
    }

    free(s1);
    free(s2);
    return 0;
}
