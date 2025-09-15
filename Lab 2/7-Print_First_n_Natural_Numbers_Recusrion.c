#include <stdio.h>

void print(int n)
{
    if (n == 0)
        return;
    print(n - 1);
    printf("%d ", n);
}
void main()
{
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    print(n);
    return;
}