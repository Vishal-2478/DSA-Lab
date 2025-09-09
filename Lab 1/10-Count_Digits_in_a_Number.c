#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int cnt = 0;
    while (num > 0)
    {
        cnt++;
        num /= 10;
    }
    printf("Number of digits: %d", cnt);
}