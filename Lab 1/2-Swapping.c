#include <stdio.h>

int main()
{
    int num1, num2;
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);
    int temp = num1;
    num1 = num2;
    num2 = temp;
    printf("After Swapping :\n first number : %d\n second number : %d", num1, num2);
    return 0;
}