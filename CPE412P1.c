#include<conio.h>
#include<graphics.h>
#include<math.h>
#include<dos.h>
#include<stdio.h>
#include<string.h>

int const size=25;
long counta,countb;
char str[1000];
long i,x,j,k,flag;

void triangle()
{
 line(113, 90, 113, 110);    // line (x1,y1,x2,y2);
 line(113, 110, 133, 100);
 line(133, 100, 113, 90);
 }

void circle1()
{
setbkcolor(RED);
setfillstyle(1,YELLOW);
fillellipse(160,100,size,size);
setfillstyle(1,YELLOW);
fillellipse(160,100,size-3,size-3);
outtextxy(160-10,100-2,"q11");
}

void circle2()
{
setfillstyle(1,YELLOW);
fillellipse(260,100,size,size);
setfillstyle(1,YELLOW);
fillellipse(260,100,size-3,size-3);
outtextxy(260-10,100-2,"q12");
}

void circle3()
{
setfillstyle(1,YELLOW);
fillellipse(360,100,size,size);
setfillstyle(1,YELLOW);
fillellipse(360,100,size-3,size-3);
outtextxy(360-10,100-2,"q13");
}

void circle4()
{
setfillstyle(1,YELLOW);
fillellipse(460,100,size,size);
setfillstyle(1,YELLOW);
fillellipse(460,100,size-3,size-3);
outtextxy(460-10,100-2,"q14");
}

void circle5()
{
setfillstyle(1,YELLOW);
fillellipse(160,180,size,size);
setfillstyle(1,YELLOW);
fillellipse(160,180,size-3,size-3);
outtextxy(160-10,180-2,"q21");
}

void circle6()
{
setfillstyle(1,YELLOW);
fillellipse(260,180,size,size);
setfillstyle(1,YELLOW);
fillellipse(260,180,size-3,size-3);
outtextxy(260-10,180-2,"q22");
}


void circle7()
{
setfillstyle(1,YELLOW);
fillellipse(360,180,size,size);
setfillstyle(1,YELLOW);
fillellipse(360,180,size-3,size-3);
outtextxy(360-10,180-2,"q23");
}

void circle8()
{
setfillstyle(1,YELLOW);
fillellipse(460,180,size,size);
setfillstyle(1,YELLOW);
fillellipse(460,180,size-3,size-3);
outtextxy(460-10,180-2,"q24");
}

void circle9()
{
setfillstyle(1,YELLOW);
fillellipse(160,260,size,size);
setfillstyle(1,YELLOW);
fillellipse(160,260,size-3,size-3);
outtextxy(160-10,260-2,"q31");
}

void circle10()
{
setfillstyle(1,YELLOW);
fillellipse(260,260,size,size);
setfillstyle(1,YELLOW);
fillellipse(260,260,size-3,size-3);
outtextxy(260-10,260-2,"q32");
}

void circle11()
{
setfillstyle(1,YELLOW);
fillellipse(360,260,size,size);
setfillstyle(1,YELLOW);
fillellipse(360,260,size-3,size-3);
outtextxy(360-10,260-2,"q33");
}

void circle12()
{
setfillstyle(1,YELLOW);
fillellipse(460,260,size,size);
setfillstyle(1,YELLOW);
fillellipse(460,260,size-3,size-3);
outtextxy(460-10,260-2,"q34");
}

void circle13()
{
setfillstyle(1,YELLOW);
fillellipse(160,340,size,size);
setfillstyle(1,YELLOW);
fillellipse(160,340,size-3,size-3);
outtextxy(160-10,340-2,"q41");
}

void circle14()
{
setfillstyle(1,YELLOW);
fillellipse(260,340,size,size);
setfillstyle(1,YELLOW);
fillellipse(260,340,size-3,size-3);
outtextxy(260-10,340-2,"q42");
}

void circle15()
{
setfillstyle(1,YELLOW);
fillellipse(360,340,size,size);
setfillstyle(1,YELLOW);
fillellipse(360,340,size-3,size-3);
outtextxy(360-10,340-2,"q43");
}


