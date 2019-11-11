#include<stdio.h>
main()
{
  int num[100],pfactor[100],check[100],digits[100],final[100],ans[100],round[100];
  int i,j,rem,temp;
  int limit=0,count=0,factor=1,finally=0,checker=0;
  clrscr();


  printf("enter number: ");

  for(i=0; i<100; i++)
  {
     scanf("%d",&num[i]);

     if(num[i] == 0)
     {
      break;
     }
     pfactor[i] = num[i];
     check[i] = num[i];
     limit++;
  }


  for(i=0; i<limit; i++)
  {
     while(num[i] != 0)
     {
     num[i] = num[i] / 10;
     count++;
     }

     digits[i] = count;
     count=0;



  }





  for(i=0; i<limit; i++)
  {
	if( pfactor[i] > digits[i])
	{

		for(j=0; j<100; j++)
		{
			rem = pfactor[i] % 2;
			pfactor[i] = pfactor[i] / 2;

			if ( rem !=0 )
			{
			 checker++;
			 if(checker == 1)
			 {
			  ans[j] = check[i];
			  round[i] = checker;

			 }
			 ask[j] = pfactor[i];
			 checker = 0;
			 break;
			}
			ask[j] = digits[i];
			factor++;
		}


		j=0;
	}

	if( factor > digits[i])
	{
	 final[i] = factor;
	 finally++;
	}
	 temp = factor;

	 printf("%d = ",check[i]);
	 for(z=0; z<temp-1; z++)
	 {
	  printf("%d ",ask[i]);
	 }
	 printf("%d = %d factors\n",check[i],factor);
	 printf("%d = %d digits\n",check[i],digits[i]);
	 printf("\n\n\n");
	 factor = 1;




  }



  for(i=0; i<finally; i++)
  {
   printf("%d = wasteful number\n",check[i]);
  }

 getch();
}