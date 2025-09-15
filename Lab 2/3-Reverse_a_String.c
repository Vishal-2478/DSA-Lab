#include <stdio.h>
int main()
{
    int n;
    printf("Enter size of string : ");
    scanf("%d", &n);
    char str[n];
    printf("Enter the string: ");
    scanf("%s", str);
    int i = 0, j = n - 1;
    while (i < j)
    {
        int temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }

    printf("Reversed String : %s", str);
}