/* (76) Enter 2 strings determine if anagrams
(array,strings, for loop functions) <Comp1/Engl1> */


#include<stdio.h>
main()
{

char s1[100];
char s2[100];
int i,j,isanag=0;
clrscr();

printf("Enter 1st String: ");
gets(s1);

printf("Enter 2nd String: ");
gets(s2);


if(strlen(s1)!=strlen(s2))
    printf("Not anagrams\n");

for(i=0;i<strlen(s1);i++)
{
    isanag=0;
    for(j=0;j<strlen(s2);j++)
    {
        if(s1[i]==s2[j])
        {
            isanag = 1;
            break;
        }
    }
    if(isanag == 0)
    {
        printf("Not anagrams\n");
        getch();
        exit(0);
    }

}

printf("Yes Anagrams\n");

getch();

}