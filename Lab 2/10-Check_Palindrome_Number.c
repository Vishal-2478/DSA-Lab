#include <stdio.h>
#include <string.h>

int main()
{
    long long num;
    printf("Enter number: ");
    scanf("%lld", &num);

    char str[50];
    sprintf(str, "%lld", num); // convert number to string

    int len = strlen(str);
    int isPalindrome = 1;

    for (int i = 0; i < len / 2; i++)
    {
        if (str[i] != str[len - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("%lld is a palindrome\n", num);
    else
        printf("%lld is not a palindrome\n", num);

    return 0;
}
