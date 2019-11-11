#include<stdio.h>
main()
{
long num[100],fact[100],dig[100],rem[100];
long i,range=0,n,x,u,j;
clrscr();
printf("ENTER NUMBERS:");

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
 n=num[i];
 x=n;
 dig[i]=0;
 for(;n!=0;)
   {
   n=n/10;
   dig[i]++;
   }
 u=0;
 j=2;
 fact[i]=0;
 for(;x!=0;)
    {
    if(x%j==0)
       {
       x=x/j;
       rem[u]=j;
       fact[i]++;
       if(x==1)
	  {
	  break;
	  }
       }
       else
	  {
	  j++;
	  }
       }
 }
printf("OUTPUT:\n 1- NON WASTEFUL NUMBER: \n");
for(i=0;i<range;i++)
  {
  if(fact[i]<=dig[i])
     {
     printf(" %ld",num[i]);
  }}
printf("\n 2-WASTEFUL NUMBER: \n");
for(i=0;i<range;i++)
  {
  if(fact[i]>dig[i])
     {
     printf(" %ld", num[i]);
     }
  }

getch();
}