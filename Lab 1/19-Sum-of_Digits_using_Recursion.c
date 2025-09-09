#include <stdio.h>

int sumOfDigits(int n)
{
    if (n == 0)
    {
        return 0;
    }
    int dig = n % 10;
    return dig + sumOfDigits(n / 10);
}
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int ans = sumOfDigits(n);

    printf("Sum of digits: %d", ans);
}