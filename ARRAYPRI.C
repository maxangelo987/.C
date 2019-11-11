#include<stdio.h>
main()
{

long x[100],i,count=0;
long prime[100],k=0,j;
long countprime=0,countp;

clrscr();

for(i=0;;i++)
	{
	scanf("%ld",&x[i]);
	if(x[i]==0)
		{
		break;
		}
	else
		{
		count++;
		}
	}

for(i=0;i<count;i++)
	{
	countp=0;
	for(j=2;j<x[i];j++)
		{
		if (x[i]%j==0)
			{

			countp++;
			}
		}
	if (countp==0)
		{
		prime[k]=x[i];
		countprime++;
		k++;
		}
	}
for (i=0;i<countprime;i++)
	{
	printf(" %ld ",prime[i]);
	}
getch();

}