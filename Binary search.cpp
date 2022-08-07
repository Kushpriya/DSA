//Binary Search
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,h,a[100],i,mid1,mid,l=0,key,flag=0;
	printf("\nEnter the size of array:-");
	scanf("%d",&n);
	printf("\nEnter the list of element in array:-\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter the item to be searched:-");
	scanf("%d",&key);
	h=n-1;
	while(l<=h)
	{
		mid1=l+h;
		mid=mid1/2;
		if(a[mid]<key)
		{
			l=mid+1;
		}
		else if (a[mid]>key)
		{
			h=mid-1;
		}
		else
		{
			flag =1;
			break;
		}
	}
	if(flag == 1)
	{
		printf("\nSuccessful Search....");
	}
	else
	{
		printf("\nUnsuccessful Search....");
	}
	getch();
}
