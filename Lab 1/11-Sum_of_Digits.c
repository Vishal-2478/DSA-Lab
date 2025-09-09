#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int sumOfDigits = 0;
    while (num > 0)
    {
        int dig = num % 10;
        sumOfDigits += dig;
        num /= 10;
    }
    printf("Number of digits: %d", sumOfDigits);
}