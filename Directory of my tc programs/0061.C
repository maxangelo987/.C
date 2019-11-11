/* (61) Determine the Happy Numbers and its
Prime Factors
(nested if, infinite for loop functions) <Comp1/MATH1> */


#include<stdio.h>
main()
{
int temp,num,rem,rem1[10000],qout,sum,i,count,p;
int l,x,y,j=0,count1=0,happy[10000],h,count2;
clrscr();
printf("Enter range of numbers:");
scanf("%d",&x);
printf("\t\tto ");
scanf("%d",&y);

for(l=x;l<=y;l++)
{

temp=l;
num=l;

for(;;)
	{
	count=0;
	for(i=0;num!=0;i++)
		{
		rem=num%10;
		qout=num/10;
		num=qout;
		rem1[i]=rem;
		count++;
		}

	sum=0;
	for(i=0;i<count;i++)
		{
		p=rem1[i]*rem1[i];
		sum=sum+p;
		}



	if(sum==1)
		{
		happy[j]=temp;
		j++;
		count1++;
		break;
		}

	else if(sum==145)
		{
		break;
		}

	num=sum;

	}
}

	for (j=0;j<count1;j++)
		{


		h=2;
		printf("Happy number %d has a prime factors: 1 ",happy[j]);

		for (;happy[j]!=0;)
			{
			if (happy[j]==1)
				{
				break;
				}
			else
			{

			if (happy[j]%h==0)
					{
					happy[j]=happy[j]/h;
					printf(" %d ",h);

						if (happy[j]==1||happy[j]==0)
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

		printf("\n");
		}

getch();
}
