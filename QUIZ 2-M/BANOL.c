#include<stdio.h>
main()
{

long n,digit,x,temp,factor,t,i,j,k;

long count,num[1000],banol[1000],w[1000],rem[1000],r=0,m=0;

clrscr();

count=0;

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

for(;x!=0;)
{
	if(x%i==0)
	      {
		x=x/i;

		rem[t]=i;

		t++;

		factor++;

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
if(factor>digit){

	    w[r]=num[k];

	     r++;

}

if(factor<=digit)

    {
	 banol[m]=num[k];

	 m++;

}

}

printf("\n1.Non-Wasteful Number:---->>> ");





for(i=0;i<m;i++)
{
   printf(" %ld",banol[i]);
}


printf("\n");


printf("\n");





printf("\n2.Wasteful Number:------>>>>> ");


for(i=0;i<r;i++)
{
   printf(" %ld",w[i]);
}

getch();
}
