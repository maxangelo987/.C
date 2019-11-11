/* (27) Input numbers, zero to terminate. Det min and max and there GCD.
(array, for loop functions) <Comp1/MATH1> */


#include<stdio.h>
main()
{


int i, inp[100],j,max,min;
clrscr();

for (i=0;;i++)
	{
	scanf("%d",&inp[i]);

	if (inp[i]==0)
		{
		break;
		}
	}

max=inp[0];
for (j=0;j<i;j++)
	{

	if (inp[j]>max)
		{
		max=inp[j];
		}
	}

min=inp[0];
for (j=0;j<i;j++)
	{
	if (inp[j]<min)
		{
		min=inp[j];
		}

	}

printf("max - %d\n",max);
printf("min - %d",min);
for (j=max;j>=1;j--)
	{
	if (max%j==0&&min%j==0)
		{
		printf("\nGCD is %d\n",j);
		break;
		}

	}

getch();
}