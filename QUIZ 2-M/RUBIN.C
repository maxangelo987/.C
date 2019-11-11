#include<stdio.h>
main()
{
int num[100],factor[1000],digit[1000], remender[1000];
int i, size=0, danzkie, x, u, j;
clrscr();

printf("Enter a Numbers: ");

for(i=0;;i++)
{
	scanf("%d",&num[i]);
	if(num[i]==0)
	{
		break;
	}
		size++;
}

for(i=0;i<size;i++)
{
	danzkie=num[i];
	x=danzkie;
	digit[i]=0;
		for(;danzkie!=0;)
		{
		danzkie=danzkie/10;
		digit[i]++;
		}
	u=0;
	j=2;
	factor[i]=0;
		for(;x!=0;)
		{
			if(x%j==0)
			{
			x=x/j;
			remender[u]=j;
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
printf("\nOUTPUT:\n\n1-NON WASTEFUL NUMBER/S: ");
	for(i=0; i<size; i++)
	{
		if(factor[i]<=digit[i])
			{
			printf("%d  ",num[i]);
			}
	}
printf("\n\n2-WASTEFUL NUMBER/S: ");
	for(i=0; i<size; i++)
	{
		if(factor[i]>digit[i])
		{
		printf("%d  ",num[i]);
		}
	}

getch();
}