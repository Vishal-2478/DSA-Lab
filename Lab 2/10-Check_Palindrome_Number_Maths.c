#include <stdio.h>

int main()
{
    long long num, original, rev = 0;
    printf("Enter number: ");
    scanf("%lld", &num);

    original = num;

    while (num > 0)
    {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }

    if (rev == original)
        printf("%lld is a palindrome\n", original);
    else
        printf("%lld is not a palindrome\n", original);

    return 0;
}
