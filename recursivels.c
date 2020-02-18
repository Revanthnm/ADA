#include<stdio.h>

int linear(int a[],int l,int r, int x)
{ 
	if(r<l)
		return -1;
	else if(a[l]==x)
		return l;
	else if(a[r]==x)
		return r;
	else
		return linear(a,l+1,r-1,x);
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
	loc=linear(a,0,n-1,key);
	if(loc==-1)
		printf("\n%d not found in array",key);
	else
		printf("\n%d found in array at location %d\n",key,loc);
} 
