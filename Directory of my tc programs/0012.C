/* (12) Reversing mutiple numbers 
(for loop function) <Comp1> */

#include<stdio.h>
main()
{

long n,rev;
clrscr();

printf("This program let's you reverse multiple numbers. \n");

printf("Enter Number: ");
scanf("%ld",&n);

for (;n!=0;)
	{

	rev=n%10;
	n=n/10;
	printf(" %ld ",rev);

	}

getch();
}