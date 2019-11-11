#include<stdio.h>
main()
 { int num[5],i,sum=0,ave;
 clrscr();
 printf("ENTER FIVE VALUES:");
 for(i=0;i<5;i++)
 scanf("%d",&num[i]);
 for(i=0;i<5;i++) {
 sum+=num[i];
 }
 printf(" \n THE SUM IS: %d",sum);
 for(i=0;i<5;i++) {
 ave=sum/5.0;
 }
 printf(" \n THE AVERAGE IS: %d",ave);
 getch();
 }