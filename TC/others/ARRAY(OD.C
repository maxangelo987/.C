#include<stdio.h>
main()
 { int num[3][4];
  int r,c,mod;
  clrscr();
  printf("ENTER TWELVE VALUES:");
  for(r=0;r<3;r++)
   for(c=0;c<4;c++)
  scanf("%d",&num[r][c]);
  if(num[r][c]>12)
   num[r][c]=12;
  printf("THE LIST OF ODD NUMBERS:");
  for(r=0;r<3;r++)
   for(c=0;c<4;c++) {
    mod=num[r][c]%2;
    if(mod!=0)
  printf(" %d",num[r][c]);
  }
  getch();
  }