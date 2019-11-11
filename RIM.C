#include<stdio.h>
main()
{

int num, count, i, compo, t;
clrscr();

     scanf("%d",&num);

count=0;

for(i=2;i<num;i++)
	{
	if (num%i==0)
		{
		count++;
		}
	}
if (count==0)
	{
	printf("It's a PRIME!\nAnd it's factors are: ");
	compo=num-1;
	}
else
	{
	printf("It's not a PRIME!");
	getch();
	return 0;
	}

t=2;
for(;compo!=0;)
	{
	if (compo%t==0)
	   {
	   printf("%d",t);
	   compo=compo/t;
	      if(compo==1)
		{
		break;
		}
	      else
		{
		printf("*");
		}
	   }
	else
	    {
	    t++;
	    }

	}

printf("+1");

getch();
}