/* (38) Binary to Octal
(for loop, array functions) <Comp1/Comptech3/CpE321> */

#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
#include<conio.h>
 main()
 {
 int i , n,l,t,x,temp,temp1=0;
 char  h,input[20];
 start:
 clrscr();
 {
 printf("\n\n\n\n\n\n\n\n\t\t\t\tCONVERTION PROGRAM");
 getche();
 }
 clrscr();

 begin:
 clrscr();
 {
 printf("\n\n\n\n\t\t\t\    - CONVERTION -");
 printf("\n\t\t\t\t-press any key-");
 scanf("%c",&h);
 if(h=='C')
 getche();
 {
 clrscr();
 printf("\n BINARY TO OCTAL");
printf("\nENTER BINARY NO'S.:");
scanf("%s",&input);
l=strlen(input);
n=0;
t = l - 1;
temp1= 0;
for(i=0;i<l;i++)
{
if(input[t]=='1')
{
temp=pow(2, i);
n=n+temp;
}
 temp1=temp1+1;
t =t-1;
}
printf("\nOCTAL VALUE:%o",n);
getche();

return 0;
}
}
}