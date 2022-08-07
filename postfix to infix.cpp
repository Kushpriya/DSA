#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char stack[100];
int top=-1;
void push(char ch)
{
	stack[++top]=ch;
}
char pop()
{
	return stack[top--];
}
void convert (char exp[])
{
	int l,i,j=0;
	char t[30];
	strrev(exp);
	l=strlen(exp);
	for(i=0;i<100;i++)
	{
		stack[i]='\0';
	}
	printf("The Infix Expression is:-");
	for(i=0;i<l;i++)
	{
		if(exp[i]=='+' ||exp[i]=='-'||exp[i]=='*'||exp[i]=='/')
		{
			push(exp[i]);
		}
		else
		{
			t[j++]=exp[i];
			t[j++]=pop();
		}
	}
	t[j]=exp[top--];
	strrev(t);
	puts(t);
}
int main()
{
	char exp[50];
	printf("\n Enter the Postfix Expression:-");
	gets(exp);
	convert(exp);
	return 0;
}
