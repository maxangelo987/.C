/* (64) Splitting String.
Example: Hello World
Out: Hello
World
(strtok, for loop functions) <Comp1/Engl1> */


#include<stdio.h>
#include<string.h>
main(){
char in1[50], in2[50], *ptr, *myword[20], myword2[100];
long a,b,i,c,x,d,cond,count[100];
clrscr();

gets(in1);

a=0;
ptr=strtok(in1, " ");
while(ptr!=NULL)
	{
	myword[a]=ptr;
	a++;
	ptr=strtok(NULL, " ");
	}


for (c=0;c<a;c++)
	{
	strcpy(myword2, myword[c]);
	x=strlen(myword2);


	count[c]=0;

    for(i=0; i<x+1; i++)
	   {
	   if (myword2[i]==myword2[i+1])
		{
		count[c]++;
		}
	   else if (myword2[i]==myword2[i+2])
		{
		count[c]++;
		}

	   }


    }

    for (i=0;i<a;i++)
	{
		printf("%s\n", myword[i]);
	}


    getch();
    }