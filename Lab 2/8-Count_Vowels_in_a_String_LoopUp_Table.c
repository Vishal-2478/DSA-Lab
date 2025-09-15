#include <Stdio.h>

int main()
{

    char str[100];
    int vowel_table[256] = {0};

    vowel_table['a'] = 1;
    vowel_table['e'] = 1;
    vowel_table['i'] = 1;
    vowel_table['o'] = 1;
    vowel_table['u'] = 1;
    vowel_table['A'] = 1;
    vowel_table['E'] = 1;
    vowel_table['I'] = 1;
    vowel_table['O'] = 1;
    vowel_table['U'] = 1;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int vowel_count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (vowel_table[str[i]])
        {
            vowel_count++;
        }
    }

    printf("Number of vowels: %d\n", vowel_count);
    return 0;
}