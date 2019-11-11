#include<stdio.h>
main()
 { int num[5],i,low;
 clrscr();
 printf("ENTER FIVE VALUES:");
 for(i=0;i<5;i++)
  scanf("%d",&num[i]);
  if(num[i]>5)
  num[i]=5;
 for(i=0;i<5;i++) {
  if(low>num[i])
  low=num[i];
  }
  printf("\nTHE LOWEST NUMBER IS: %d",low);
 for(i=0;i<5;i++)
 printf("\nTHE DIFFERENCE IS:%d",num[i]-low);
 getch();
 }