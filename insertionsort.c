#include<stdio.h>
#define max 50

int a[max];

void swap(int,int);

void insort(int n)
{
	int key;
	for(int i=1;i<n;i++)
	{
		key=a[i];
		for(int j=0;j<i;j++)
		{
			if(key>a[j])
				continue;
			else
			{
				swap(j,i-1);	
				a[j]=key;
				break;
			}
		}
	}
}

void swap(int i,int j)
{
	for(int k=j;k>=i;k--)
		a[k+1]=a[k];
	
}

void main()
{
	int n;
	
	printf("enter number of elements: ");
	scanf("%d",&n);	
	
	printf("\nenter elements: ");
	for(int i=0;i<n;i++)
		scanf("%d",&a[i]);
	
	insort(n);
	
	printf("\narray after insertion sort: ");
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
}
