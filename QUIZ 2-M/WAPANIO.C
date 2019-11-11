#include<stdio.h>
main(){
long num[100], rem[100], factor[100],digit[100];
long i,j,range=0,n,x,k;
clrscr();

printf("Enter number: ");

for(i=0;;i++)
	{
	scanf("%ld", &num[i]);
	if (num[i]==0)
		{
		break;
		}
	range++;
	}
for(i=0;i<range;i++)
	{
	n=num[i];
	x=n;
	digit[i]=0;
	for(;n!=0;)
		{
		n=n/10;
		digit[i]++;
		}
	k=0;
	j=2;
		factor[i]=0;
		for(;x!=0;)
			{
			if(x%j==0)
				{
				x=x/j;
				rem[k]=j;
				factor[i]++;
				if(x==1)
					{
					break;
					}
				}
			else
				{
				j++;
				}
			}
	}

printf("\nNon-wasteful: ");
for(i=0;i<range;i++)
	{
	if (factor[i]<=digit[i])
		{
		printf( " %ld " , num[i]);
		}
	}
printf("\nWasteful: ");
for(i=0;i<range; i++)
	{
	if (factor[i]>digit[i])
		{
		printf(" %ld ", num[i]);
		}
	}
getch();
}