/* (51) EBAN numbers:
Ex: 45 - fourty fiv(e)
Out: EBAN
(switching, for loop, strcpy, strcat functions) <Comp1/MATH1> */

#include<stdio.h>
main()
{
long x,th,rem,h,rem1,f,rem2,t,i,j,count=0,w;
long rem3,v,rem4,i2,i3,i4;
char fword[1000],word1[1000],word2[100],word3[100],word4[100];
clrscr();

printf("Enter Number:");
scanf("%ld",&x);


th=x/1000;
rem=x%1000;

h=rem/100;
rem1=rem%100;

f=rem1/10;
rem2=rem1%10;

if(rem2>20&&rem2>10)
{
t=rem2/1;
rem3=rem2/1;
}

else
{
v=rem2/1;
rem4=rem2%1;
}

switch(th)
{
case 9: strcpy (word1,"nine thousand ");i=strlen(word1);break;
case 8: strcpy(word1," eight thousand ");i=strlen(word1);break;
case 7: strcpy(word1," seven thousand ");i=strlen(word1);break;
case 6: strcpy(word1," six thousand ");i=strlen(word1); break;
case 5: strcpy(word1," five thousand ");i=strlen(word1);break;
case 4: strcpy(word1," four thousand ");i=strlen(word1);break;
case 3: strcpy(word1," three thousand ");i=strlen(word1);break;
case 2: strcpy(word1," two thousand ");i=strlen(word1); break;
case 1: strcpy(word1," one thousand ");i=strlen(word1);break;


}

switch(h)
{
case 9: strcpy(word2," nine hundred ");i2=strlen(word2);break;
case 8: strcpy(word2, "eight hundred ");i2=strlen(word2);break;
case 7: strcpy(word2," seven hunded");i2=strlen(word2);break;
case 6: strcpy(word2," six hundred ");i2=strlen(word2);break;
case 5: strcpy(word2," five hundred");i2=strlen(word2);break;
case 4: strcpy(word2," four hundred");i2=strlen(word2);break;
case 3: strcpy(word2," three hundred ");i2=strlen(word2);break;
case 2: strcpy(word2," two hundred ");i2=strlen(word2);break;
case 1: strcpy(word2," one hundred ");i2=strlen(word2);break;
}

switch(f)
{
case 9: strcpy(word3," ninety ");i3=strlen(word3);break;
case 8: strcpy(word3," eighty ");i3=strlen(word3);break;
case 7: strcpy(word3," seventy ");i3=strlen(word3);break;
case 6: strcpy(word3," sixty ");i3=strlen(word3); break;
case 5: strcpy(word3," fifty ");i3=strlen(word3);break;
case 4: strcpy(word3," fourty ");i3=strlen(word3);break;
case 3: strcpy(word3," thirty ");i3=strlen(word3);break;
case 2: strcpy(word3," twenty ");i3=strlen(word3);break;
}

switch(t)
{
case 9: strcpy(word4," nineteen ");i4=strlen(word4);break;
case 8: strcpy(word4," eighteen ");i4=strlen(word4);break;
case 7: strcpy(word4," seventeen ");i4=strlen(word4);break;
case 6: strcpy(word4," sixteen ");i4=strlen(word4); break;
case 5: strcpy(word4," fifteen ");i4=strlen(word4); break;
case 4: strcpy(word4,"fourteen ");i4=strlen(word4);break;
case 3: strcpy(word4," thirteen ");i4=strlen(word4);break;
case 2: strcpy(word4," twelve ");i4=strlen(word4);break;
case 1: strcpy(word4," eleven ");i4=strlen(word4);break;
}

switch(v)
{
case 9: strcpy(word4," nine ");i4=strlen(word4);break;
case 8: strcpy(word4," eight ");i4=strlen(word4);break;
case 7: strcpy(word4," seven ");i4=strlen(word4);break;
case 6: strcpy(word4," six ");i4=strlen(word4);break;
case 5: strcpy(word4," five ");i4=strlen(word4);break;
case 4: strcpy(word4," four ");i4=strlen(word4);break;
case 3: strcpy(word4," three ");i4=strlen(word4);break;
case 2: strcpy(word4," two ");i4=strlen(word4);break;
case 1: strcpy(word4," one ");i4=strlen(word4);break;

}

strcpy(fword," ");

if(th>0)
	{
	strcat(fword,word1);
	}
if(h>0)
	{
	strcat(fword,word2);
	}

if(f>0)
	{
	strcat(fword,word3);
	}
if(t>0)
	{
	strcat(fword,word4);
	}
if(v>0)
	{
	strcat(fword,word4);
	}


w=strlen(fword);
for(j=0;j<w;j++)
	{
	if((fword[j]=='e')||(fword[j]=='E'))
		{
		count++;
		}
	}


if(count==0)
	{
	printf("NOT E-BAN");
	}



else
	{
	printf("E-BAN");
	}


getch();









}