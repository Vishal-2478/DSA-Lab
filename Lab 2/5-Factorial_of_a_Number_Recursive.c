#include <stdio.h>

int fact(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}
int main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    int ans = fact(n);

    printf("Factorial of given number is : %d ", ans);
}