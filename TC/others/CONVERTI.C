#include<stdio.h>
#include<string.h>
main() {
	char number;
	clrscr();
	scanf("%c",&number);
	number = (int) number - 48;
	printf ("The Output : %d",number);
	getch();
	}