void circle16()
{
setfillstyle(1,YELLOW);
fillellipse(460,340,size,size);
setfillstyle(1,YELLOW);
fillellipse(460,340,size-3,size-3);
outtextxy(460-10,340-2,"q44");
}

void linefora11()
{
line(187, 100, 233, 100);    // line (x1,y1,x2,y2);
line(233, 100, 213, 90);
line(213, 110, 233, 100);
outtextxy(200,90,"a");
}

void linefora12()
{
line(287, 100, 333, 100);    // line (x1,y1,x2,y2);
line(333, 100, 313, 90);
line(313, 110, 333, 100);
outtextxy(300,90,"a");
}

void linefora13()
{
line(387, 100, 433, 100);    // line (x1,y1,x2,y2);
line(433, 100, 413, 90);
line(413, 110, 433, 100);
outtextxy(400,90,"a");
}

void linefora14()
{
line(187, 180, 233, 180);    // line (x1,y1,x2,y2);
line(233, 180, 213, 170);
line(213, 190, 233, 180);
outtextxy(200,170,"a");
}

void linefora15()
{
line(287, 180, 333, 180);    // line (x1,y1,x2,y2);
line(333, 180, 313, 170);
line(313, 190, 333, 180);
outtextxy(300,170,"a");
}

void linefora16()
{
line(387, 180, 433, 180);    // line (x1,y1,x2,y2);
line(433, 180, 413, 170);
line(413, 190, 433, 180);
outtextxy(400,170,"a");
}

void linefora17()
{
line(187, 260, 233, 260);    // line (x1,y1,x2,y2);
line(233, 260, 213, 250);
line(213, 270, 233, 260);
outtextxy(200,250,"a");
}

void linefora18()
{
line(287, 260, 333, 260);    // line (x1,y1,x2,y2);
line(333, 260, 313, 250);
line(313, 270, 333, 260);
outtextxy(300,250,"a");
}

void linefora19()
{
line(387, 260, 433, 260);    // line (x1,y1,x2,y2);
line(433, 260, 413, 250);
line(413, 270, 433, 260);
outtextxy(400,250,"a");
}

void linefora110()
{
line(187, 340, 233, 340);    // line (x1,y1,x2,y2);
line(233, 340, 213, 330);
line(213, 350, 233, 340);
outtextxy(200,330,"a");
}

void linefora111()
{
line(287, 340, 333, 340);    // line (x1,y1,x2,y2);
line(333, 340, 313, 330);
line(313, 350, 333, 340);
outtextxy(300,330,"a");
}

void linefora112()
{
line(387, 340, 433, 340);    // line (x1,y1,x2,y2);
line(433, 340, 413, 330);
line(413, 350, 433, 340);
outtextxy(400,330,"a");
}

void lineforb11()
{
line(160, 125, 160, 153);    // line (x1,y1,x2,y2);
line(160, 153, 150, 143);
line(170, 143, 160, 153);
outtextxy(165,133,"b");
}

void lineforb12()
{
line(260, 125, 260, 153);    // line (x1,y1,x2,y2);
line(260, 153, 250, 143);
line(270, 143, 260, 153);
outtextxy(265,133,"b");
}

void lineforb13()
{
line(360, 125, 360, 153);    // line (x1,y1,x2,y2);
line(360, 153, 350, 143);
line(370, 143, 360, 153);
outtextxy(365,133,"b");
}

void lineforb14()
{
line(460, 125, 460, 153);    // line (x1,y1,x2,y2);
line(460, 153, 450, 143);
line(470, 143, 460, 153);
outtextxy(465,133,"b");
}


void lineforb15()
{
line(160, 205, 160, 233);    // line (x1,y1,x2,y2);
line(160, 233, 150, 223);
line(170, 223, 160, 233);
outtextxy(165,213,"b");
}

