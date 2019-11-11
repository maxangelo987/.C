#include<stdio.h>
main()
{

long n,i,digit,input,countdigits;
long bak,flag,j;
clrscr();

printf("n=");
scanf("%ld",&n);
printf("digit=");
scanf("%ld",&digit);

for (i=0;i<n;i++)
	{
	scanf("%ld",&input);

	bak=input;
	countdigits=0;
	for (;input!=0;)
		{
		input=input/10;
		countdigits++;
		}

	if (countdigits==digit)
		{
		printf("hey");
		flag=0;
		for (j=2;j<bak;j++)
			{
			if (bak%j==0)
				{
				flag++;
				}
			}
		if (flag==0)
			{
			printf(" %ld ",bak);
			}
		}
	}


}