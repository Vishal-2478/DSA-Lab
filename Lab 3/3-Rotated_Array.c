#include <stdio.h>

int main()
{
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    printf("Enter value of k: ");
    scanf("%d", &k);
    int arr[n];
    int brr[n];
    // for (int i = 0; i < n; i++)
    // {
    //     brr[i] = 0;
    // }
    int len = sizeof(arr) / sizeof(arr[0]);
    printf("Enter elements: ");
    for (int i = 0; i < len; i++)
    {
        scanf("%d", &arr[i]);
    }

    k = k % len;
    int j = 0;
    for (int i = len - k; i < len; i++)
    {
        brr[j] = arr[i];
        j++;
    }
    for (int i = 0; i < len - k; i++)
    {
        brr[j] = arr[i];
        j++;
    }

    for (int i = 0; i < len; i++)
    {
        printf("%d ", brr[i]);
    }
}