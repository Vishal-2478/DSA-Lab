// Itertaive solution

#include <stdio.h>

int main()
{
    int n, x, sum = 0;
    printf("Enter no of elements : ");
    scanf("%d", &n);
    printf("Enter elements : ");
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        sum += x;
    }
    printf("Total sum is %d", sum);
}