/* (55) CAIPHERTEXT: Encrypt and Decrypt
(switching function) <Comp1/Engl1> */

#include<iostream>
main()
{

char str[100],x,q;
long f,y;
clrscr();

cout<<"Enter a Word: ";
gets(str);
y=strlen(str);

printf("A- Encrypt\nB- Decrypt");
printf("\nAccess= ");
scanf("%c",&q);


if (q=='A'||q=='a')
{

printf("Encrypt: ");
for (f=0;f<y;f++)
{

x=str[f];

switch (x)
{
case 'A': case 'a': printf("E"); break;
case 'B': case 'b': printf("F"); break;
case 'C': case 'c': printf("G"); break;
case 'D': case 'd': printf("H"); break;
case 'E': case 'e': printf("I"); break;
case 'F': case 'f': printf("J"); break;
case 'G': case 'g': printf("K"); break;
case 'H': case 'h': printf("L"); break;
case 'I': case 'i': printf("M"); break;
case 'J': case 'j': printf("N"); break;
case 'K': case 'k': printf("O"); break;
case 'L': case 'l': printf("P"); break;
case 'M': case 'm': printf("Q"); break;
case 'N': case 'n': printf("R"); break;
case 'O': case 'o': printf("S"); break;
case 'P': case 'p': printf("T"); break;
case 'Q': case 'q': printf("U"); break;
case 'R': case 'r': printf("V"); break;
case 'S': case 's': printf("W"); break;
case 'T': case 't': printf("X"); break;
case 'U': case 'u': printf("Y"); break;
case 'V': case 'v': printf("Z"); break;
case 'W': case 'w': printf("A"); break;
case 'X': case 'x': printf("B"); break;
case 'Y': case 'y': printf("C"); break;
case 'Z': case 'z': printf("D"); break;
case ' ': printf(" "); break;

}

}
}


else if (q=='B'||q=='b')
{
printf("Decrypt! ");
for (f=0;f<y;f++)
{

x=str[f];

switch (x)
{
case 'A': case 'a': printf("W"); break;
case 'B': case 'b': printf("X"); break;
case 'C': case 'c': printf("Y"); break;
case 'D': case 'd': printf("Z"); break;
case 'E': case 'e': printf("A"); break;
case 'F': case 'f': printf("B"); break;
case 'G': case 'g': printf("C"); break;
case 'H': case 'h': printf("D"); break;
case 'I': case 'i': printf("E"); break;
case 'J': case 'j': printf("F"); break;
case 'K': case 'k': printf("G"); break;
case 'L': case 'l': printf("H"); break;
case 'M': case 'm': printf("I"); break;
case 'N': case 'n': printf("J"); break;
case 'O': case 'o': printf("K"); break;
case 'P': case 'p': printf("L"); break;
case 'Q': case 'q': printf("M"); break;
case 'R': case 'r': printf("N"); break;
case 'S': case 's': printf("O"); break;
case 'T': case 't': printf("P"); break;
case 'U': case 'u': printf("Q"); break;
case 'V': case 'v': printf("R"); break;
case 'W': case 'w': printf("S"); break;
case 'X': case 'x': printf("T"); break;
case 'Y': case 'y': printf("U"); break;
case 'Z': case 'z': printf("V"); break;
case ' ': printf(" "); break;

}

}


}

getch();
}
