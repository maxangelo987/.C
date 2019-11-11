/* (48) Input string and arrange it alphabetical order
(array, nested for loop functions) <Comp1/Engl1> */

#include<stdio.h>
main()
{

char str[100];
int temp, i, j;
clrscr();

scanf("%s",&str);
for (i=0;i<strlen(str);i++)
	{
	for (j=0;j<strlen(str);j++)
		{
		if (str[i]<str[j])
			{
			temp=str[i];
			str[i]=str[j];
			str[j]=temp;
			}
		}
	}

printf("%s",str);



getch();
}