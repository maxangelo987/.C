/* (23) Input float numbers then just get the whole part. 
(array, for loop functions) <Comp1> */

#include<stdio.h>
main()
{


double x[1000],ans[1000];
long i=0, y[1000],n[1000],l,j,count[1000];
clrscr();

printf("Program that you will input float numbers then just get the whole part.\n");
printf("Input inputs:\nPress [0] to end inputs!\n ");


for (i=0;;i++)
	{
	scanf("%lf",&x[i]);
	if (x[i]==0)
		{
		break;
		}
	y[i]=(long)x[i];
	ans[i]=x[i]-y[i];

	 }
if (x[0]==0)
	{
	printf("Your Early too press zero.");
	}
	
for (i=0;;i++)
		{
		n[i]=x[i];
		for (;n[i]!=0;)
			{

			n[i]=n[i]/10;
			count[i]=count[i]+1;
			}

		if (x[i]==0)
			{
			break;
			}

		}

for (i=0;;i++)
	{
	if (x[i]==0)
		{
		break;
		}
	else if (ans[i]==0) 
		{
			
			
		}



	else if (ans[i]!=0)
		{
		printf(" %ld ",y[i]);

		}
	}



getch();
}