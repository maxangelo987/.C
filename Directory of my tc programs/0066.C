/* (66) Reversing number by using its remainder
(for loop function) <Comp1/MATH1> */

#include<stdio.h>
main()
{
int rem,num;
clrscr();
printf("Enter a Number:");
scanf("%d",&num);


for(;num!=0;)

	{
	rem=num%10;
	num=num/10;
	printf("%d",rem);

	}

getch();
}