void lineforb16()
{
line(260, 205, 260, 233);    // line (x1,y1,x2,y2);
line(260, 233, 250, 223);
line(270, 223, 260, 233);
outtextxy(265,213,"b");
}

void lineforb17()
{
line(360, 205, 360, 233);    // line (x1,y1,x2,y2);
line(360, 233, 350, 223);
line(370, 223, 360, 233);
outtextxy(365,213,"b");
}

void lineforb18()
{
line(460, 205, 460, 233);    // line (x1,y1,x2,y2);
line(460, 233, 450, 223);
line(470, 223, 460, 233);
outtextxy(465,213,"b");
}

void lineforb19()
{
line(160, 285, 160, 313);    // line (x1,y1,x2,y2);
line(160, 313, 150, 303);
line(170, 303, 160, 313);
outtextxy(165,293,"b");
}

void lineforb110()
{
line(260, 285, 260, 313);    // line (x1,y1,x2,y2);
line(260, 313, 250, 303);
line(270, 303, 260, 313);
outtextxy(265,293,"b");
}

void lineforb111()
{
line(360, 285, 360, 313);    // line (x1,y1,x2,y2);
line(360, 313, 350, 303);
line(370, 303, 360, 313);
outtextxy(365,293,"b");
}

void lineforb112()
{
line(460, 285, 460, 313);    // line (x1,y1,x2,y2);
line(460, 313, 450, 303);
line(470, 303, 460, 313);
outtextxy(465,293,"b");
}

void allcircle()
{
setcolor(YELLOW);
triangle();
setcolor(BLUE);
circle1();
circle2();
circle3();
circle4();
circle5();
circle6();
circle7();
circle8();
circle9();
circle10();
circle11();
circle12();
circle13();
circle14();
circle15();
circle16();

}

void menu()
{
settextstyle(TRIPLEX_FONT, HORIZ_DIR,3);
setcolor(WHITE);
outtextxy(70,370,"DFA accepts string with input symbol a,b ");
outtextxy(70,400," having atmost three a's and three of b.");
setcolor(YELLOW);
outtextxy(70,430,"       Press any key to continue  ");
settextstyle(0,0,1);
}

void first()
{
setcolor(BLUE);
delay(1000);
circle1();
delay(1000);
circle2();
delay(1000);
circle3();
delay(1000);
circle4();
delay(1000);
circle5();
delay(1000);
circle6();
delay(1000);
circle7();
delay(1000);
circle8();
delay(1000);
circle9();
delay(1000);
circle10();
delay(1000);
circle11();
delay(1000);
circle12();
delay(1000);
circle13();
delay(1000);
circle14();
delay(1000);
circle15();
delay(1000);
circle16();
delay(1000);
setcolor(YELLOW);
triangle();
setcolor(WHITE);
linefora11();
linefora12();
linefora13();
linefora14();
linefora15();
linefora16();
linefora17();
linefora18();
linefora19();
linefora110();
linefora111();
linefora112();
lineforb11();
lineforb12();
lineforb13();
lineforb14();
lineforb15();
lineforb16();
lineforb17();
lineforb18();
lineforb19();
lineforb110();
lineforb111();
lineforb112();
delay(1000);
}

