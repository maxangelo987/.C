#include<stdio.h>
main()
{

long n,digit,x,temp,rem[1000],waste[100],non[100],factor,t,i,j,k,m=0,r=0;
long count,num[1000];

clrscr();

count=0;
printf("Input Number: ");
for(k=0;;k++){
	scanf("%ld",&num[k]);
	count++;
	if(num[k]==0){
	break;
	}
}
for(k=0;k<count-1;k++){

digit=0;
n=num[k];
x=n;
for(;n!=0;){
	n=n/10;
	digit++;
	}

t=0;
i=2;
factor=0;
for(;x!=0;){
	if(x%i==0){
	x=x/i;
	rem[t]=i;
	t++;
	factor++;

	if(x==1){
	break;
	}
}
else
{
i++;
}
}
if(factor>digit){
waste[r]=num[k];
r++;
}

if(factor<=digit){
non[m]=num[k];
m++;
}
}

printf("\n1.Non-Wasteful: ");
for(i=0;i<m;i++)
{
    for(j=0;j<m;j++)
    {
	if(non[i]<non[j])
	{
	    temp=non[i];
	    non[i]=non[j];
	    non[j]=temp;
	}
    }
}
for(i=0;i<m;i++)
{
   printf("\n%ld",non[i]);
}
printf("\n2.Wasteful: ");
for(i=0;i<r;i++)
{
    for(j=0;j<r;j++)
    {
      if(waste[i]<waste[j])
      {
	temp=waste[i];
	waste[i]=waste[j];
	waste[j]=temp;
      }
    }
}
for(i=0;i<r;i++)
{
   printf("\n%ld",waste[i]);
}

getch();
}
