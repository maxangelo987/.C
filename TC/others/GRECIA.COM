#include<stdio.h>
main()
 { int num;
 scanf("%d",& num);
 if(num>0){
 printf("Positive");
 }
 else {printf("Negative");
 }
 getch();
 }
