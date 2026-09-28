#include<stdio.h>
main(){

long num,sum=0,f1=0,f2=1,f3,i,rem;
clrscr();

printf("Input: ");
scanf("%ld",&num);
printf("Output: \n\n");

for(;;)
{
    for(;num!=0;)
    {
	rem=num%10;
	sum=sum+rem;
	num=num/10;
	printf("%ld+",rem);
    }
    if(sum>9)
    {
	printf("\b = %ld",sum);
	num=sum;
	sum=0;
	printf("\n");
    }
    else
    {
	break;
    }
}
printf("\b = %ld",sum);
printf("\n\nFibonacci: ");

for(i=0;i<sum;i++)
{
    printf("%ld ",f1);
    f3=f1+f2;
    f1=f2;
    f2=f3;
}

getch();
}