/* (54) Palindrome or Not-Palindrome:
1001 - Palindrome
(array, for loop functions) <Comp1/MATH1> */

#include<stdio.h>
main()

{
long num,i,x[100],count1=0,j=0,count2=0;
clrscr();

printf("\n enter a Number:");
scanf("%ld",&num);

for(i=0;num!=0;i++)
	{
	x[i]=num%10;
	num=num/10;
	count1++;
	}

	    j=count1-1;
for(i=0;i<count1;i++)
	{

	if(x[j]!=x[i])
		{
		printf("\NOT A PALINDROME");
		break;
		}
       else
		{
		j--;
		count2++ ;
		}

	}

if(count1==count2)
	{
	printf("PALINDROME");

	}

getch();
}