#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>
#include <dos.h>
#include <time.h>
#include <bios.h>
#include <comm.h>
#define MAX 49

typedef struct edge{
    long u,v,w;
}edge;

typedef struct edgelist{
    edge data[100];
    long n;
}edgelist;

edgelist elist;

struct pct
{ int pl; int con1; int con2; int con1_pl; int con2_pl; } p1[15][15];

int xmax,ymax,player=1,vert,x,o;
int xex[200],yex[200],who[200],ind;
int i,j,l,q;
float xdum=1,ydum=1;

int x=320,y=100,nodes=32,nodes_color=12;
int bk;

float x1=175,y1=70;
float x2=170,y2=75;


size_t area;
void *p;
int board[7][7]={
    {  1,  1, 1, 2, 2, 2, 2},
    {  1,  1, 1, 1, 2, 2, 2},
    {  1,  1, 1, 2, 2, 2, 2},
    {  4,  1, 4, 0, 2, 3, 2},
    {  4,  4, 4, 4, 3, 3, 3},
    {  4,  4, 4, 3, 3, 3, 3},
    {  4,  4, 4, 4, 3, 3, 3}
};

long from[100],to[100];
long G[MAX][MAX]={
	{0,2,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{2,0,3,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,3,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,7,0,5,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,5,0,6,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,6,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{2,0,0,0,0,0,0,0,2,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,4,0,0,0,0,0,2,0,7,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,1,0,0,0,0,0,7,0,5,0,0,0,0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,4,0,0,0,0,0,0,0,3,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,5,0,0,0,0,0,3,0,6,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,4,0,0,0,0,0,6,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,4,0,0,0,0,0,2,0,1,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,7,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,7,0,4,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,4,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,5,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,0,0,6,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,1,0,0,0,0,0,5,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,7,0,0,0,0,0,6,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,2,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,2,0,3,0,0,0,0,0,7,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,3,0,0,0,0,0,0,0,6,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,3,0,0,0,0,0,7,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5,0,0,0,0,0,3,0,4,0,0,0,0,0,1,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,4,0,0,0,0,0,0,0,1,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,7,0,5,0,0,0,0,0,2,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,0,0,0,0,0,5,0,2,0,0,0,0,0,6,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,2,0,0,0,0,0,0,0,4},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,7,0,0,0,0,0,0,0,1,0,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1,0,2,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,2,0,4,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,2,0,0,0,0,0,0,0,3,0},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,6,0,0,0,0,0,3,0,5},
	{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,4,0,0,0,0,0,5,0},
	};

long n;
edgelist spanlist;

void putdot(int i,int j,int k);
void dim();

void move();
void putlinev(float i1,float j1,int k);
void putline(float i1,float j1,int k);
void drawall();
void reposition();
void end();
void check1();
void check();

void drawX(int i,int j, int k);
void drawO(int i,int j, int k);
void putXO();
void drawlines();
void drawdots();



void kruskal();
long find(long belongs[],long vertexno);
void union1(long belongs[],long c1,long c2);
void sort();
void print();



void Background();
void Graphics();
void Intro();
void win(char *text,int sx,int sy,int ex,int ey,int ck);
void winp(int sx,int sy,int ex,int ey,int state);
void DrawBoard();
void Nodes(int x,int y,int c);
void Drawborder(int x,int y);
int GetXY(int X,int Y);

int load_game ();
int save_game();

int GetBoard(int X,int Y);
void LOADINGSCREEN();

void main(){
n=49;
/*kruskal();*/
/*print();*/
getch();

Graphics();
Intro();
bk=GREEN;
LOADINGSCREEN();

/*   Background();*/
   dim();
   setbkcolor(BLUE); /*15 - WHITE*/
   drawdots();
   move();
   getch();
 /*  Nodes(320,350,0);*/
 /*  board[3][3]=0;*/
   setcolor(0);
   Graphics();

   bk=YELLOW;
   closegraph();
   LOADINGSCREEN();
   closegraph();
   clrscr();
}


void dim()
{
   int i,j;
   start: clrscr();
   printf("Width (2-13):");
   i=7;
   if(i<2||i>13) goto start;
   printf("Height (2-13):");
   j=7;
   if(j<2||j>13) goto start;
   xmax=i; ymax=j;
}


void drawall()
{ drawdots();   drawlines(); /*putXO();*/  }

void drawdots()
{
  int i,j,x=200,y=100;
  
  cleardevice();

   for(i=0;i<7;i++)
   {
    for(j=0;j<7;j++)
    {
        if(board[j][i]!=-1)
        {
	switch(board[j][i]){
		case 1:Nodes(x,y,RED);break;
		case 2:Nodes(x,y,GREEN);break;
		case 3:Nodes(x,y,YELLOW);break;
		case 4:Nodes(x,y,5);break; /*5=PINK*/
		}
	}
		x+=40;
    }
    x=200;
    y+=40;

   }
   settextstyle(1,0,3);
}

