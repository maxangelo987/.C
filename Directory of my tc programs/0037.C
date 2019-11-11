/* (37) Inputs: 12 4 55 55 0; Scan number: 2;
Out the 2 digit. Out: 12 55 55 
(for loop, array functions) <Comp1/MATH1> */

#include<stdio.h>
main()
{
int i,j,w,d,whole[100],num1[100];
float num[100],deci[100],rem[100];
int temp1[100],w1[100],temp2[100];
int y,deci1[100],deci222[100];
float deci2[100],deci22[100];
clrscr();


printf("Enter Inputs: ");

i=0;
for(;;)
	{
	scanf("%f",&num[i]);

	if (num[i]==0)
		{
		break;
		}
	i++;
	}

printf("Enter scan number: ");
scanf("%d",&y);
	w=0;   d=0;
for (j=0;j<i;j++)
	{

	num1[j]=(int)num[j];
	rem[j]=num[j]-num1[j];

	if (rem[j]==0)
		{
		whole[w]=num1[j];
		w++;
		}
	else
		{
		deci[d]=num[j];
		d++;
		}
	}


for (j=0 ;j<w;j++)
	{
	temp1[j]=whole[j];
	}

for (j=0;j<w;j++)
	{
	w1[j]=0;
	for (;temp1[j]!=0;)
		{
		temp1[j]=temp1[j]/10;
		w1[j]++;
		}
	}

for (j=0;j<w;j++)
	{
	if (y==w1[j])
		{
		printf(" %d ",whole[j]);
		}
	}

for (j=0;j<d;j++)
	{
	temp2[j]=deci[j];
	}

for (j=0;j<d;j++)
	{
	deci1[j]=(int)deci[j];
	deci2[j]=deci[j]-deci1[j];
	}

for (j=0;j<d;j++)
	{
	deci22[j]=deci2[j]*1000000;
	deci222[j]=(int)deci22[j];
	}


getch();
}