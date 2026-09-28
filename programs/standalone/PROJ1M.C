#include<stdio.h>
main()
{
char str[100];
long i,x;
long counta,countb;

clrscr();

gets(str);
x=strlen(str);

counta=0;
countb=0;

for(i=0;i<x;i++)
	{
/*	printf("\n%c\n",str[i]);  */

	if (str[i]!='a'&&str[i]!='A')
		{
		if (str[i]!='b'&&str[i]!='B')
			{
			printf("CONTAINS OTHER LETTERS! ");
			break;
			}
		}
	else if (str[i]!='b'&&str[i]!='B')
		{
		if (str[i]!='a'&&str[i]!='A')
			{
			break;
			}
		}

	else
		{
		printf("\n%c\n",str[i]);
		if (str[i]=='a'||str[i]=='A')
			{
			counta++;
			}
		else if (str[i]=='b'||str[i]=='B')
			{
			countb++;
			}
		}

		printf("COUNT=a=%ld and b=%ld\n",counta,countb);

	if (counta==4||countb==4)
		{
		printf("%s REJECTS",str);
		break;
		}
	else
		{
		printf("STRING ACCEPTED! %s",str);
		}
	}

getch();
}