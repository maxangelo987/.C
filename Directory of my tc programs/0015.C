/* (15) Number to Scientific Notation. 
(if-else if function) <Comp1/CHEM1> */

#include<stdio.h>
main()
{

long i,n;
float m;

clrscr();

printf("\nProgram to make a number into a scientific notation.\nInput number: ");
scanf("%ld",&n);

if (n<10)
	{
	printf("%ld x 10^0",n);
	}


else if (n>10)
{

	for (i=0;n>9;i++)
		{
		m=(float)n/10;
		n=(long)m;
		}



printf("%.1f x 10^%ld",m,i);
}

getch();
}