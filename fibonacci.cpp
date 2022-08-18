#include<stdio.h>

#include<conio.h>
int fibo(int);
int main()

{

int n, i=0,c;

printf("Enter the number:");

scanf("%d",&n);

printf("Fibonacci numbers up to %d terms:\n",n);

for(c=1;c<=n;c++)
{
printf("%d\n",fibo(i));
i++;
}
getch();

}

int fibo(int k)

{

if(k == 0 || k == 1)

return k;

else

return fibo(k-1)+fibo(k-2);


}


