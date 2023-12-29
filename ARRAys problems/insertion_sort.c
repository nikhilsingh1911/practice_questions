#include<stdio.h>
int main(){
    int n , a[30], i, j, temp;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    printf("Enter the unsorted array: ");
    for(i=0;i<n;i++)
    {
        scanf("%d", &a[i]);
    }
    printf("Given array is: ");
    for(i=0;i<n;i++)
    {
        printf("%d", a[i]);
    }
    printf("Now array will be sorted. ");
    for(i=1;i<n;i++)
    {
        temp=a[i];
        j=i-1;
        while(temp<a[j] && j>=0)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=temp;
    }
    printf("Sorted list is: ");
    for(i=0;i<n;i++){
        printf(" %d ", a[i]);
    }
    return 0;
}