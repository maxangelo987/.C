#include<stdio.h>
main()
{
long num[100], real[1000], dig[1000], rem[1000];
long i, range=0, a, b, k, j;
clrscr();
printf("Inputs: ");

for (i=0;;i++)
	{
	scanf("%ld", &num[i]);
	if (num[i]==0)
		{
		break;
		}
	range++;
	}

for (i=0;i<range; i++)
	{
	a=num[i];
	b=a;
	dig[i]=0;
	for (;a!=0;)
		{
		a=a/10;
		dig[i]++;
		}
	k=0;
	j=2;
	real[i]=0;
	for (;b!=0;)
		{
		if (b%j==0)
			{
			b=b/j;
			rem[k]=j;
			k++;
			real[i]++;
			if(b==1)
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
printf("OUTPUT: \n 1. NON WASTEFUL NUMBER: ");
for (i=0; i<range; i++)
	{
	if (real[i]<=dig[i])
		{
		printf(" %ld ",num[i]);
	}
}
printf("\n 2. WASTEFUL NUMBER: ");
for (i=0; i<range; i++)
	{
	if (real[i]>dig[i]){
		printf(" %ld ", num[i]);
		}
	}

getch();
}

