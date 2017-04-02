/* CS 311 - Discrete Mathematics Quiz Number 1-F */

#include<stdio.h>
main()
{
double array[10][100],temp;
long x,temp1,m,k,prime[100],eprime[100],countprime=0;
long i, j,count[100],array1[10][100],count1[100],ptemp;
long g,y;
char let;
clrscr();

textcolor(1);
cprintf("Enter # of sets: ");
scanf("%ld",&x);


let='A';
for (i=0;i<x;i++)
	{
	textcolor(2);
	cprintf("Set (%c): ",let+i);
	count[i]=0;
	for (j=0;;j++)
		{
		scanf("%lf",&temp);
		temp1=(long)temp;
		if (temp1==0)
			{
			break;
			}

		else
			{
			array[i][j]=temp;
			count[i]++;
			}

		}
	}

printf("A ");
for (i=0;i<x-1;i++)
{
printf("Union %c ",let+i+1);
}

textcolor(4);
cprintf("(Ascending Prime Numbers)= ");


m=0;
for (i=0;i<x;i++)
	{
	for (j=0;j<count[i];j++)
		{
		count1[j]=0;
		array1[i][j]=(long)array[i][j];

		for (k=2;k<array1[i][j];k++)
			{
			if (array1[i][j]%k==0)
				{
				count1[j]++;
				}

			}

		if (count1[j]==0)
			{
			prime[m]=array1[i][j];
			m++;
			countprime++;
			}

		}

	}



	g=0;
	y=1;
for (i=0;i<countprime;i++)
{
	for(;y<=prime[i];)
			{
			if (prime[i]==y)
				{
				eprime[g]=y;
				g++;
				y++;
				}

			else
				{
				y++;
				}
			}

	y=1;
}
for(i=0;i<g;i++)
	{
	for (j=0;j<g-1;j++)
		{
		if (eprime[j]>eprime[j+1])
			{
			ptemp=eprime[j];
			eprime[j]=eprime[j+1];
			eprime[j+1]=ptemp;
			}
		}
	}

	printf("{");
for (i=0;i<g;i++)
	{
	if (eprime[i]!=eprime[i+1])
		{
		cprintf(" %ld ",eprime[i]);
		}

	}
	printf("}\n");



printf("Intersects (Happy Numbers)= ");





getch();
}