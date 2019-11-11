/* (46) Enter How many inputs: 9
Enter how many digits: 8
Input(s): 1 2 3 4 5.5 6 7 8 9
Out: 1 2 3 4 5.5 6 7 8, only the 8 inputs display (?) 
(if-for loop,nested for loop functions) <Comp1/MATH1> */

#include<stdio.h>
main()
{


long  y,x,num1[100],temp[100],temp1[100],rev[100];
double num[100],num2[100];
long i,digits[100],sum[100];
long rem, t,count[100],j;
long temp3[100],rem2;
long num9[100],rem9;
clrscr();

printf("Enter How many inputs: ");
scanf("%ld",&x);
printf("Enter How many digits: ");
scanf("%ld",&y);
printf("Input(s): ");

for (i=0;i<x;i++)
	{
	scanf("%lf",&num[i]);
	}


for (i=0;i<y;i++)
	{
	num1[i]=(long)num[i];
	num2[i]=num[i]-num1[i];

	if (num2[i]>0)
	{
	num9[i]=(num2[i]*100000)+1;
	for (;num9[i]!=0;)
		{
		rem9=num9[i]%10;
		if (rem9==1)
			{
			num9[i]=num9[i]-1;
			}

		if (rem9>0)
			{
			break;
			}
			num9[i]=num9[i]/10;
		}

	 }

	 else
		{
		num9[i]=0;
		}

	temp[i]=num1[i];
	temp1[i]=num1[i];

	digits[i]=0;

	for (;num1[i]!=0;)
		{
		num1[i]=num1[i]/10;
		digits[i]++;
		}

	if (digits[i]==y)
		{
		t=0;
		for (;temp1[i]!=0;)
			{
			rem=temp1[i]%10;
			temp1[i]=temp1[i]/10;
			sum[i]=rem+t;
			t=sum[i];
			}

		for (j=2;j<sum[i];j++)
			{

			count[i]=0;
			if (sum[i]%j==0)
				{
				count[i]++;
				break;
				}

			}

		if (count[i]==0)
			{
			temp3[i]=temp[i];

			rev[i]=0;
			for (;temp3[i]!=0;)
				{
				rem2=temp3[i]%10;
				temp3[i]=temp3[i]/10;
				rev[i]=rem2+(rev[i]*10);
				}

			printf(" %ld.%ld ",rev[i],num9[i]);
			}

		else
			{
			printf(" %ld.%ld ",temp[i],num9[i]);
			}
		}

	else
		{
		printf(" %ld.%ld ",temp[i],num9[i]);
		}


	}

getch();
}