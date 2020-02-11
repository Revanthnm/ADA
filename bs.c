#include<stdio.h>

void Index(int key,int arr[],int n)
{
	int mid,last=n-1,first=0,i;
	
	while(first<=last)
	{	
		mid=(first+last)/n;
	
		if(arr[mid]==key)
			break;
		else if(arr[mid]<key)
			first=mid+1;
		else
			last=mid-1;
	}
	for(i=mid;i<=last;i++)
	{
		if(arr[i]!=key)
			break;
	}
	last=i-1;
	
	for(i=mid;i>=first;i--)
	{
		if(arr[i]!=key)
			break;
		
	}
	first=i+1;	
	
	printf("\n key %d occurance first at %d and last at %d and occurs %d times",key,first,last,last-first+1);
	
}
	

void main()
{
	int n,arr[20],key,m;
	
	printf("\nenter number of elements and key to be searched: ");
	scanf("%d %d",&n,&key);
	printf("\nenter elements of array: ");
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	Index(key,arr,n);
}




