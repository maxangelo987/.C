#include<stdio.h>
#include<string.h>
main()
{
long rev,num,rem;
long bak,div,dig,counta,a,temp1;
long i,temp,digits;
long range,j;
char str[1000],*ptr,*myword[20];
clrscr();

printf("Digits: ");
gets(str);


printf("Range: ");
scanf("%ld",&range);

a=0;
counta=0;
ptr=strtok(str," ");
while (ptr!=NULL)
	{
	myword[a]=ptr;
	a++; counta++;
	ptr=strtok(NULL," ");
	}

for (i=0;i<counta;i++)
{
sscanf(myword[i],"%ld",&dig);

for (j=1;j<=range;j++)
{
num=j;
bak=num;
rev=0;
for (;num!=0;)
	{
	rem=num%10;
	num=num/10;
	rev=rem+(rev*10);
	}

if (rev==bak)
	{
	temp=bak;
	temp1=bak;
	digits=0;
	for (;temp!=0;)
	      {
	      temp=temp/10;
	      digits++;
	      }

	if (digits==dig)
	{
	printf("%ld: ",temp1);
	div=2;
	while (bak!=0)
		{
		if (bak%div!=0)
			{
			div++;
			}
		else
			{
			bak=bak/div;
			printf("%ld ",div);

			if (bak==1)
				{
				break;
				}
			}
		}
		printf("\n");
		getch();
	}

	}

	}

}
getch();
}
