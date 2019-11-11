/* (24) 5 float inputs and their average. 
(printf, scanf, casting functions) <Comp1/MATH1> */

#include<stdio.h>
main()
{
   float n1,n2,n3,n4,n5,average;
   clrscr();
   
   printf("Program for 5 float inputs and their average. \n");
   printf("enter the 1st float: ");
   scanf("%f",&n1);
   printf("enter the 2nd float: ");
   scanf("%f",&n2);
   printf("enter the 3rd float: ");
   scanf("%f",&n3);
   printf("enter the 4th float: ");
   scanf("%f",&n4);
   printf("enter the 5th float: ");
   scanf("%f",&n5);
   average=(float) (n1+n2+n3+n4+n5)/5;
   printf("\nThe average is : %f\n", average);
   getch();
}