/* (71) Computer Shutdown.
(system function) <Comp1/CpE211> */

#include<stdio.h>
main()
{

char ac;

clrscr();

printf("Do you want to shut down PC? Press [Y] and [N]: ");
scanf("%c",&ac);

if (ac=='Y'||ac=='y')
	{
	system("C:\\WINDOWS\\System32\\shutdown -s");
	}

else
	{
	printf("OK! ");
	}

getch();
}