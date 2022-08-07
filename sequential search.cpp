//Sequential Search
#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,a[n],search,flag=0;
	printf("\nEnter the size of the array:-");
	scanf("%d",&n);
	printf("\nEnter the list of element in array:-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the item to be searched:-");
	scanf("%d",&search);
	for(i=0;i<n;i++)
	{
		if(a[i]==search)
		{
			flag =1;
			break;
		}
	}
	if(flag == 1)
	{
		printf("\nSearch Successful ");
		printf("\nPosition = %d",i+1);
	}
	else
	{
		printf("\nSearch Unsuccessful");
	}
	getch();
}
