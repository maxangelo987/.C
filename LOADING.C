#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

main() {
int gd=DETECT,gm, a,color,overlap=1;
initgraph(&gd,&gm, "C:\\tc\\bgi");
clrscr();

 setcolor(RED);

    rectangle(90,385,510,405);
    setcolor(BLUE);
    for(a=100; a<=500; a++)
    {
    rectangle(130,402,a,388);
    delay(15);
        if(overlap=1)
        {
             setcolor(BLUE);
             settextstyle(2,HORIZ_DIR,5);
             outtextxy(210,387,"Loading Please wait...");
             overlap=0;
             setcolor(WHITE);
        }
    }

    getch();
    closegraph();
}