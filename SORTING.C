#include<stdio.h>
main(){

long num[100],inp,temp=0;
int i,j;
clrscr();

printf("Number of Inputs: ");
scanf("%ld",&inp);
printf("Input/s: ");

for(i=0;i<inp;i++)
{
    scanf("%ld",&num[i]);
}

for(i=0;i<inp;i++)
{
    for(j=0;j<inp;j++)
    {
	if(num[i]<num[j])
	{
	    temp=num[i];
	    num[i]=num[j];
	    num[j]=temp;
	}
    }
}

printf("Output: ");

for(i=0;i<inp;i++)
{
    printf("%ld ",num[i]);
}

getch();
}