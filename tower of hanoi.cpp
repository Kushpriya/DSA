#include<stdio.h>
#include<conio.h>
void TOH(int,char,char,char);
int main()
{
	int n;
	printf("\nEnter number of disks:-");
	scanf("%d",&n);
	TOH(n,'O','D','T');
	return 0;
}
void TOH(int n,char A,char B,char C)
{
	if(n>0)
	{
		TOH(n-1,A,C,B);
		printf("Move disk %d from %c to %c\n",n,A,B);
		TOH(n-1,C,B,A);
	}
}
