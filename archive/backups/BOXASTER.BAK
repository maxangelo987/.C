#include<stdio.h>
main(){


long num,i,j,count=0;;
clrscr();

printf("Input: ");
scanf("%ld",&num);
printf("Output: \n\n");

for(i=0;i<num;i++)
{
    for(j=0;j<num;j++)
    {
	if(i==0 || i==num-1 || j==0 || j==num-1)
	{
	    printf("* ");
	    count++;
	}
	else
	{
	    printf("  ");
	}
    }
    printf("\n");
}

printf("\nNumber of asterisk used: %ld",count);

getch();
}