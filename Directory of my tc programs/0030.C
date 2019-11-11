/* (30) Sorting numbers.
(void, do-while loop functions) <Comp1> */


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
 int o=0, l;
 char  ch;

 clrscr();
 Arr[o] = 1;
 printf("\n\n\nTYPE THE NUMDERS TO BE SORTED.");
 printf("\n\n\nIf you want to sort press 'e'\n\n");

 do
 {
 scanf("%d", &Arr[o]);
 o++;
 }
 while( Arr[o-1]>0 );
 l = o - 1;
 return l;
 }

 void BSort(Dim Arr, int ArraySize)
 {
 int pass, pos=0;
 int o, temp;

 clrscr();
 for(pass=0; pass<ArraySize; pass++)
 for(pos=ArraySize-2; pos>=pass; pos--)
 if( Arr[pos] > Arr[pos+1] )
 {
 temp = Arr[pos];
 Arr[pos] = Arr[pos + 1];
 Arr[pos + 1] = temp;
 }
 printf("\nThe array in sorted order.\n");
 for(o=0; o<=ArraySize-1; o++)
 printf("\n%d", Arr[o]);
 }
