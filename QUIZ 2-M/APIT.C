#include<stdio.h>

main()
{

 long int n,digit,r=0,z=0;
 long int x,num[100],i,j,factors;
 long int count,Pr[100],t;
 long int wnum[100],nwnum[100];

 clrscr();
 count=0;
 printf("Enter a number:");
 for(j=0;;j++)
 {
  scanf("%ld",&num[j]);
  count++;
     if(num[j]==0)
     {
      break;
     }
 }
	for(j=0;j<count-1;j++)
	{
	/*digit counting*/
	 digit=0;
	 n=num[j];
	 x=n;
	 for(;x!=0;)
	 {
	  x=x/10;
	  digit++;
	 }

   /*prime factorization*/
   i=2;
   t=0;
   factors=0;
   for(;n!=0;)
   {
    if(n % i == 0)
    {
     n=n/i;
     Pr[t]=i;
     t++;
     factors++;
      if(n==1)
      {
      break;
      }
    }
    else
    {
    i++;
    }
   }

   if(factors>digit)
   {
    wnum[z]=num[j];
    z++;
   }

   if(factors<=digit)
   {
    nwnum[r]=num[j];

    r++;
   }
	}
	printf("1-Non-Wasteful number:");

    for(i=0;i<r;i++)
    {
     printf("  %ld",nwnum[i]);
    }
    printf("\n");
    printf("2-wasteful Numbers:");

    for(i=0;i<z;i++)
    {
     printf("% ld",wnum[i]);

    }

getch();
}