void programproper()
{
setbkcolor(RED);
setcolor(BLUE);
allcircle();
setcolor(WHITE);
settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
outtextxy(140,10,"ENTER STRING: ");
gotoxy(38,2);
gets(str);
settextstyle(0, 0,1);
x=strlen(str);
counta=0;
countb=0;

flag=0;
j=0;
k=0;

for(i=0;i<x;i++)
	{
	if (str[i]!='a'&&str[i]!='A')
		{
		if (str[i]!='b'&&str[i]!='B')
			{
			flag=1;
			break;
			}
		}

	else if (str[i]!='b'&&str[i]!='B')
		{
		if (str[i]!='a'&&str[i]!='A')
			{
			flag=1;
			break;
			}
		}


	if (str[i]=='a'||str[i]=='A')
			{
			if ((j==0)&&(k==0))
				{
				linefora11();
				}
			else if ((j==0)&&(k==1))
				{
				linefora12();
				}
			else if ((j==0)&&(k==2))
				{
				linefora13();
				}

			if ((j==1)&&(k==0))
				{
				linefora14();
				}
			else if ((j==1)&&(k==1))
				{
				linefora15();
				}
			else if ((j==1)&&(k==2))
				{
				linefora16();
				}

			if ((j==2)&&(k==0))
				{
				linefora17();
				}
			else if ((j==2)&&(k==1))
				{
				linefora18();
				}
			else if ((j==2)&&(k==2))
				{
				linefora19();
				}

			if ((j==3)&&(k==0))
				{
				linefora110();
				}
			else if ((j==3)&&(k==1))
				{
				linefora111();
				}
			else if ((j==3)&&(k==2))
				{
				linefora112();
				}

			counta++;
			k++;
			}

	else if (str[i]=='b'||str[i]=='B')
			{
			if ((j==0)&&(k==0))
				{
				lineforb11();
				}
			else if ((j==0)&&(k==1))
				{
				lineforb12();
				}
			else if ((j==0)&&(k==2))
				{
				lineforb13();
				}
			else if ((j==0)&&(k==3))
				{
				lineforb14();
				}

			if ((j==1)&&(k==0))
				{
				lineforb15();
				}
			else if ((j==1)&&(k==1))
				{
				lineforb16();
				}
			else if ((j==1)&&(k==2))
				{
				lineforb17();
				}

			else if ((j==1)&&(k==3))
				{
				lineforb18();
				}

			if ((j==2)&&(k==0))
				{
				lineforb19();
				}
			else if ((j==2)&&(k==1))
				{
				lineforb110();
				}
			else if ((j==2)&&(k==2))
				{
				lineforb111();
				}

			else if ((j==2)&&(k==3))
				{
				lineforb112();
				}
			j++;
			countb++;
			}


	if (counta==4||countb==4)
		{
		break;
		}

	}

	if (counta==4||countb==4||flag==1)
		{
		settextstyle(TRIPLEX_FONT, HORIZ_DIR,3);
		setcolor(WHITE);
		outtextxy(70,370,"The String you inputted was either not a or b ");
		outtextxy(70,400," or the letters a or b was more than 3. ");
		setcolor(GREEN);
		outtextxy(70,430,"            STRING REJECTED  ");
		settextstyle(0,0,1);

		}
	else
		{
		settextstyle(TRIPLEX_FONT, HORIZ_DIR,3);
		setcolor(WHITE);
		outtextxy(70,400," The String you inputted satisfies the DFA. ");
		setcolor(YELLOW);
		outtextxy(70,430,"            STRING ACCEPTED  ");
		settextstyle(0,0,1);
		}



}

void main()
{
int gd=DETECT, gm;
int n,c;

initgraph(&gd,&gm,"C:\\turboc3\\bgi");
first();
setbkcolor(RED);
menu();
getch();
clrscr();

initgraph(&gd,&gm,"C:\\turboc3\\bgi");
setbkcolor(RED);
setcolor(WHITE);


	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	programproper();
	getch();
	clrscr();

	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	programproper();
	getch();
	clrscr();

	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	programproper();
	getch();
	clrscr();

	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	programproper();
	getch();
	clrscr();

	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	programproper();
	getch();
	clrscr();

initgraph(&gd,&gm,"C:\\turboc3\\bgi");
setbkcolor(BLUE);
settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
setcolor(WHITE);
outtextxy(62,100,"CpE 412 - Structures of Programming Languages       ");
outtextxy(62,140,"                PROJECT NO. 1-M                     ");
outtextxy(62,170,"          Deterministic Finite Automata             ");
outtextxy(70,320," Perin, Max Angelo                                  ");
outtextxy(70,340,"      BSCpE 4                                       ");
outtextxy(70,360,"                              Engr. Edgar Uy II     ");
outtextxy(70,380,"                                  Instructor        ");


getch();
}