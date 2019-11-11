#include<stdio.h>
main(){
long k,range=0,n,x,t,i,j;
long num[1000],rem[1000],digit[1000],factor[1000];
clrscr();

for(k=0;;k++)
{
scanf(" %ld",&num[k]);
if(num[k]==0)
{
break;
}
range++;
}
for(k=0;k<range;k++)
{
digit[k]=0;
n=num[k];
x=n;
for(;n!=0;)
{
n=n/10;
digit[k]++;
}
t=0;
i=2;
factor[k]=0;
for(;x!=0;)
{
if(x%i==0)
{
x=x/i;
rem[t]=i;
t++;
factor[k]++;
if(x==1)
{
break;
}
}
else
{
i++;
}
}
}
printf("1-not wasteful: ");
for(k=0; k<range;k++)
{
if(digit[k]>=factor[k])
{
printf(" %ld",num[k]);
}
}
printf("\n2-wasteful:");
for(k=0;k<range;k++)
{
if(factor[k]>digit[k])
{
printf(" %ld", num[k]);
}
}

getch();
}