void drawlines()
{
float i2,j2;
i2=1;
j2=1;
   for(i=0;i<=xmax;i++){
    for(j=0;j<=ymax;j++){
       if(p1[i][j].con2==1){
        putline(i2,j2,15);
	}
       if(p1[i][j].con1==1){
        putlinev(i2,j2,15);
    	} 
     j2=j2+1.34;
     }
  i2=i2+1.34;
  }
}

void putline(float i1,float j1,int k)
{
   setcolor(k);
   line(i1*30+x1+1,j1*30+y1-1,i1*30+x1+30,j1*30+y1-1);
   line(i1*30+x1+1,j1*30+y1,i1*30+x1+30,j1*30+y1);
   line(i1*30+x1+1,j1*30+y1+1,i1*30+x1+30,j1*30+y1+1);
}

void putlinev(float i1,float j1,int k)
{
   setcolor(k);
   line(i1*30+x2-1,j1*30+y2+1,i1*30+x2-1,j1*30+y2+30);
   line(i1*30+x2,j1*30+y2+1,i1*30+x2,j1*30+y2+30);
   line(i1*30+x2+1,j1*30+y2+1,i1*30+x2+1,j1*30+y2+30);
}

void putXO() /*DRAW X AND O*/
{
   for(l=0;l<=ind;l++)
    if(who[l]==1) drawX(xex[l],yex[l],2);
    else drawO(xex[l],yex[l],12);
}

void drawX(int i,int j, int k) /*X*/
{
   setcolor(k);
   line(i*30+6,j*30-6,i*30+24,j*30-24);
   line(i*30+6,j*30-24,i*30+24,j*30-6);
}

void drawO(int i,int j, int k) /*O*/
{
   setcolor(k);
   circle(i*30+15,j*30-15,10);
}




void check()
{
   for(i=1;i<xmax;i++)
    for(j=2;j<=ymax;j++)
    {
       q=0;
       for(l=0;l<=ind;l++)
        if((xex[l]==i) && (yex[l]==j)) q=1;
     if(!q)
     if(p1[i][j].con2 && p1[i][j-1].con1 && p1[i][j-1].con2 && p1[i+1][j-1].con1)
      if(player==1)
      { o++; player=2; drawO(i,j,12); xex[ind]=i;
        yex[ind]=j; who[ind]=2; ind++; return; }
      else
      { x++; player=1; drawX(i,j,2); xex[ind]=i;
        yex[ind]=j; who[ind]=1; ind++; return; }
    }
}

void check1()
{
   for(i=1;i<xmax;i++)
    for(j=2;j<=ymax;j++)
    {
       q=0;
       for(l=0;l<=ind;l++)
        if((xex[l]==i) && (yex[l]==j)) q=1;
     if(!q)
     if(p1[i][j].con2 && p1[i][j-1].con1 && p1[i][j-1].con2 && p1[i+1][j-1].con1)
      if(player==1)
      { x++; drawX(i,j,2); xex[ind]=i;
        yex[ind]=j; who[ind]=1; ind++; return; }
      else
      { o++; drawO(i,j,12); xex[ind]=i;
        yex[ind]=j; who[ind]=2; ind++; return; }
    }
}


void reposition()
{
      
   if(xdum>=xmax+1 && !vert) xdum=xdum-1.34;
   if(ydum>=ymax+1 && vert) ydum=ydum-1.34;
}

void putdot(int i,int j,int k)
{
   setcolor(k);
   line(i*30-1,j*30-1,i*30+1,j*30-1);
   line(i*30-1,j*30,i*30+1,j*30);
   line(i*30-1,j*30+1,i*30+1,j*30+1);
}



