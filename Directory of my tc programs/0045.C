/* (45) Converting number to words.
Ex: 45 - fourty five
(switching, for loop functions) <Comp1/MATH1> */

#include<stdio.h>
main()
{
int  n,h,q2,r,t,o,x;
clrscr();
printf("Enter a number:");
scanf("%d",&n);

h=n/100;
x=n%100;
q2=x;

if ((q2>10)&&(q2<20))
{
x=n%10;
r=x;
t=0;
o=0;
}

else
{
t=x/10;
n=x%10;
o=n;
}

switch(h)
{
case 1:strcpy(word1,"one hundred ");i1=strlen(word1); break;
case 2: strcpy(word1,"two hundred "); i1=strlen(word1);break;
case 3: strcpy(word1,"three hundred "); i1=strlen(word1);break;
case 4: strcpy(word1,"four hundred "); i1=strlen(word1); break;
case 5: strcpy(word1,"five hundred ");i1=strlen(word1); break;
case 6: strcpy(word1,"six hundred ");  i1=strlen(word1);break;
case 7: strcpy(word1,"seven hundred "); i1=strlen(word1); break;
case 8: strcpy(word1,"eight hundred "); i1=strlen(word1); break;
case 9: strcpy(word1,"nine hundred "); i1=strlen(word1);break;
}

switch(r)
{
case 1: strcpy(word2,"eleven ");i2=strlen(word2); break;
case 2: strcpy(word2,"twelve ");i2=strlen(word2) break;
case 3: strcpy(word2,"thirteen "); i2=strlen(word2)break;
case 4: strcpy(word2,"forteen "); i2=strlen(word2) break;
case 5: strcpy(word2,"fifteenn "); i2=strlen(word2)break;
case 6: strcpy(word2,"sixteen "); i2=strlen(word2) break;
case 7: strcpy(word2,"seventeen "); i2=strlen(word2) break;
case 8: strcpy(word2,"eighteen "); i2=strlen(word2) break;
case 9: strcpy(word2,"nineteen ");i2=strlen(word2) break;
}

switch(t)
{
case 1: strcpy(word3,"ten ");i3=strlen(word3); break;
case 2: strcpy(word3,"twenty "); i3=strlen(word3);break;
case 3: strcpy(word3,"thirty ");i3=strlen(word3); break;
case 4: strcpy(word3,"forty "); i3=strlen(word3); break;
case 5: strcpy(word3,"fifty "); i3=strlen(word3);break;
case 6: strcpy(word3,"sixty "); i3=strlen(word3); break;
case 7: strcpy(word3,"seventy "); i3=strlen(word3); break;
case 8: strcpy(word3,"eighty "); i3=strlen(word3); break;
case 9: strcpy(word3,"ninety "); i3=strlen(word3);break;
}

switch(o)
{
case 1: strcpy(word3,"one");i3=strlen(word3); break;
case 2: strcpy(word3,"two");i3=strlen(word3); break;
case 3: strcpy(word3,"three");i3=strlen(word3); break;
case 4: strcpy(word3,"four"); i3=strlen(word3);break;
case 5: strcpy(word3,"five"); i3=strlen(word3);break;
case 6: strcpy(word3,"six");; i3=strlen(word3);break;
case 7: strcpy(word3,"seven");i3=strlen(word3); break;
case 8: strcpy(word3,"eight");i3=strlen(word3); break;
case 9: strcpy(word3,"nine"); i3=strlen(word3);break;
}


strcpy(word," ")

if(h<0)
	{
	strcat(fword,word1)
	}
if(r<0)
	{
	strcat(fword,word2)
	}

if(t<0)
	{
	strcat(fword,word3)
	}
if(o<0)
	{

	strcat(fword,word3)
	}

w=strlen(fword);


for(j=0;j<w;j++)
{
if((fword[j]=='e')||(fword[j]=='E'))

	{
	
	count++;
	}

if(count==0)
	{
	printf("NOT E-BAN");
	}
else
{
printf("E-BAN");
}

}





getch();
}