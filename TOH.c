#include<stdio.h>

void toh(int n,char from_rod,char to_rod,char aux_rod)
{
	if(n==0)
		return;
	
	toh(n-1,from_rod,aux_rod,to_rod);
	printf("move disc %d from %c to %c\n",n,from_rod,to_rod);
	toh(n-1,aux_rod,to_rod,from_rod);
}

int main()
{
	int n;
		
	printf("\nenter number of discs: ");
	scanf("%d",&n);
		
	toh(n,'a','b','c');
return 0;
}
