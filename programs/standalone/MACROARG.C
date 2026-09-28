#include<stdio.h>

char form[100];
#define stringer(x) scanf( #x "%s",&form)


main () {
	clrscr();

	stringer ( form );
	getch();
	}