#include<stdio.h>
main()
{

long n,digit,x,temp,rem[1000],waste[100],nwaste[100],factor,t,i,k,m=0,r=0;
long count,num[1000];

clrscr();
printf("Input Digits: ");
count=0;
for(k=0;;k++)
	{
	scanf("%ld",&num[k]);
	count++;
		if(num[k]==0)
		{
		break;
		}
	}
	for(k=0;k<count-1;k++)
		{
digit=0;
n=num[k];
x=n;
	for(;n!=0;)
		{
		n=n/10;
		digit++;
		}

t=0;
i=2;
factor=0;
	for(;x!=0;)
	{
		if(x%i==0){
			x=x/i;
			rem[t]=i;
			t++;
			factor++;

	if(x==1)
		{
		break;
		}
	}
	else
	{
i++;
}
}
	if(factor>digit)
		{
		waste[r]=num[k];
		r++;
		}

	if(factor<=digit)
		{
		nwaste[m]=num[k];
		m++;
		}
	}

printf(" \nNon-Wasteful - ");
for(i=0;i<m;i++)
{

}
		for(i=0;i<m;i++)
		{
		printf(" %ld ",nwaste[i]);
		}

printf(" \nWasteful -  ");

		for(i=0;i<r;i++)
		{
		 printf(" %ld ",waste[i]);
		}

getch();
}