void move()
{
   char a;
   while(a!=ESC)
   {
      begin:
      a=getch();
      if(!vert)
      {
         if(a==RIGHT && xdum+1<xmax+1)
	 { drawall(); xdum=xdum+1.34; putline(xdum,ydum,14); }
         if(a==LEFT && xdum-1>=1)
         { drawall(); xdum=xdum-1.34; putline(xdum,ydum,14); }
         if(a==UP && ydum-1>=1)
         { drawall(); ydum=ydum-1.34; putline(xdum,ydum,14); }
         if(a==DOWN && ydum+1<=ymax+2)
         { drawall(); ydum=ydum+1.34; putline(xdum,ydum,14); }
         if(a==ENTER && !p1[xdum+0.66][ydum+0.66].con2) { p1[xdum+0.66][ydum+0.66].con2=1;
	        drawall(); }
         if(a==SPACE) { if(vert) vert=0; else vert=1; reposition();
	        drawall(); putlinev(xdum,ydum,1); goto begin; }
      }
      if(vert)
      {
         if(a==RIGHT && xdum<xmax+1)
         { drawall(); xdum=xdum+1.34; putlinev(xdum,ydum,14); }
         if(a==LEFT && xdum-1>=1)
         { drawall(); xdum=xdum-1.34; putlinev(xdum,ydum,14); }
         if(a==UP && ydum-1>=1)
         { drawall(); ydum=ydum-1.34; putlinev(xdum,ydum,14); }
         if(a==DOWN && ydum+1<ymax+1)
         { drawall(); ydum=ydum+1.34; putlinev(xdum,ydum,14); }
         if(a==ENTER && !p1[xdum+0.66][ydum+0.66].con1) { p1[xdum+0.66][ydum+0.66].con1=1;
	        drawall(); }
         if(a==SPACE) { if(vert) vert=0; else vert=1; reposition();
	        drawall(); putline(xdum,ydum,1); goto begin; }
      }
   }
}
int load_game()
{
    FILE *fp ;
    char *name;
    gotoxy(20,2);printf("File name: ");
    scanf("%s",&name);
    if ( ( fp = fopen ( name, "rb" ) ) == NULL )
    {
      setfillstyle(1,3);
      bar(20,17,400,40);
      gotoxy(20,2);
      printf("  Unable to Load Game");
      getch();
      setfillstyle(1,3);
      bar(20,17,400,40);
      return 0;
    }
    fread(board,sizeof(board),1,fp);
    fclose ( fp ) ;
    setfillstyle(1,3);
    bar(20,17,400,40);
    DrawBoard();
    return 1;
}
int save_game()
{
    char *fname;
    FILE *fp;
    gotoxy(20,2);printf("File name: ");
    scanf("%s",&fname);
    if ( ( fp = fopen ( fname, "wb" ) ) == NULL) return 0;
    fwrite(board, sizeof ( board ), 1, fp);
    fclose(fp);
    setfillstyle(1,3);
    bar(20,17,400,40);
    return 1;
}
 

int GetXY(int X,int Y)
{
   int i,j,x=200,y=100,flag=0;
   for(i=0;i<7;i++)
   {
    for(j=0;j<7;j++)
    {
        if(board[j][i]!=-1)
        {
         if(x==X && y==Y)
         flag=1;
        }
        x+=40;
    }
    x=200;
    y+=40;
   }
   return flag;
}
 

void Drawborder(int x,int y)
{
   setwritemode(COPY_PUT);
   setcolor(BLUE);
   line(x+60,y-20,x+180,y-20);
   line(x+60,y+60,x+60,y-20);
   line(x-40,y+60,x+60,y+60);
   line(x-40,y+60,x-40,y+180);
   setcolor(15);
   line(x-40,y+180,x+60,y+180);
   setcolor(0);
   line(x+60,y+180,x+60,y+280);
   setcolor(15);
   line(x+180,y-20,x+180,y+60);
   setcolor(0);
   line(x+180,y+60,x+290,y+60);
   setcolor(15);
   line(x+290,y+60,x+290,y+180);
   line(x+180,y+180,x+290,y+180);
   line(x+180,y+180,x+180,y+280);
   line(x+180,y+280,x+60,y+280);
   setwritemode(XOR_PUT);
}
void DrawBoard()
{
   int i,j,x=200,y=100;
   x=200;y=100;
   setfillstyle(1,1);
   bar(x-15,y-15,x+260,y+260); /* SQUARE SA MGA NODE */
   setfillstyle(1,7);
   bar(x,y,x,y);
   bar(x,y,x,y);
   bar(x,y,x,y);
   bar(x,y,x,y);
   setcolor(11);

 for(i=0;i<7;i++)
    {
    for(j=0;j<7;j++)
    {
        if(board[j][i]!=-1)
        {
	switch(board[j][i]){
		case 1:Nodes(x,y,RED);break;
		case 2:Nodes(x,y,GREEN);break;
		case 3:Nodes(x,y,YELLOW);break;
		case 4:Nodes(x,y,5);break; /*5=PINK*/
		}
	}
	x+=40;
    }
    x=200;
    y+=40;
   }
   settextstyle(1,0,3);
}

void Nodes(int x,int y,int c)
{
   setfillstyle(1,c);
   setcolor(c);
   fillellipse(x,y,5,5);
   if(c!=0)
   {
   if(c==15){setcolor(7);setfillstyle(1,7);}
   else {setfillstyle(1,15);setcolor(15);}
   fillellipse(x+3,y-2,1,2);
   }
}

void Intro (){
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

}

