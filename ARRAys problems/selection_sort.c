#include <stdio.h>
int main()
{
    int n, i, j, temp, a[15];
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the unsorted array: ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Given array is: ");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
    printf("Now array will be sorted. ");
    for (i = 0; i < n - 1; i++)
    {
        int min = i;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[min])
            {
                min = j;
            }
        }
        if (min != i)
        {
            temp = a[i];
            a[i] = a[min];
            a[min] = temp;
        }
    }
    for (i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
    return 0;
}