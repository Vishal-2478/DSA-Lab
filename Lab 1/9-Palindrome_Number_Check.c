#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int tmp = num;
    int rev = 0;
    while (tmp > 0)
    {
        int dig = tmp % 10;
        rev = rev * 10 + dig;
        tmp /= 10;
    }

    if (num == rev)
    {
        printf("%d is a palindrome number", num);
    }
    else
    {
        printf("%d is not a palindrome number", num);
    }
}