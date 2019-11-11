/* (68) Largest number of 3 inputs.
(if else function) <Comp1/MATH1> */

#include<stdio.h>
main()
{
int x,y,z,big;
clrscr();
printf("Enter 3 numbers:");
scanf("%d%d%d",&x,&y,&z);

if(x>y&&x>z)
big=x;
else
if(y>z)
big=y;
else
big=z;


printf("\n The Largest Number is:%d",big);




getch();
}