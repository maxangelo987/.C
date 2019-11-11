/* (19) Finding the Largest of the numbers and determine the Even. 
(for loop function) <Comp1/MATH1> */

#include<stdio.h>
main()
{


long counter=1,max, i,ans, inp0, m=0,large=0,occur=0;
clrscr();


printf("Program to find the Largest of the numbers and determine the Even.\n");
printf("Input number of inputs: ");
scanf("%ld",&max);

for (i=0;i<max;i++)
	{
	scanf("%ld",&inp0);
	ans=inp0%2;
	if (ans==0)
		{
		if (inp0>large)
			{
			large=inp0;
			occur=1;
			}

		else if (large==inp0)
			{
			occur++;
			}

		}


}

if (occur==0)
	{
	printf("There is no even number.");
	}
else
	{
	printf("The highest even number is %ld and it occurs %ld time(s).",large,occur);

	}
getch();
}