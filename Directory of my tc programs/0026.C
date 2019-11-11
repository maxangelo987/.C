/* (26) Decimal to Binary.
(array, while loop, for loop functions) <Comp1/Comptech3/CpE321> */


#include <stdio.h>
#include <conio.h>
#define SIZE 15
main()
{
 int i=0, number=0, counter;
 int ans[SIZE];

 clrscr();
 printf("Enter a number: ");
 scanf("%d", &number);
 while(number>1){
   ans[i] = number % 2;
   i++;
   number = number / 2;
 }

 if(number==1)
  ans[i] = 1;

 for(counter=i; counter>=0; counter--)
   printf("%d", ans[counter]);

 getch();
}


