/* (11) Solving the Area of a Circle 
(printf, scanf functions) <Comp1/MATH0> */

#include<stdio.h>
main()
{

int r;
float a;
float pi=3.1416;

clrscr();

printf("This program let's you: Solve the Area of the Circle.\n");
printf("Enter your Radius: ");
scanf("%d", &r);

a=r*r*pi;

printf("Area= %f", a);

getch();



}