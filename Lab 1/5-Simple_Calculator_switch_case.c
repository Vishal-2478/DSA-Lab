#include <stdio.h>

int main()
{
    int n1, n2;
    char op;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Enter an operator: ");
    getchar();
    scanf("%c", &op);

    switch (op)
    {
    case '+':
        printf("%d + %d = %d", n1, n2, n1 + n2);
        break;
    case '-':
        printf("%d - %d = %d", n1, n2, n1 - n2);
        break;
    case '*':
        printf("%d * %d = %d", n1, n2, n1 * n2);
        break;
    case '/':
        printf("%d / %d = %d", n1, n2, n1 / n2);
        break;
    case '%':
        printf("%d %% %d = %d", n1, n2, n1 % n2);
        break;
    default:
        printf("Invalid operator");
    }
    return 0;
}