//Recursion
#include<stdio.h>
#include<conio.h>
int facto(int);
int main()
{
	int i,n,result;
	printf("\nEnter the number for the factorial :");
	scanf("%d",&n);
	result=facto(n);
	printf("\nThe factorial of the %d is :%d",n,result);
	return 0;
}
int facto(int f)
{
	if(f==1)
	{
		return 1;
	}
	else
	{
		return(f*facto(f-1));
	}
}
