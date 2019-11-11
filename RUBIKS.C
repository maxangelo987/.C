#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<string.h>



int choice=0;
int color;
int stop=0;
int colorChoice=0;



void AC()
	{
		setfillstyle(SOLID_FILL, color);
		bar(220,250,405,300);
		
		settextstyle(10, HORIZ_DIR,1);
		setcolor(YELLOW);
		outtextxy(230,250,"Apply Color");
		
		setcolor(color);
		line(220-3,250-3,405+3,250-3);		/*up*/
		line(220-3,300+3,405+3,300+3);	/*down*/
		line(220-3,250-3,220-3,300+3);		/*left*/
		line(405+3,250-3,405+3,300+3);	/*right*/
	}
	
	/*=========================================*/
	
void S()
	{
		setfillstyle(SOLID_FILL, color);
		bar(265,320,355,370);
		
		settextstyle(10, HORIZ_DIR,1);
		setcolor(YELLOW);
		outtextxy(275,320,"Solve");
		
		setcolor(color);
		line(265-3,320-3,355+3,320-3);		/*up*/
		line(265-3,370+3,355+3,370+3);	/*down*/
		line(265-3,320-3,265-3,370+3);		/*left*/
		line(355+3,320-3,355+3,370+3);	/*right*/
	}
	
	/*=========================================*/
	
void H()
	{
		setfillstyle(SOLID_FILL, color);
		bar(70,320,145,370);
		
		settextstyle(10, HORIZ_DIR,1);
		setcolor(YELLOW);
		outtextxy(80,320,"Help");
		
		setcolor(color);
		line(70-3,320-3,145+3,320-3);		/*up*/
		line(70-3,370+3,145+3,370+3);	/*down*/
		line(70-3,320-3,70-3,370+3);		/*left*/
		line(145+3,320-3,145+3,370+3);	/*right*/
	}
	
	/*=========================================*/
	
void E()
	{
		setfillstyle(SOLID_FILL, color);
		bar(495,320,570,370);
		
		settextstyle(10, HORIZ_DIR,1);
		setcolor(YELLOW);
		outtextxy(505,320,"Exit");
		
		setcolor(color);
		line(495-3,320-3,570+3,320-3);		/*up*/
		line(495-3,370+3,570+3,370+3);	/*down*/
		line(495-3,320-3,495-3,370+3);		/*left*/
		line(570+3,320-3,570+3,370+3);	/*right*/
	}
	

/*===============================================================================*/

void homePage()
{
	stop=0;
	choice=0;

	int gd=DETECT, gm;
	clrscr();

	initgraph(&gd,&gm,"C:\\tc\\bgi");
	
	color=6;
	
	
	setfillstyle(SOLID_FILL, BROWN);
	bar(65,100,570,180);					/*left,top,right,bottom*/
		
	setbkcolor(YELLOW);
	settextstyle(10, HORIZ_DIR,4);
	setcolor(YELLOW);
	outtextxy(80,100,"Rubik's Cube Solver");
		
	setcolor(BROWN);
	line(65-3,100-3,570+3,100-3);		/*up*/
	line(65-3,180+3,570+3,180+3);	/*down*/
	line(65-3,100-3,65-3,180+3);		/*left*/
	line(570+3,100-3,570+3,180+3);	/*right*/
	
	
	/*=========================================*/
	
	AC();
	H();
	S();
	E();
	
	for(;;)
	{
		switch(getch())
		{
			case 'w':	color=6;
						H();
						S();
						E();
						color=4;
						AC();
						choice=1;
						break;
			case 's':	color=6;
						AC();
						H();
						E();
						color=4;
						S();
						choice=2;
						break;
			case 'a':	color=6;
						AC();
						S();
						E();
						color=4;
						H();
						choice=3;
						break;
			case 'd':	color=6;
						AC();
						H();
						S();
						color=4;
						E();
						choice=4;
						break;
			case 13:    stop=1;
						break;
		}
		if(stop == 1 && choice!=0)
		{
			break;
		}
		else
		{
			stop=0;
		}
	}
	
	
}

/*===============================================================================*/

