#include<stdio.h>
main()
{
   long i, r, n, j, l, range=0;
   long num[1000], rem[100], factor[1000], digit[1000];
   clrscr();

   for(i=0;;i++)
   {
      scanf("%ld", &num[i]);
      if(num[i]==0)
      {
	 break;
	 }
      range++;
      }

   for(i=0; i<range; i++)
   {
       digit[i]=0;
       n=num[i];
       r=n;
       for(;n!=0;){
	  n=n/10;
	  digit[i]++;
       }

   j=0;
   l=2;
   factor[i]=0;
   for(;r!=0;)
   {
       if(r%l==0){
       r=r/l;
       rem[j]=l;
       factor[i]++;

       if(r==1){
	  break;
       }
   }

   else{
      l++;
      }
   }
 }
   printf(" 1 - Non-Wasteful: ");
   for(i=0; i<range; i++)
   {
	if(factor[i]<=digit[i]){
	printf(" %ld", num[i]);
	}
   }
   printf("\n2 - Wasteful: ");
   for(i=0; i<range; i++)
   {
	  if(factor[i]>digit[i]){
	  printf(" %ld", num[i]);
	  }
      }

   getch();
   }