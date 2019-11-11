#include<stdio.h>
main()
{
long num[100],digit[100],rem[100],fact[1000];
long i,a,b,x,y,range=0;
clrscr();

printf("Enter number/s: ");

for(i=0;;i++)
   {
    scanf("%ld",&num[i]);
      if(num[i]==0)
	{
	break;
	}
	range++;
    }

    for(i=0;i<range;i++)
    {
    a=num[i];
    b=a;
    digit[i]=0;

    for(;a!=0;)
    {
    a=a/10;
    digit[i]++;
    }

    x=0;
    y=2;
    fact[i]=0;
    for(;b!=0;)
    {
    if(b%y==0)
    {
    b=b/y;
    rem[x]=y;
    fact[i]++;
    if(b==1)
    {
    break;
    }
    }

    else
    {
    y++;
    }
    }
    }
   printf("OUTPUT:\n\t 1-NON WASTEFUL NUMBER/S:\n\t\t ");
   for(i=0;i<range;i++)
   {
   if(fact[i]<=digit[i])
   {
   printf("\t%ld ", num[i]);
   }
   }
   printf("\n\t 2-WASTEFUL NUMBER/S:\n\t\t ");
   for(i=0;i<range;i++)
   {
   if(fact[i]>digit[i])
   {
   printf("\t%ld ", num[i]);
   }
   }
   getch();
   }