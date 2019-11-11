/* (29) Prime numbers.
(for loop, if-else functions) <Comp1/MATH1> */

#include<stdio.h>
main()
{
int num,count,j,rem;
clrscr();
	printf("inputs: ");
	scanf("%d",&num);
	count=0;
for(j=2;j<num;j++)
	{
	rem=num%j;
	if(rem==0)
	{
	count++;
	}
	}
	if(count==0)
	{
	printf("the number is prime");
	}
	else if(count!=0)
	{
	printf("the number is composite");
	}
getch();
}