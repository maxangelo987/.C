#include<stdio.h>
main()
{
long num[100], fact[100], dig[100], rem[100];
long i, range=0, ny, xy, u, j;
clrscr();
printf("Enter numbers:");

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
	ny=num[i];
	xy=ny;
	dig[i]=0;
	for (;ny!=0;)
		{
		ny=ny/10;
		dig[i]++;
		}
	u=0;
	j=2;
	fact[i]=0;
	for (;xy!=0;)
		{
		if (xy%j==0)
			{
			xy=xy/j;
			rem[u]=j;
			fact[i]++;
			if(xy==1)
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
printf("OUTPUT: 1-NON WASTEFUL NUMBER: ");
for (i=0; i<range; i++)
	{
	if (fact[i]<=dig[i])
		{
		printf(" %ld ",num[i]);
	}}
printf("\n2-WASTEFUL NUMBER: ");
for (i=0; i<range; i++)
	{
	if (fact[i]>dig[i])
		{
		printf(" %ld ", num[i]);
		}
	}

getch();
}

