/* (25) Input a desire array and print what you inputed.
(array, nested-for loop functions) <Comp1> */

#include<stdio.h>
main()
{


long array[100],i=0,j=0,temp,n;
clrscr();


printf("Program that you input a desire array and print what you inputed. \n");
printf("Enter number of elements: ");
scanf("%ld",&n);

printf("Enter numbers randomly: ");
for (i=0;i<n;i++)
{
scanf("%ld",&array[i]);
}

printf("Input Array is: ");


for (i=0;i<n-1;i++)
	{
	for (j=0;j<n-i-1;j++)
		{
		if (array[j]>array[j+1])
			{
			temp=array[j];
			array[j]=array[j+1];
			array[j+1]=temp;
			}
		}
	}

for (i=0;i<n;i++)
	{
	printf(" %ld ",array[i]);
	}
getch();
}