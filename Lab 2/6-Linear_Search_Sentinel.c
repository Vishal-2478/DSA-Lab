#include <stdio.h>

int linearSearchSentinel(int arr[], int n, int key)
{
    int last = arr[n - 1];
    arr[n - 1] = key;

    int i = 0;
    while (arr[i] != key)
    {
        i++;
    }

    arr[n - 1] = last;

    if (i < n - 1 || arr[n - 1] == key)
        return i;
    else
        return -1;
}

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int key;
    printf("Enter key to search: ");
    scanf("%d", &key);

    int pos = linearSearchSentinel(arr, n, key);

    if (pos != -1)
        printf("Element found at index %d\n", pos);
    else
        printf("Element not found\n");

    return 0;
}
