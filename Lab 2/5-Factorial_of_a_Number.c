#include <stdio.h>

int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    int fact = 1;

    for (int i = 2; i <= n; i++)
    {
        fact = fact * i;
    }

    printf("Factorial of given number is : %d ", fact);
}