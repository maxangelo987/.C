/* (16) Computer Hardware Components Definitions. 
(strcpy, strcmp functions ) <Comp1/CpE211> */

#include<stdio.h>
#include<string.h>
#include<conio.h>
main()
{

int n,ca1;
char a15[30], ca[30], a1[30], a2[30], a3[30], a4[30], a5[30], a6[30], a7[30], a8[30], a9[30], a10[30], a11[30], a12[30], a13[30], a14[30];
clrscr();

printf("\nCpE211 Computer Components Definitions.\nInput component to define:\n\n");

for (;;)

{


gets(ca);

strcpy(a1,"Motherboard");
strcpy(a2,"Chipset");
strcpy(a3,"Processor");
strcpy(a4,"RAM and ROM");
strcpy(a5,"I/O port");
strcpy(a6,"HDD");
strcpy(a7,"CD/DVD Drive");
strcpy(a8,"FDD");
strcpy(a9,"Keyboard and Mouse");
strcpy(a10,"Video Card and Monitors");
strcpy(a11,"System bus types");
strcpy(a12,"Sound Cards and Speakers");
strcpy(a13,"USB Peripherals");
strcpy(a14,"Power Supply");
strcpy(a15, "./.");

if (strcmp(a1,ca)==0)
	printf("It hold's many of the crucial components of the\nsystem such as CPU and memory.");

else if (strcmp(a2,ca)==0)
	printf("Integrated circuit that manages the data flow between\nthe processor, memory and peripherals.");

else if (strcmp(a3,ca)==0)
	printf("Perform numerous operation on a basis and process\nvast amounts data to run the operations.");

else if (strcmp(a4,ca)==0)
	printf("Used to store small programs that never change.");

else if (strcmp(a5,ca)==0)
	printf("Allows the software drivers to communicate with\nthe hardware devices on your computer.");

else if (strcmp(a6,ca)==0)
	printf("Hard drive used to stores all software installed on a computer as well as all the data files.");

else if (strcmp(a7,ca)==0)
	printf("Used for computers to read and write\nall forms of data.");

else if (strcmp(a8,ca)==0)
	printf("Floppy Disk Drive is a computer peripheral that\nreads and writes magnetic data to\nand from a floppy disk.");

else if (strcmp(a9,ca)==0)
	printf("Keyboard is used to type text and numbers\nino a word processor.\nMouse is used to point and click on icons,\nmenus,command buttons.");

else if (strcmp(a10,ca)==0)
	printf("Connects to the motherboard of a computer\nsystem and generates output images.");

else if (strcmp(a11,ca)==0)
	printf("Connects the major components of a computer\nsystem.");

else if (strcmp(a12,ca)==0)
	printf("Converts digital data to sound.");

else if (strcmp(a13,ca)==0)
	printf("Designed to standarized the connection of computer\nperipherals (including keyboards,digital cameras and\netc)");

else if (strcmp(a14,ca)==0)
	printf("Converts AC power from your wall socket into\nDC Power that the PC components use.");

else if (strcmp(a15,ca)==0)
	printf("The symbol is Fuck You!");
else
	printf("\n\nNo definitions added to program!\n");

	printf("\n\nPress [1] to End\nOr Input another:\n\n");

		scanf("%d",&n);
		if (n==1)
		{
		printf("\n\nThankyou for using my program!\nCreated by Max.\nPress [ENTER] to exit.");
		break;
		}

		else if (n!=1)
		{
		continue;
		}


}


getch();


}