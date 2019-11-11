/* (39) Determine the input if it is odd or even
(while loop, if else-if functions) <Comp1/MATH1> */

#include<stdio.h>
main()
{
  int num;
  clrscr();
  printf("please enter an integer (-1 to QUIT):");
  scanf ("%d", & num);
  while(num!= -1)
   {
	if(num % 2 == 0)
	   printf("the number is EVEN.\n\n");
	else
	   printf("the number is ODD.\n\n");
	printf("please enter an integer(-1 to QUIT):");
	scanf("%d",&num);
   }
   printf("end of program...");
   getch();
   return 0;
}