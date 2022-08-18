#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>

int precedency(char);
int main()
{
	int i,otos=-1,ptos=-1,len,length;
	int isalpha;
	char infix[100],prestack[100],opstack[100];
	printf("Enter a valid infix\n");
	gets(infix);
	length=strlen(infix);
	len=length;
	for(i=length-1;i>=0;i--)
	{
		if(infix[i]==')')
		{
			opstack[++otos]=infix[i];
		}
		else if(isalpha(infix[i]))
		{
			len++;
			while(opstack[otos]!=')')
			{
				prestack[++ptos]=opstack[otos];
				otos--;
			}
			otos--;
		}
		else
		{
			if(precedency(opstack[otos])>precedency(infix[i]));
			{
				prestack[++ptos]=opstack[otos--];
				opstack[++otos]=infix[i];
			}
			opstack[++otos]=infix[i];
		}
	}
	while(otos!=-1)
	{
		prestack[++ptos]=opstack[otos];
		otos--;
	}
	for(i=len-1;i>=0;i--)
	{
		printf("%c",prestack[i]);
	}
	getch();
}
int precedency(char ch)
{
	switch(ch)
	{
		case'$':
			return(4);
		case'*':
		case'/':
			return(3);
		case'+':
		case'-':
			return(2);
		default:
			return(1);	
	}
}
