#include<stdio.h>
main(){

long num[1000],z,grant[100],t,x,greg[100],y,n,rem[1000];
long size=0,i;
clrscr();

printf("Inputs:\n");

for(i=0; ;i++)
	{
	scanf("%ld",&num[i]);
	if(num[i]==0)
		{
		break;
		}
	      size++;
	}

 for(i=0;i<size;i++)
 {
       grant[i]=0;
       n=num[i];
       x=n;
 for(;n!=0;)
      {
	 n=n/10;
	 grant[i]++;
      }

 t=0;
 z=2;
 greg[i]=0;
 for(;x!=0;)
   {
    if(x%z==0)
     {
       x=x/z;
       rem[t]=i;
       t++;
       greg[i]++;
     if(x==1)
	{
	break;
	}
      }
 else
 {
    z++;
       }
    }
 }

printf("\nNon-Wasteful Numbers: \n");
   for(i=0;i<size;i++)
    {
       if(greg[i]<=grant[i])
	 {
	 printf("%ld ",num[i]);
	 }
     }

printf("\n\nWasteful Numbers: \n");

for(i=0;i<size;i++)
 {
  if(greg[i]>grant[i])
     {
       printf("%ld ",num[i]);
     }
 }


 getch();
 }



