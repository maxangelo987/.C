/* (67) Enter inputs, display:
EVEN, SUM of Even Numbers, ODD, PRIME, COMPOSITE.
(array, nested for loop function) <Comp1/MATH1> */

#include<stdio.h>
main()
{
long num,x[100],i,a=0,count=0,count1=0,even[100],odd[100],b=0;
long composite[1000],prime[100],
clrscr();


printf("Enter how many inputs:");
scanf("%ld",&num);

for(i=0;i<num;i++)
	{
	scanf("%ld",&x[i]);
	}

for(i=0;i<num;i++)
	{
	if(x[i]%2==0)
		{
		even[a]=x[i];
		a++;
		count++;
		}

	 else
		{
		odd[b]=x[i];
		b++;
		count1++;

		}

	}

for(i=0;i<num;i++)
	{
	for(j=2;j<x[i];j++)
		{
		if(x[i]%j==0)
			{
			count3++;
			}
		if(count3==0)
			{
			prime[c]=x[i];
			c++;
			count4++;
			}
		else
			{
			composite[d]=x[i];
			d++;
			count5++;
			}

		}
	}








printf("EVEN:");
for(i=0;i<count;i++)
	{
	printf(" %ld ",even[i]);
	}
printf("\nODD:");
for(i=0;i<count1;i++)
	{
	printf(" %ld ",odd[i]);
	}

getch();
}