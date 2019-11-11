/* (34) Reversing the whole number in float.
EX: 1234.33 4321.33 
(for loop, nested-for loop, array functions) <Comp1/MATH1> */

#include<stdio.h>
#include<math.h>
main()
{

double x[100],ans[100],sum2[100];
long i,rev[100],j,sum[100],k,sum1[100],count[1000];
long b,l[100],n[100],y[100],z[100];
clrscr();

printf("Input(s):\nPress O to stop.\n");
for (i=0;;i++)
	{
	count[i]=-1;
	scanf("%lf",&x[i]);
	y[i]=(long)x[i];
	ans[i]=x[i]-y[i];

	z[i]=y[i];
	if (x[i]==0)
		{
		break;
		}
	}

for (i=0;;i++)
		{
		if (ans[i]!=0)
			{
			n[i]=y[i];
				for (;n[i]!=0;)
				{

				n[i]=n[i]/10;
				count[i]=count[i]+1;
				}

			}


		else if (y[i]==0)
			{
			break;
			}

		}
for (i=0;;i++)
	{
	if (y[i]==0)
		{
		break;
		}
	else
		{
			j=0;
			for (;y[i]!=0;)
				{
				rev[j]=y[i]%10;
				y[i]=y[i]/10;
				j++;
				}

			l[i]=0;

			for (j=0;;j++)
				{
				b=pow(10,count[i]);
				sum[i]=b*(rev[j]);
				sum1[i]=sum[i]+l[i];
				l[i]=sum1[i];
				count[i]=count[i]-1;

				if (count[i]<0)
					{
					break;
					}

				}




		}

	}


printf("Output(s): \n");

if (x[0]==0)
	{
	printf("Why so early to press ZERO? Goodbye! :3");
	}


else {
for (i=0;;i++)
	{
	sum2[i]=sum1[i]+ans[i];

	if (x[i]!=0)
		{
		if (ans[i]!=0)
			{
			printf(" %.6lf ",sum2[i]);
			}

		else if (ans[i]==0)
			{
			printf(" %ld ",z[i]);
			}

		}
	else
		{
		break;
		}
	}
}

getch();

}