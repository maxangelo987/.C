/* (40) A program that sorts a list of integer numbers. The list is
terminated with e at the end.
NOTE: The array is limited to the settings in SIZE constant. 
(void, do-while loop functions) <Comp1/MATH1> */

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

#define SIZE 25
typedef int Dim[SIZE];
Dim Arr;

int Entry(void);
void BSort(Dim Arr, int ArraySize);

main()
{
 int ArraySize;

 ArraySize = Entry();
 BSort(Arr, ArraySize);
 getch();
}

int Entry(void)
{
 int i=0, len;
 char ch;

 clrscr();
 Arr[i] = 1;
 printf("Enter the numbers below. End it with letter e.\n");
 do{
   scanf("%d", &Arr[i]);
   i++;
 }while( Arr[i-1]>0 );
 len = i - 1;
 return len;
}

void BSort(Dim Arr, int ArraySize)
{
 int pass, pos=0;
 int i, temp;

 clrscr();
 for(pass=0; pass<ArraySize; pass++)
   for(pos=ArraySize-2; pos>=pass; pos--)
     if( Arr[pos] > Arr[pos+1] ) {
       temp = Arr[pos];
       Arr[pos] = Arr[pos + 1];
       Arr[pos + 1] = temp;
     }
 printf("\nThe array in sorted order.\n");
 for(i=0; i<=ArraySize-1; i++)
    printf("\n%d", Arr[i]);
}