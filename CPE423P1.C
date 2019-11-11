#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

main()
{

int x=170,i,gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\turboc3\\bgi");

setbkcolor(RED);
settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
setcolor(WHITE);

/* FRONT */
outtextxy(62,100,"          CpE 423 - Numerical Analysis              ");
outtextxy(62,140,"                   PROJECT #1                       ");
outtextxy(62,170,"        Compilation of Numerical Methods            ");
outtextxy(70,320," Perin, Max Angelo                                  ");
outtextxy(70,340,"      BSCpE 4                                       ");
outtextxy(70,360,"                              Engr. Edgar Uy II     ");
outtextxy(70,380,"                                  Instructor        ");
getch();
clrscr();

initgraph(&gd,&gm,"c:\\tc\\bgi");
setbkcolor(GREEN);
setcolor(WHITE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(170,180,"LOADING, PLEASE WAIT");

closegraph();
clrscr();


}