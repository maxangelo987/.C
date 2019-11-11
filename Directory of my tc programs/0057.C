/* (57) Determine the Happy Numbers in given range. 
(infinite for loop functions) <Comp1/MATH1> */

#include<stdio.h>
main()
{
long num,rem1,rem,sum,x;
long temp,inp1,inp2,i;
clrscr();

printf("Enter Range:");
printf("\nfrom:");
scanf("%ld",&inp1);
printf("To:");
scanf("%ld",&inp2);
for(i=inp1;i<inp2;i++)
{


num=i;
temp=num;



for(;;)
{

rem1=0;
for(;num!=0;)
	{
	rem=num%10;
	x=rem*rem;
	sum=x+rem1;
	rem1=sum;
	num=num/10;
	}
	num=sum;
	if(sum==1)
		{
		printf("HAPPY NUMBER:%ld",temp);
		break;
		}
	else
	if(sum==145)
		{
		printf("NOT HAPPY NUMBER:%ld",temp);
		break;
		}
}
}


getch();
}


