#include <stdio.h>

int main()
{
    int n;
    printf("Enter arrray length : ");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int large = -1, second_large = -1;
    int i;
    for (i = 0; i < n; i++)
    {
        if (arr[i] > large)
        {
            second_large = large;
            large = arr[i];
        }

        else if (arr[i] > second_large && arr[i] != large)
        {
            second_large = arr[i];
        }
    }

    printf("Second Largest element is : %d", second_large);
}