void white()
{
	setcolor(color);
	rectangle(125,50,175,100);		/*white/black		-15*/
	setfillstyle(SOLID_FILL, 15);
	bar(125+3,50+3,175-3,100-3);					/*left,top,right,bottom*/
	
	outtextxy(145,100,"1");
}
void blue()
{
	setcolor(color);
	rectangle(185,50,235,100);		/*blue				-1*/
	setfillstyle(SOLID_FILL, 1);
	bar(185+3,50+3,235-3,100-3);					/*left,top,right,bottom*/
	
	outtextxy(205,100,"2");
}
void green()
{
	setcolor(color);
	rectangle(245,50,295,100);		/*green				-2*/
	setfillstyle(SOLID_FILL, 2);
	bar(245+3,50+3,295-3,100-3);					/*left,top,right,bottom*/
	
	outtextxy(265,100,"3");
}
void red()
{
	setcolor(color);
	rectangle(305,50,355,100);		/*red				-4*/
	setfillstyle(SOLID_FILL, 4);
	bar(305+3,50+3,355-3,100-3);					/*left,top,right,bottom*/
	
	outtextxy(325,100,"4");
}
void orange()
{
	setcolor(color);
	rectangle(365,50,415,100);		/*orange/brown		-6*/
	setfillstyle(SOLID_FILL, 6);
	bar(365+3,50+3,415-3,100-3);					/*left,top,right,bottom*/
	
	outtextxy(385,100,"5");
}
void yellow()
{
	setcolor(color);
	rectangle(425,50,475,100);		/*yellow			-14*/
	setfillstyle(SOLID_FILL, 14);
	bar(425+3,50+3,475-3,100-3);					/*left,top,right,bottom*/
	
	outtextxy(445,100,"6");
}

/*==============================================================================*/

void top1()
{rectangle(265,160,285,180);}
void top2()
{rectangle(290,160,310,180);}
void top3()
{rectangle(315,160,335,180);}
void top4()
{rectangle(265,185,285,205);}
void top5()
{rectangle(290,185,310,205);}
void top6()
{rectangle(315,185,335,205);}
void top7()
{rectangle(265,210,285,230);}
void top8()
{rectangle(290,210,310,230);}
void top9()
{rectangle(315,210,335,230);}

void front1()
{rectangle(265,240,285,260);}
void front2()
{rectangle(290,240,310,260);}
void front3()
{rectangle(315,240,335,260);}
void front4()
{rectangle(265,265,285,285);}
void front5()
{rectangle(290,265,310,285);}
void front6()
{rectangle(315,265,335,285);}
void front7()
{rectangle(265,290,285,310);}
void front8()
{rectangle(290,290,310,310);}
void front9()
{rectangle(315,290,335,310);}

void right1()
{rectangle(345,240,365,260);}
void right2()
{rectangle(370,240,390,260);}
void right3()
{rectangle(395,240,415,260);}
void right4()
{rectangle(345,265,365,285);}
void right5()
{rectangle(370,265,390,285);}
void right6()
{rectangle(395,265,415,285);}
void right7()
{rectangle(345,290,365,310);}
void right8()
{rectangle(370,290,390,310);}
void right9()
{rectangle(395,290,415,310);}

void back1()
{rectangle(425,240,445,260);}
void back2()
{rectangle(450,240,470,260);}
void back3()
{rectangle(475,240,495,260);}
void back4()
{rectangle(425,265,445,285);}
void back5()
{rectangle(450,265,470,285);}
void back6()
{rectangle(475,265,495,285);}
void back7()
{rectangle(425,290,445,310);}
void back8()
{rectangle(450,290,470,310);}
void back9()
{rectangle(475,290,495,310);}

void left1()
{rectangle(185,240,205,260);}
void left2()
{rectangle(210,240,230,260);}
void left3()
{rectangle(235,240,255,260);}
void left4()
{rectangle(185,265,205,285);}
void left5()
{rectangle(210,265,230,285);}
void left6()
{rectangle(235,265,255,285);}
void left7()
{rectangle(185,290,205,310);}
void left8()
{rectangle(210,290,230,310);}
void left9()
{rectangle(235,290,255,310);}

