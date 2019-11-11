/* (3) Determining ODD/EVEN number 
(if-else if function) <Comp1/MATH1> */

#include<stdio.h>
main()
{


int num;
clrscr();

printf("This program let's you: Determine input if it is ODD/EVEN.\n");
printf("Input Number: ");
scanf("%d",&num);


if (num%2==0)
{
printf("Your number is Even!");

}

else
{

printf("Your number is Odd!");
}


getch();

}