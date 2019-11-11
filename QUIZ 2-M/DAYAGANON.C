#include<stdio.h>
main()
{
long num[100], rem[100];
long size=0,i, j, y,k, digit[100], x, t, factor[100];

clrscr();

printf("Enter Numbers: ");

for (i=0;;i++)
	{
	scanf("%ld", &num[i]);
	if (num[i]==0)
		{
		break;
		}
	size++;
	}
for (i=0; i<size; i++)
	{
	digit[i]=0;
	k=num[i];
	x=k;
	for (;k!=0;)
		{
		 k=k/10;
		 digit[i]++;
		}
	t=0;
	j=2;
	factor[i]=0;
	for (;x!=0;)
	       {
	       if (x%j==0)
			{
			x=x/j;
			rem[t]=i;
			t++;
			factor[i]++;
			if (x==1)
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
printf("\n1 - NON-WASTEFUL - NUMBER:\n");

for(i=0; i<size; i++)
	{
	if (factor[i]<=digit[i])
		{
		printf("	%d", num[i]);
		}
	}
printf("\n2 - WASTEFUL - NUMBER:\n");

for(i=0; i<size; i++)
	{
	if (factor[i]>digit[i])
		{
		printf("	%d", num[i]);
		}
	}






getch();
}