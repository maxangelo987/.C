/* (20) Determining every sum you inputed numbers if it is Prime or Not. 
(nested-for loop function) <Comp1/MATH1> */

#include<stdio.h>
#include<conio.h>
main()
{


long maxinp, ans1,i,j, a,occur=0,n,rev,p=0,sum,count=0,inp2;
double inp0,ans2;
clrscr();

printf("Program to determine every sum you inputed numbers if it is Prime or Not. \n");
printf("No's of inputs: ");
scanf("%ld",&maxinp);

printf("Input: ");
for (a=1;a<=maxinp;a++)
{
	scanf("%lf",&inp0);
	inp2=(long)inp0;
	ans1=(long)inp0;
	ans2=inp0-ans1;


	if (ans2==0)
		{
		sum=0;
		n=ans1;
		for(;n!=0;)
			{
			rev=n%10;
			n=n/10;
			sum=rev+p;
			p=sum;
			}
			printf("SUM=%ld\t",sum);
		for (i=2;i<sum;i++)
			{
			 if (sum%i==0)
				{
				count++;
				}
			}




			if (count==0)
				{
				printf("Prime: %ld \n",sum);
				sum=0;
				}
			else
				{
				printf("\n");
				}
		}



	else
		{
		printf("No\n");
		}


}






getch();
}