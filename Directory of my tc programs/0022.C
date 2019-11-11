/* (22) 'a' and 'b' for division a/b. 
(printf, scanf functions) <Comp1/MATH1> */

#include<stdio.h>
main(){

float a,b,max,min,results,count;
max=2000000000;
min=-2000000000;
results=0;
count=0;

clrscr();

printf("Program for integer numbers 'a' and 'b' for division a/b:\na= ");
scanf("%f",&a);
printf("b= ");
scanf("%f",&b);

	if(b==0)
		printf("Division of zero is not allowed! Math Error.");

	else
		{
		results=a/b;
		printf("Division results is %.2f",results);
		}
getch();
}