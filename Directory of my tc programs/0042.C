/* (42) Input numbers. Determine how many it repeats.
EX. 1 1 1 2 2 2
Output: 1 - 3; 2 - 3
(nesed for loop function) <Comp1/MATH1> */

#include<stdio.h>
main()
{

long x[1000],s,i;
long j,temp[1000],count[1000];
long t,max,k,flag;
clrscr();


printf("Input Numbers: ");
scanf("%ld",&s);

for (i=0;i<s;i++)
	{
	scanf("%ld",&x[i]);
	}

max=x[0];

for (i=0;i<s;i++)
	{
	if (x[i]>max)
		{
		max=x[i];
		}
	}
for (i=0;i<s;i++)
	{
	for (j=0;j<s-1;j++)
		{
		if (x[j]>x[j+1])
			{
			t=x[j];
			x[j]=x[j+1];
			x[j+1]=t;
			}

		}

	}

flag=0;
k=0;
j=0;
for (i=1;i<=max;i++)
	{
	for (j=0;j<s;j++)
		{
		if (x[j]==i&&i==1)
			{
			temp[k]=i;
			flag=1;
			}

		else if (x[j]==i)
			{
			k++;
			temp[k]=i;
			break;
			}

		}

	}


for (i=0;i<k+1;i++)
	{
	count[i]=0;
	for (j=0;j<s;j++)
		{
		if (temp[i]==x[j])
			{
			count[i]++;
			}
		}
	}


if (flag==1)
	{
	printf("%ld - %ld\n",temp[0],count[0]);
	}

for (i=1;i<k+1;i++)
	{

	printf("%ld - %ld\n",temp[i],count[i]);
	}
getch();
}