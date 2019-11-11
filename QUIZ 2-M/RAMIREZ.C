#include<stdio.h>
main()
{

long num[100], factor[100], digit[100] ,rem[100];
long i, range=0, d, e, t, j;

clrscr();

printf("ENTER NUMBERS:");

for (i=0;;i++)
{
	scanf("%ld",&num[i]);
	if(num[i]==0)
	{
		break;
	}
	range++;
}

for(i=0;i<range;i++)
{
	d=num[i];
	e=d;
	digit[i]=0;

	for(;d!=0;)
	{
		d=d/10;
		digit[i]++;
	}

	t=0;
	j=2;
	factor[i]=0;
	for(;e!=0;)
	{
		if(e%j==0)
		{
			e=e/j;
			rem[t]=j;
			t++;
			factor[i]++;
			if(e==1)
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

printf("OUTPUT: NON-WASTEFUL NUMBERS: ");
for(i=0;i<range;i++)
{
	if(factor[i]<=digit[i])
	{
		printf("\n %ld",num[i]);
	}
}

printf("\nOUTPUT: WASTEFUL NUMBERS: ");
for(i=0;i<range;i++)
{
	if(factor[i]>digit[i])
	{
		printf("\n %ld",num[i]);
	}
}

getch();
}

