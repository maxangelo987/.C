#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <time.h>
#include <bios.h>

size_t area;
void *p;

void Background();
void Graphics();
void Intro();
void win(char *text,int sx,int sy,int ex,int ey,int ck);
void winp(int sx,int sy,int ex,int ey,int state);

void main() {
Graphics();
Intro();
Background();
getch();
closegraph();
clrscr();
}

void Intro (){ 
int x=170,i,j;
int gd = DETECT, gm, errorcode;
setbkcolor(RED);
settextstyle(TRIPLEX_FONT, HORIZ_DIR,2);
setcolor(WHITE);

/* FRONT */
outtextxy(62,100,"         CpE 422 - Software Engineering             ");
outtextxy(62,140,"                   PROJECT #1                       ");
outtextxy(62,170,"     Kolor Matching using Kruskal Algorithm         ");
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

/* LOADING BAR */
for(i=0;i<318;++i) {
	sound(i*4);
	delay(10);
	line(x,200,x,220);
	x++;
	nosound();
	}
	for (j=0;j<3;j++){
	sound(i*4);
	delay(100);
	nosound();
	delay(100);
	sound(i*4);
	delay(100);
	nosound();
	delay(100);
	sound(i*4);
	delay(100);
	nosound();            }
}

void Graphics() {
   int gd = DETECT, gm, errorcode;
   initgraph(&gd,&gm,"C:\\tc\\bgi");
   errorcode = graphresult();
   if (errorcode != grOk){
      printf("Graphics error: %s", grapherrormsg(errorcode));
      exit(1);
   }
   area=imagesize(150,70,240,180);
   p=malloc(area);
   if(p==NULL){
   closegraph();exit(1);}
}

void Background(){
   int i;
   setbkcolor(BLUE);
   setfillstyle(1,3);
   bar(0,0,640,480);
   for(i=0;i<=15;i++){
   setcolor(i);
   rectangle(0+i,0+i,640-i,480-i);
   }

  win("KOLOR MATCHING",140,45,505,400,1);
  win("Keys",24,45,135,290,1);
  win("Help !",510,45,625,250,1);
  setfillstyle(1,0);
  bar(35,75,125,280);
  bar(520,75,618,240);
  winp(35,75,125,280,1);
  winp(520,75,618,240,1);
  setcolor(14);
  settextstyle(2,0,4);
  outtextxy(42,80,"Keys used");
  setcolor(15);
  outtextxy(42,100,"+ or- : color");
  outtextxy(47,120,"³  : Up");
  outtextxy(47,140,"³  : Down");
  outtextxy(42,160,"<- : Left");
  outtextxy(42,180,"-> : Right");
  outtextxy(42,200,"Enter : Pick");
  outtextxy(42,220,"S : save game");
  outtextxy(42,240,"L : load game");
  outtextxy(42,260,"Esc : Exit");
  line(47,120,50,123);
  line(47,120,43,123);
  line(47,140,50,143);
  line(47,140,43,143);
  outtextxy(523,80,"Use Arrow Keys");
  outtextxy(523,100,"to move around");
  outtextxy(523,120,"then press enter");
  outtextxy(523,140,"to select any");
  outtextxy(523,160,"marble,then jump");
  outtextxy(523,180,"over another to");
  outtextxy(523,200,"remove it.");
}











void win(char *text,int sx,int sy,int ex,int ey,int ck){
   setfillstyle(1,7);
   bar(sx,sy,ex,ey);
   setfillstyle(1,7);
   setcolor(15);
   line(sx,sy,sx,ey);
   line(sx,sy,ex,sy);
   line(sx,sy,sx,ey);
   line(sx,sy,ex,sy);
   setcolor(0);
   line(ex,sy,ex,ey);
   line(ex,sy,ex,ey);
   line(sx,ey,ex,ey);
   line(sx,ey,ex,ey);
   if(ck==1){
   settextstyle(0,0,0);
   setfillstyle(1,1);
   bar(sx+2,sy+2,ex-2,sy+17);
   setcolor(15);
   outtextxy(sx+4,sy+4,text);
   setfillstyle(1,7);
   bar(ex-15,sy+4,ex-4,sy+15);
   setcolor(15);
   line(ex-15,sy+4,ex-4,sy+4);
   line(ex-15,sy+4,ex-15,sy+15);
   setcolor(0);
   line(ex-15,sy+15,ex-4,sy+15);
   line(ex-4,sy+4,ex-4,sy+15);
   setcolor(1);
   outtextxy(ex-13,sy+5,"x");
   setfillstyle(1,7);
   }
}

void winp(int sx,int sy,int ex,int ey,int state){

   if(state==1){
   setcolor(0);
   line(sx,sy,sx,ey);
   line(sx,sy,ex,sy);
   line(sx,sy,sx,ey);
   line(sx,sy,ex,sy);
   setcolor(15);
   line(ex,sy,ex,ey);
   line(ex,sy,ex,ey);
   line(sx,ey,ex,ey);
   line(sx,ey,ex,ey);
  }

  else{
   setcolor(15);
   line(sx,sy,sx,ey);
   line(sx,sy,ex,sy);
   line(sx,sy,sx,ey);
   line(sx,sy,ex,sy);
   setcolor(0);
   line(ex,sy,ex,ey);
   line(ex,sy,ex,ey);
   line(sx,ey,ex,ey);
   line(sx,ey,ex,ey);
  }
}