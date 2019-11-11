#include<stdio.h>
main(){

long num,rev=0,sum=0,max=0,rem;

clrscr();

printf("Input: ");
scanf("%ld",&num);

for(;num!=0;)
{
    rem=num%10;
    sum=sum+rem;
    rev=(rev*10)+rem;
    num=num/10;

    if(rem>max)
    {
	max=rem;
    }
}

printf("\nReverse: %ld",rev);
printf("\nSum: %ld",sum);
printf("\nLargest: %ld",max);

getch();
}