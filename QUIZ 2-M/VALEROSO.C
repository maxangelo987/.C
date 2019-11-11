#include<stdio.h>
main()
{
   long x[100], real[100], dig[1000], rem[1000];
   long i, range=0, b, k, a, j;
     clrscr();

 printf("Enter a Number: ");

	for (i=0;;i++)
	{
	 scanf("%ld", &x[i]);
		if (x[i]==0)
		{
		 break;
		}
		  range++;
	}

	for (i=0;i<range; i++)
	{
	  a=x[i];
	  b=a;
	  dig[i]=0;

		for (;a!=0;)
		{
		 a=a/10;
		 dig[i]++;
		}
	k=0;
	j=2;
	real[i]=0;

		for (;b!=0;)
		{
			if (b%j==0)
			{
			b=b/j;
			rem[k]=j;
			k++;
			real[i]++;

				if(b==1)
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
    printf("OUTPUT: \n");
    printf(" * NON WASTEFUL NUMBER: ");

	for (i=0; i<range; i++)
	{
		if (real[i]<=dig[i])
		{
		 printf(" %ld ",x[i]);
	}
}
   printf("\n");
   printf(" ** WASTEFUL NUMBER: ");

	for (i=0; i<range; i++)
	{
	if (real[i]>dig[i]){
		printf(" %ld ", x[i]);
		}
	}

getch();
}

