#include<stdio.h>
main()
{
long num[100], digit[100], factor[100], rem[100];
long i, size=0, a, b, c, n;
clrscr();

printf("INPUTS:");

   for (i=0;;i++)
      {
	scanf("%ld", &num[i]);
	if(num[i]==0)
	   {
	     break;
	   }
	size++;

      }

    for (i=0; i<size; i++)

       {
	 n=num[i];
	 c=n;
	 digit[i]=0;

	 for (;n!=0;)
	   {
	   n=n/10;
	   digit[i]++;
	   }
	   a=0;
	   b=2;
	   factor[i]=0;
	     for(;c!=0;)
	     {
	     if (c%b==0)
	      {
	       c=c/b;
	       rem[a]=b;
	       a++;
	       factor[i]++;
	       if (c==1)
		 {
		 break;
		 }
	      }
	    else
	    {
	    b++;
	    }
	     }
       }



	   printf("1 = NON-WASTEFUL NUMBER(S):");
	     for (i=0; i<size; i++)
	       {
		 if (factor[i]<=digit[i])
		   {
		   printf("  %ld  ", num[i]);
		   }
	       }

	    printf("\n2= WASTEFUL NUMBER(S):");
	     for (i=0; i<size; i++)
	       {
		if (factor[i]>digit[i])

		  {
		     printf("  %ld  ", num[i]);
		  }
	       }







getch();

}