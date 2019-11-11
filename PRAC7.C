#include<stdio.h>
main()
{
char str1[100],str2[100],str3[100];
long x1,x2,x3,i,min,max,mid;
clrscr();

printf("STRING1: ");
gets(str1);
x1=strlen(str1);
printf("STRING2: ");
gets(str2);
x2=strlen(str2);
printf("STRING3: ");
gets(str3);
x3=strlen(str3);

max=x1;

if (x2>max)
	{
	max=x2;
	}

if (x3>max)
	{
	max=x3;
	}

min=x1;
if (x2<min)
	{
	min=x2;
	}
if (x3<min)
	{
	min=x3;
	}


mid=x1;

if (x2!=min&&x2!=max)
	{
	mid=x2;
	}

if (x3!=min&&x3!=max)
	{
	mid=x3;
	}

if (min!=mid&&max!=mid&&min!=max)
{

if (min==x1)
	{
	printf("%s",str1);
	}
else if (min==x2)
	{
	printf("%s",str2);
	}
else if (min==x3)
	{
	printf("%s",str3);
	}

if (mid==x1)
	{
	printf("%s",str1);
	}
else if (mid==x2)
	{
	printf("%s",str2);
	}
else if (mid==x3)
	{
	printf("%s",str3);
	}

if (max==x1)
	{
	printf("%s",str1);
	}
else  if (max==x2)
	{
	printf("%s",str2);
	}
else if (max==x3)
	{
	printf("%s",str3);
	}

}

else
{

if (min==mid&&mid==max)
	{
	printf("%s%s%s",str1,str2,str3);
	}

else
{
if (x1==x2)
	{
	if (min==x1)
		{
		printf("%s%s%s",str1,str2,str3);
		}
	else
		{
		printf("%s%s%s",str3,str2,str1);
		}
	}
if (x2==x3)
	{
	if (min==x2)
		{
		printf("%s%s%s",str2,str3,str1);
		}
	else
		{
		printf("%s%s%s",str1,str2,str3);
		}
	}
if (x1==x3)
	{
	if (min==x1)
		{
		printf("%s%s%s",str1,str3,str2);
		}
	else
		{
		printf("%s%s%s",str2,str1,str3);
		}
	}
}
}
getch();
}