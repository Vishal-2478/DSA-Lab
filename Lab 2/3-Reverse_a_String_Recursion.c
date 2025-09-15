// #include <stdio.h>
// #include <string.h>

// void reverse(char str[], int start, int end)
// {
//     if (start >= end)
//         return;

//     char temp = str[start];
//     str[start] = str[end];
//     str[end] = temp;

//     reverse(str, start + 1, end - 1);
// }

// int main()
// {
//     int n;
//     printf("Enter size of string : ");
//     scanf("%d", &n);
//     char str[n];
//     printf("Enter string: ");
//     scanf("%s", str);

//     reverse(str, 0, strlen(str) - 1);

//     printf("Reversed string: %s\n", str);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], rev[100];
    printf("Enter string: ");
    scanf("%s", str);

    int n = strlen(str);

    for (int i = 0; i < n; i++)
    {
        rev[i] = str[n - 1 - i];
    }
    rev[n] = '\0';

    printf("Reversed string: %s\n", rev);

    return 0;
}
