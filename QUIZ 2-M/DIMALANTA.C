#include<stdio.h>
main()
{
long num[100],digit[100],factor[100],rem[100];
long i,size=0,f,h,p,n;
clrscr();

printf("Enter Numbers:");

	for(i=0;;i++)
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
    n=num[i];
   p=n;
    digit[i]=0;
    for(;n!=0;)
    {
    n=n/10;
    digit[i]++;
    }
  f=0;
  h=2;
  factor[i]=0;
  for(;p!=0;)
  {
    if(p%h==0)
    {
    p=p/h;
    rem[f]=h;
    f++;
    factor[i]++;
    if(p==1)
      {
      break;
      }
    }
  else
    {
    h++;
    }
  }
 }
 printf("1-Non-Wasteful Numbers:");
 for(i=0;i<size;i++)
      {

      if(factor[i]<=digit[i])
	{
	printf(" %ld",num[i]);
	}
      }
 printf("\n2-Wasteful Numbers:");
 for(i=0;i<size;i++)
    {
    if(factor[i]>digit[i])
       {
       printf(" %ld",num[i]);
	}
       }
    getch();
     }