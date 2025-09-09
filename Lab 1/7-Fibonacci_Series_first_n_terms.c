#include <stdio.h>

int main()
{
    int num;
    printf("Enter number of terms: ");
    scanf("%d", &num);

    int a = 0, b = 1, c;

    if (num >= 1)
        printf("%d ", a);
    if (num >= 2)
        printf("%d ", b);

    for (int i = 3; i <= num; i++)
    {
        c = a + b;
        printf("%d ", c);
        a = b;
        b = c;
    }
    return 0;
}