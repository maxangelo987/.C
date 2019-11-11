#include<stdio.h>
main()
{

long n, digit, i, count,x,iexcess;
double num, check, r, rev,excess;
long backx,backiex,rem1,rev1,digitx,digitiex;
long rev2,rem2;
clrscr();

printf("Reversing the inputs based on your assigned digits.\n");
printf("Enter number of inputs: ");
scanf("%ld",&n);
printf("Enter number of digits: ");
scanf("%ld",&digit);

count=0;
for(i=0;i<n;i++)
	{
	num=0;
	scanf("%lf",&num);
	x=(long)num;
	excess=num-x;

	if (excess==0)
		{
	backx=x;
	digitx=0;
	for (;x!=0;)
		{
		x=x/10;
		digitx++;
		}
	backiex=iexcess;
	digitiex=0;
	for (;iexcess!=0;)
		{
		iexcess=iexcess/10;
		digitiex++;
		}
	if (digit==digitx)
		{
		rev1=0;
		for (;backx!=0;)
			{
			rem1=backx%10;
			rev1=rem1+rev1*10;
			backx=backx/10;
			}

			printf("%ld",rev1);
		}
	else
		{
		printf("%ld",backx);
		}

		printf(" ");
		}

	else
		{
	excess=excess*1000000000;
	iexcess=(long)excess;

	if (iexcess<0)
		{
		iexcess=iexcess*-1;
		}
	iexcess=iexcess+1;
	if (iexcess%10==1)
		{
		iexcess=iexcess-1;
		}
	for (;;)
		{
		if (iexcess%10!=0)
			{
			break;
			}
		iexcess=iexcess/10;
		}
	backx=x;
	digitx=0;
	for (;x!=0;)
		{
		x=x/10;
		digitx++;
		}
	backiex=iexcess;
	digitiex=0;
	for (;iexcess!=0;)
		{
		iexcess=iexcess/10;
		digitiex++;
		}
	if (digit==digitx)
		{
		rev1=0;
		for (;backx!=0;)
			{
			rem1=backx%10;
			rev1=rem1+rev1*10;
			backx=backx/10;
			}

			printf("%ld.",rev1);
		}
	else
		{
		printf("%ld.",backx);
		}

	if (digit==digitiex)
		{
		rev2=0;
		for (;backiex!=0;)
			{
			rem2=backiex%10;
			rev2=rem2+rev2*10;
			backiex=backiex/10;
			}
			printf("%ld",rev2);
		}

	else
		{
		printf("%ld",backiex);
		}
		printf(" ");
		}
	}

getch();
}