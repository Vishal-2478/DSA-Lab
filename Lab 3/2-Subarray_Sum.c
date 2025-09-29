// 2-pointers

#include <stdio.h>

int main()
{
    int n, s;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter sum: ");
    scanf("%d", &s);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int l = 0, r = 0, sum = 0, maxLength = 0;

    while (r < n)
    {
        sum += arr[r];
        while (l <= r && sum > s)
        {
            sum -= arr[l];
            l++;
        }
        if (sum == s)
        {
            if (r - l + 1 > maxLength)
            {
                maxLength = r - l + 1;
            }
        }
        r++;
    }

    printf("Maximum array length whose sum is %d is %d", s, maxLength);
}