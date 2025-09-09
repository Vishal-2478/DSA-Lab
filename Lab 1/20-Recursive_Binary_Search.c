/*
Q20. Recursive Binary Search
Scenario: A library system searches for a book ID in a sorted array of IDs. Implement binary
search using recursion.
 */

#include <stdio.h>

int binarySearch(int arr[], int l, int r, int x)
{
    while (l <= r)
    {
        int mid = l + (r - l) / 2;
        if (arr[mid] == x)
        {
            return mid;
        }
        if (arr[mid] > x)
        {
            return binarySearch(arr, l, mid - 1, x);
        }
        return binarySearch(arr, mid + 1, r, x);
    }
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int x;
    printf("Enter element to search: ");
    scanf("%d", &x);

    int ans = binarySearch(arr, 0, n - 1, x);

    if (arr[ans] == x)
    {
        printf("Element found at index %d", ans);
    }
    else
    {
        printf("Element not found");
    }
}