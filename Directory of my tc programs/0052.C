/* (52) Decimal to Binary
(for loop function) <Comp1/Comptech3/CpE321> */

#include<stdio.h>
main()
{
int rem,x,bin=1,base=0;
clrscr();
printf("\n Enter a Number:");
scanf("%d",&x);

for(;x!=0;)
	{
	rem=x%2;
	bin=bin+base*10;
	base=base/10;
	x=x/2;
	printf("%d",bin);
	}


getch();
}