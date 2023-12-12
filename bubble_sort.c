#include <stdio.h>
int main()
{
    int n, i, a[30], temp, j;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    printf("Enter the elements of array");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("Sorting will be done, Now:");
    for (i = 0; i < n - 1; i++)
    {
        // to check that if there is any swap done or not.. if no swap is done then
        //  thats means array is sorted but code will be excuted furhter so to check that we will add this new instructiosn
        int flag=0;
        for (j = 0; j < n - i - 1; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
                flag = 1;
            }
        }
        if (flag==0){
            break;
        }
    }
    printf("Sorted array is: ");
    for (i = 0; i < n; i++)
    {
        printf(" %d ", a[i]);
    }
    return 0;
}
