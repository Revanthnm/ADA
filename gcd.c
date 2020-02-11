#include<stdio.h>

int gcd(int x,int y)
{
	if(x==0)
		return y;
	else if(y==0)
		return x;
	else 
		return gcd(y,x%y);
}

int main()
{
	int a,b;
	
	printf("\nenter two numbers\n");
	scanf("%d %d",&a,&b);
	
	printf("GCD of %d & %d = %d",a,b,gcd(a,b));
	
return 0;
}








