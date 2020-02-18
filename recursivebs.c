#include<stdio.h>

int binary(int a[],int l,int r, int x)
{ 
	int mid;
	if(l<=r)
	{
			mid=l+(r-l)/2;
			if(a[mid]==x)
				return mid;
			else if(a[mid]>x)
				return binary(a,l,mid-1,x);
			else
				return binary(a,mid+1,r,x);
	}
return -1;
}

void main()
{
	int n,a[50],key,loc;
	printf("enter number of elements: ");
	scanf("%d",&n);
	printf("\nenter elements: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("\nenter key to be searched: ");
	scanf("%d",&key);
	loc=binary(a,0,n-1,key);
	if(loc==-1)
		printf("\n%d not found in array",key);
	else
		printf("\n%d found in array at location %d\n",key,loc);
} 
