#include<stdio.h>
main()
{ int x,y,z,sum;
 clrscr();
 printf("Enter 3 numbers(1-10 only):");
 scanf("%d%d%d",&x,&y,&z);
 sum=x+y+z;
 if (sum<=21 && (x==1||y==1||z==1)) {
 sum=sum+10;
 if (sum>21) {
 sum=sum-10;
 }
 }
 printf("%d", sum);
 if (sum==21) {
 printf("GWAPA/GWAPO KA"); }
 else
 { printf(" MAOTON KA");
 }
 getch();
 }