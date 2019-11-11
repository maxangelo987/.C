/* (63) CAIPHERTEXT: Encrypt and Decrypt
(switching function) <Comp1/Engl1> */

#include<stdio.h>
main()
{
long w,i;

char x[100],q,z;
clrscr();

printf("Enter a Word:");
gets(x);

w=strlen(x);

printf("ACCESS:");
scanf("%c",&q);

if((q=='a')||(q=='A'))
{
for(i=0;i<w;i++)
	{
	z=x[i];

switch(z)
{
case 'a':case 'A': printf("E");break;
case 'b':case 'B': printf("F");break;
case 'c':case 'C': printf("G");break;
case 'd':case 'D': printf("H");break;
case 'e':case 'E': printf("I");break;
case 'f':case 'F': printf("J");break;
case 'g':case 'G': printf("K");break;
case 'h':case 'H': printf("L");break;
case 'i':case 'I': printf("M");break;
case 'j':case 'J': printf("N");break;
case 'k':case 'K': printf("O");break;
case 'l':case 'L': printf("P");break;
case 'm':case 'M': printf("Q");break;
case 'n':case 'N': printf("R");break;
case 'o':case 'O': printf("S");break;
case 'p':case 'P': printf("T");break;
case 'q':case 'Q': printf("U");break;
case 'r':case 'R': printf("V");break;
case 's':case 'S': printf("W");break;
case 't':case 'T': printf("X");break;
case 'u':case 'U': printf("Y");break;
case 'v':case 'V': printf("Z");break;
case 'w':case 'W': printf("A");break;
case 'x':case 'X': printf("B");break;
case 'y':case 'Y': printf("C");break;
case 'z':case 'Z': printf("D");break;
case ' ': printf(" ");


}
}
}
if((q=='b')||(q=='B'))
{

for(i=0;i<w;i++)
{z=x[i];
{
switch(z)
{
case 'a':case'A': printf("W");break;
case 'b':case'B': printf("X");break;
case 'c':case'C': printf("Y");break;
case 'd':case'D': printf("Z");break;
case 'e':case'E': printf("A");break;
case 'f':case'F': printf("B");break;
case 'g':case'G': printf("C");break;
case 'h':case'H': printf("D");break;
case 'i':case'I': printf("E");break;
case 'j':case'J': printf("F");break;
case 'k':case'K': printf("G");break;
case 'l':case'L': printf("H");break;
case 'm':case'M': printf("I");break;
case 'n':case'N': printf("J");break;
case 'o':case'O': printf("K");break;
case 'p':case'P': printf("L");break;
case 'q':case'Q': printf("M");break;
case 'r':case'R': printf("N");break;
case 's':case'S': printf("O");break;
case 't':case'T': printf("P");break;
case 'u':case'U': printf("Q");break;
case 'v':case'V': printf("R");break;
case 'w':case'W': printf("S");break;
case 'x':case'X': printf("T");break;
case 'y':case'Y': printf("U");break;
case 'z':case'Z': printf("V");break;
case ' ':printf(" ");break;
}
}
}








}






getch();
}