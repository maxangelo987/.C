#include<stdio.h>
main()
 { int num[3][4],r,c,nos;
 clrscr();
 printf("ENTER A TWELVE VALUES:");
 for(r=0;r<3;r++)
  for(c=0;c<4;c++)
 scanf("%d",&num[r][c]);
 printf("ENTER A NUMBER TO BE SEARCH:");
 scanf("%d",&nos);
 if(nos=num[r][c]) {
 printf("THE SEARCH IS FOUND!!!");
 }
 if(nos!=num[r][c]) {
 printf("THE SEARCH IS LOST");
 }
getch();
}