void LOADINGSCREEN(){
int x=170,i;
int gd = DETECT, gm, errorcode;

initgraph(&gd,&gm,"c:\\tc\\bgi");
setbkcolor(bk);
setcolor(BLUE);
settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
outtextxy(170,180,"LOADING, PLEASE WAIT");

/* LOADING BAR */
for(i=0;i<318;++i) {
	delay(10);
	line(x,200,x,220);
	x++;
	}
}

void Graphics(){
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
   closegraph();exit(1);
   }
}

void Background(){

   int i;
   setfillstyle(1,3);
   bar(0,0,640,480);
   setbkcolor(BLUE);
   for(i=0;i<=15;i++){
   setcolor(i);
   rectangle(0+i,0+i,640-i,480-i);
   }

  win("KOLOR MATCHING",140,45,505,400,1);
  win("Keys",24,45,135,290,1);
  win("Help",510,45,625,290,1);
  setfillstyle(1,0);
  bar(35,75,125,280);
  bar(520,75,618,280);
  winp(35,75,125,280,1);
  winp(520,75,618,280,1);
  setcolor(14);
  settextstyle(2,0,4);
  outtextxy(42,80,"Keys used");
  setcolor(15);
  outtextxy(42,100,"Enter : Pick");
  outtextxy(47,120,"³  : Up");
  outtextxy(47,140,"³  : Down");
  outtextxy(42,160,"<- : Left");
  outtextxy(42,180,"-> : Right");
  outtextxy(42,200,"S : save game");
  outtextxy(42,220,"L : load game");
  outtextxy(42,240,"Esc : Exit");
  line(47,120,50,123);
  line(47,120,43,123);
  line(47,140,50,143);
  line(47,140,43,143);
  outtextxy(523,80,"Use Arrow Keys");
  outtextxy(523,100,"to move around");
  outtextxy(523,120,"then press enter");
  outtextxy(523,140,"to select node.");
  outtextxy(523,160,"Connect to ano-");
  outtextxy(523,180,"ther node to");
  outtextxy(523,200,"guess the line.");
  outtextxy(523,220,"P.S. Don't make.");
  outtextxy(523,240,"any circuit!");

  win("",190,410,480,460,0);
  setfillstyle(1,0);
  bar(200,420,470,450);
  settextstyle(1,0,2);
  setcolor(10);
  outtextxy(220,420,"Kolors connected :");

}

void kruskal(){
    long belongs[49],i,j,cno1,cno2;
    elist.n=0;

    for(i=1;i<n;i++){
        for(j=0;j<i;j++){
            if(G[i][j]!=0){
                elist.data[elist.n].u=i;
                elist.data[elist.n].v=j;
                elist.data[elist.n].w=G[i][j];
                elist.n++;
            }
	}
    }

    sort();

    for(i=0;i<n;i++){
	belongs[i]=i;
	}

    spanlist.n=0;

    for(i=0;i<elist.n;i++){
        cno1=find(belongs,elist.data[i].u);
        cno2=find(belongs,elist.data[i].v);

        if(cno1!=cno2){
            spanlist.data[spanlist.n]=elist.data[i];
            spanlist.n=spanlist.n+1;
            union1(belongs,cno1,cno2);
        }
    }
}

long find(long belongs[],long vertexno){
    return(belongs[vertexno]);
}

void union1(long belongs[],long c1,long c2){
    long i;

    for(i=0;i<n;i++){
	if(belongs[i]==c2){
	    belongs[i]=c1;
	    }
	}
}

void sort(){
    long i,j;
    edge temp;

    for(i=1;i<elist.n;i++){
	for(j=0;j<elist.n-1;j++){
            if(elist.data[j].w>elist.data[j+1].w){
                temp=elist.data[j];
                elist.data[j]=elist.data[j+1];
                elist.data[j+1]=temp;
		}
	}
    }
}

void print(){
    long i,cost=0;

    for(i=0;i<spanlist.n;i++){
	printf("\n%ld\t%ld\t%ld",spanlist.data[i].u+1,spanlist.data[i].v+1,spanlist.data[i].w);
	from[i]=spanlist.data[i].u+1;
	to[i]=spanlist.data[i].v+1;
	printf("\n%ld %ld\n",from[i],to[i]);
	cost=cost+spanlist.data[i].w;
	}

    printf("\n\nCost of the spanning tree=%ld",cost);
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

   else {
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
}


void end()
{
   if(ind==(xmax-1)*(ymax-1))
   {
      if(x>o)
      { printf("     Player 1 wins with %d-%d",x,o); getch(); exit(0); }
      if(x==o)
      { printf("     Tie %d-%d",x,o); getch(); exit(0); }
      if(x<o)
      { printf("     Player 2 wins with %d-%d",o,x); getch(); exit(0); }
   }
}
