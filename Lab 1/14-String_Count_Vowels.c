#include <stdio.h>
int main()
{
    int n;
    printf("Enter length of string: ");
    scanf("%d", &n);
    char str[n];
    printf("Enter string: ");
    scanf("%s", str);
    int cntVowels = 0;

    for (int i = 0; i < n; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            cntVowels++;
        }
    }
    printf("Number of vowels: %d", cntVowels);
}