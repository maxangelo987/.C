/* (62) Determine if it is Happy and Prime number.
(nested if, infinite for loop functions) <Comp1/MATH1> */

#include<stdio.h>
main()
{
long x,rem,rem1,rem2,sum,temp,j,count=0;
clrscr();
scanf("%ld",&x);
temp=x;
for (;;)
{
rem2=0;
for(;x!=0;)
	{
	rem=x%10;
	rem1=rem*rem;
	sum=rem1+rem2;
	rem2=sum;
	x=x/10;
	}
	x=sum;
if (sum==1)
	{
	printf("It's a Happy Number. Sum=%ld",sum);
	break;
	}
else if (sum==145)
	{
	printf("It's not a Happy Number.");
	break;
	}
}
if (sum==1)
	{
	for (j=2;j<temp;j++)
		{
		if (temp%j==0)
			{
			count++;
			}
		}
	if (count==0)
		{
		printf("\nand it is a Prime also.");
		}
	else
		{
		printf("\nyay, it's Composite.");
		}
	}
getch();
}