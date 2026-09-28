#include<stdio.h>

main(){

long num,sum=0,i;
long digitNum,temp,temp2,center,centerDig;

clrscr();

printf("Input/s: ");

for(;;)
{
    scanf("%ld",&num);

    if(num==0)
    {
	printf("Output: %ld",sum);
	break;
    }

    digitNum=0;
    temp=num;
    temp2=num;

    for(;temp!=0;)
    {
	temp=temp/10;
	digitNum++;
    }

    if(digitNum%2==0)
    {
	/*Even number of digits*/
	center=(digitNum/2)-1;
	centerDig=2;
    }
    else
    {
	/*Odd number of digits*/
	center=digitNum/2;
	centerDig=1;
    }

    /*go to center position*/
    for(i=0;i<center;i++)
    {
	temp2=temp2/10;
    }

    for(i=0;i<centerDig;i++)
    {
	sum=sum+(temp2%10);
	temp2=temp2/10;
    }
}
getch();
}