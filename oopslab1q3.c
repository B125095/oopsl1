#include <stdio.h>

int lS(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
            return i;
    }
    return -1;
}

int main()
{
    int n, k;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to search: ");
    scanf("%d", &k);

    int p = lS(arr, n, k);

    if (p != -1)
        printf("Element found at position %d\n", p + 1);
    else
        printf("Element not found\n");

    return 0;
}