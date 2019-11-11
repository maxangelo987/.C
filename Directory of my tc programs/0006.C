/* (6) Input: 123
       Output: 321 
(printf, scanf functions) <Comp1> */

#include<stdio.h>
main()
{

int inp,x,y,z,rem;
clrscr();

printf("This program let's you: Reverse the 3 input number.\n");
printf("Input 3 numbers: ");
scanf("%d",&inp);


x=inp/100;
rem=inp%100;
y=rem/10;
z=rem%10;

printf("%d %d %d ",z,y,x);

getch();
}