#include<stdio.h>
main()
{

long a,s,t,i,j,g;
long factor,digit,count,temp,m=0,n=0;
long rem[1000],waste[100],non[100],num[1000];

clrscr();

count=0;
printf("Please Input Number :):\n");
for(g=0;;g++)
 {
  scanf("%ld",&num[g]);
  count++;
  if(num[g]==0)
  {
  break;
  }
 }

for(g=0;g<count-1;g++)
 {
  digit=0;
  a=num[g];
  s=a;

  for(;a!=0;)
   {
    a=a/10;
    digit++;
   }

  t=0;
  i=2;
  factor=0;

  for(;s!=0;)
   {
    if(s%i==0)
   {
    s=s/i;
    rem[t]=i;
    t++;
    factor++;

	if(s==1)
	{
	 break;
	}
   }
   else
   {
    i++;
   }
 }

if(factor>digit)
 {
  waste[n]=num[g];
  n++;
 }

if(factor<=digit)
 {
 non[m]=num[g];
 m++;
 }
}

printf("\n\t1) NON-WASTEFUL NUMBER/s: ");
for(i=0;i<m;i++)
 {
  printf("\n\t\t%ld",non[i]);
 }

printf("\n\n\t2) WASTEFUL NUMBER/s: ");
for(i=0;i<n;i++)
 {
  printf("\n\t\t%ld",waste[i]);
 }

printf("\n\n\t\t\tCongrats Your code is running... :) :) :)");

getch();
}