void bottom1()
{rectangle(265,320,285,340);}
void bottom2()
{rectangle(290,320,310,340);}
void bottom3()
{rectangle(315,320,335,340);}
void bottom4()
{rectangle(265,345,285,365);}
void bottom5()
{rectangle(290,345,310,365);}
void bottom6()
{rectangle(315,345,335,365);}
void bottom7()
{rectangle(265,370,285,390);}
void bottom8()
{rectangle(290,370,310,390);}
void bottom9()
{rectangle(315,370,335,390);}

/*==============================================================================*/
void blankCube()
{
	setcolor(CYAN);
	top1();
	top2();
	top3();
	top4();
	top5();
	top6();
	top7();
	top8();
	top9();
	
	front1();
	front2();
	front3();
	front4();
	front5();
	front6();
	front7();
	front8();
	front9();
	
	right1();
	right2();
	right3();
	right4();
	right5();
	right6();
	right7();
	right8();
	right9();
	
	back1();
	back2();
	back3();
	back4();
	back5();
	back6();
	back7();
	back8();
	back9();
	
	left1();
	left2();
	left3();
	left4();
	left5();
	left6();
	left7();
	left8();
	left9();
	
	bottom1();
	bottom2();
	bottom3();
	bottom4();
	bottom5();
	bottom6();
	bottom7();
	bottom8();
	bottom9();
}

/*===============================================================================*/

void applyColor()
{
	colorChoice=0;
	stop=1;

	int gd=DETECT, gm;
	clrscr();
	
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	
	setbkcolor(DARKGRAY);
	
	settextstyle(6, HORIZ_DIR,3);
	setcolor(CYAN);
	outtextxy(250,8,"Select Color");
	settextstyle(6, HORIZ_DIR,1);
	
	outtextxy(150,260,"Left");
	outtextxy(235,180,"Top");
	outtextxy(235,340,"Bot");
	outtextxy(360,210,"Right");
	outtextxy(505,260,"Back");
	
	blankCube();
	
	color=3;
	
	white();
	
	color=3;
	
	blue();
	green();
	red();
	orange();
	yellow();
	
	for(;;)
	{
		switch(getch())
		{
			case '1':	color=5;
						white();
						color=3;
						blue();
						green();
						red();
						orange();
						yellow();
						
						colorChoice=1;
						break;
			case '2':	color=5;
						blue();
						color=3;
						white();
						green();
						red();
						orange();
						yellow();
						
						colorChoice=2;
						break;
			case '3':	color=5;
						green();
						color=3;
						blue();
						white();
						red();
						orange();
						yellow();
						
						colorChoice=3;
						break;
			case '4':	color=5;
						red();
						color=3;
						blue();
						green();
						white();
						orange();
						yellow();
						
						colorChoice=4;
						break;
			case '5':	color=5;
						orange();
						color=3;
						blue();
						green();
						red();
						white();
						yellow();
						
						colorChoice=5;
						break;
			case '6':	color=5;
						yellow();
						color=3;
						blue();
						green();
						red();
						orange();
						white();
						
						colorChoice=6;
						break;
			case 13:    stop=0;
						break;
			default:	color=3;
						colorChoice=0;
	
						white();																		
						blue();
						green();
						red();
						orange();
						yellow();
						break;
		}
		
		if(stop == 0 && colorChoice!=0)
		{
			break;
		}
		else
		{
			stop=1;
		}
	}
}

/*===============================================================================*/

void help()
{
	int gd=DETECT, gm;
	clrscr();
	
	initgraph(&gd,&gm,"C:\\tc\\bgi");
	
	setbkcolor(BLUE);
	
	settextstyle(6, HORIZ_DIR,3);
	setcolor(CYAN);
	outtextxy(250,8,"Help");
	settextstyle(6, HORIZ_DIR,1);
	
	getch();
}

/*===============================================================================*/

void main()
{
	int stop2=0;
	for(;;)
	{
		homePage();
		switch(choice)
		{
			case 1: applyColor();
					blankCube();
					main();
					break;
			case 3: help();
					main();
					break;
			case 4: stop2=1;
					break;
		}
		if(stop2==1)
		{
			break;
		}
	}
	/*getch();*/
}

/*===============================================================================*/