#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
int l[30];

int maxi(int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++)
        if(max<l[i])
            max=l[i];
    return max;
}

int lis(int arr[], int n,int ref)
{
    int max = 1;
    for(int i=ref+1;i<n;i++)
    {
        if(arr[ref]<=arr[i])
        {
            ref=i;
            max++;
        }
    }
    return max;
}

int _lis(int arr[],int n)
{
     for(int i=0;i<n;i++)
    {
        l[i]=lis(arr,n,i);
    }
    return maxi(n);
}

int main()
{
    int arr[30],n ;
    printf("\nEnter size of array: ");
    scanf("%d",&n);

    printf("\nenter elements of array: ");
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    printf("Length of lis is %d\n",
           _lis( arr, n));
    return 0;
}
