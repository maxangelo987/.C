#include<stdio.h>
main()
{
long real,i,range,base;
long num[1000],bin[1000],rem[1000];
clrscr();

scanf("%ld",&range);
real = 2;

for (i=0;i<range;i++){
	num[i]=real;
	real++;
	}

for (i=0;i<range;i++)
    {
    bin[i]=0;
    base=1;

    for (;num[i]>0;)
        {
        rem[i]=num[i]%2;
        bin[i]=bin[i]+rem[i]*base;
        base=base*10;
        num[i]=num[i]/2;
        }
    }

for (i=0;i<range;i++){
	printf(" %ld ",bin[i]);
	}

getch();
}