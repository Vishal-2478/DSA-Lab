#include <stdio.h>

int main()
{
    int n;
    printf("enter number of elements : ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter elements : ");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    int x;
    printf("Enter the element to search : ");
    scanf("%d", &x);
    int index = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            index = i;
            break;
        }
    }
    if (index == -1)
    {
        printf("Element NOT found");
    }
    else
    {
        printf("Element found at index %d", index);
    }
}