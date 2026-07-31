#include <stdio.h>

int main()
{
    int n, sum = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p;

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    p = arr;  

    for (int i = 0; i < n; i++)
    {
        sum = sum + *p;  
        p++;            
    }

    printf("Sum of all elements = %d\n", sum);

    return 0;
}