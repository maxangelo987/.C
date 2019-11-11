/*
d=2
arr[d]=[2,3,5]

g=3
inp[g]=[2,3,2,5]

Output: 2, 3,5  */



#include<stdio.h>
main()
{

int str1[100],str2[100],str3[100];
int d,g,i,k,flag,j;
clrscr();

printf("d=");
scanf("%d",&d);

for (i=0;i<=d;i++)
	{
	scanf("%d",&str1[i]);
	}

printf("g=");
scanf("%d",&g);

for (i=0;i<=g;i++)
	{
	scanf("%d",&str2[i]);
	}


k=0;
for (i=0;i<=d;i++)
	{
	str3[k]=str1[i];
	k++;
	}

for (i=0;i<=g;i++)
	{
	flag=0;
	for (j=0;j<=d;j++)
		{
		if (str2[i]==str3[j])
			{
			flag=1;
			break;
			}
		}
	if (flag==0)
		{
		str3[k]=str2[i];
		k++;
		}
	}


printf("Output:");
for (i=0;i<k;i++)
	{
	printf("%d ",str3[i]);
	}


getch();
}