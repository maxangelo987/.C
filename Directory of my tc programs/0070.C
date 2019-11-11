/* (70) Printing PYRAMID.
(textcolor, for loop function) <Comp1/MATH0> */

#include<stdio.h>
main()
{
int j,i;
clrscr();
printf("PYRAMID: ");
getch();
clrscr();
printf("M: ");

textcolor(1);
for(i=20;i>=0;i--)
{
	for(j=i;j<20;j++)
	{
	cprintf("*");

	}

	printf("\n");
}


getch();
clrscr();
printf("P: ");

textcolor(3);
for(i=10;i>0;i--)
{
	for(j=i;j<10;j++)
	{
	cprintf("*");
	}
	printf("\n");
}




getch();
}