#include<conio.h>
#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<values.h>

#define INFINITY MAXINT
#define MAXVERTEX 7

enum boolean {FALSE, TRUE};
typedef enum boolean bool;

struct VertexStruct
{
    char label[2];
    int index;
    int x;
    int y;
    int color;
};
typedef struct VertexStruct Vertex;


Vertex vert[MAXVERTEX];
int vcount; 

int adjmatrix[MAXVERTEX][MAXVERTEX];
int m;

union REGS regs;

void InitMouse()
{
    regs.x.ax = 0x00;
    int86(0x33, &regs, &regs);

    if(regs.x.ax == 0)
        exit(0);
}

void ShowMouse()
{
    regs.x.ax = 0x01;
    int86(0x33, &regs, &regs);
}

void HideMouse()
{
    regs.x.ax = 0x02;
    int86(0x33, &regs, &regs);
}

bool IsClick()
{
    regs.x.ax = 0x03;
    int86(0x33, &regs, &regs);

    if(regs.x.bx && 1)
    {
        delay(400);
        return TRUE;
    }
    else
        return FALSE;
}

void DrawVertex(Vertex * v)
{
    char str[5];
    HideMouse();
    setcolor(WHITE);
    setfillstyle(SOLID_FILL, v->color);

    fillellipse(v->x, v->y, 16, 16);
    outtextxy(v->x-3, v->y-12, v->label);

    sprintf(str, "{%d}", v->color);
    outtextxy(v->x-12, v->y, str);
    ShowMouse();
}

void DrawEdge(Vertex * u, Vertex * v, int edgeColor)
{
    setcolor(edgeColor);
    line(u->x, u->y, v->x, v->y);
    DrawVertex(u);
    DrawVertex(v);
}

void DrawGraph(const int matrix[][MAXVERTEX])
{
    int i, j;
    bool flag[MAXVERTEX][MAXVERTEX];

    cleardevice();

    for(i=0; i<vcount; i++)
        for(j=0; j<vcount; j++)
            flag[i][j] = TRUE;

    for(i=0; i<vcount; i++) 
    {
        for(j=0; j<vcount; j++)
        {
            if(matrix[i][j] && flag[j][i])
            {
                DrawEdge(&vert[i], &vert[j], WHITE);
                flag[i][j] = flag[j][i] = FALSE;
            }
        }
    }
}

void GetVertices()
{
    char lbl = 'A';
    vcount = 0;

    InitMouse();
    ShowMouse();
    
    setcolor(WHITE);
    outtextxy(4, 1, "Point and click to add vertices");
    outtextxy(4, 10, "Press `f' to finish");

    do
    {
        if(IsClick())
        {
            sprintf(vert[vcount].label, "%c", lbl++);
            vert[vcount].x = regs.x.cx;
            vert[vcount].y = regs.x.dx;
            vert[vcount].index = vcount;            
            vert[vcount].color = 0;
            DrawVertex(&vert[vcount]);
            vcount++;
        }
        if(kbhit())
            if(getch() == 'f')
                break;
    }while(vcount < MAXVERTEX);

    HideMouse();
}

void GetEdges()
{
    int row, col;

    for(row=0; row<vcount; row++)
        for(col=0; col<vcount; col++)
            adjmatrix[row][col] = INFINITY;

    gotoxy(1, 1);
    printf("Enter 1, else 0 for no edge         \n");
    printf("                      ");

    for(row=0; row<vcount; row++)
    {
        printf("\n");
        for(col=0; col<vcount; col++)
        {
            if(row != col)
            {
                if(adjmatrix[col][row] == INFINITY)
                {
                    printf("(%s,%s): ", vert[row].label, vert[col].label);
                    scanf("%d", &adjmatrix[row][col]);
                    adjmatrix[col][row] = adjmatrix[row][col];

                    if(adjmatrix[row][col])
                        DrawEdge(&vert[row], &vert[col], WHITE);
                }
            }
            else adjmatrix[row][col] = 0;
        }
    }
}

void FindColor(int k)
{
    int i;

    do
    {
        vert[k].color = (vert[k].color+1) % (m+1); 
        DrawVertex(&vert[k]);
        delay(1800);

        if(vert[k].color == 0) return; 

        for(i=0; i<vcount; i++)
        {
            if(adjmatrix[k][i] && (vert[k].color == vert[i].color))
            {
                DrawEdge(&vert[k], &vert[i], RED);
                delay(1800);
                DrawEdge(&vert[k], &vert[i], WHITE);
                break;
            }
        }

        if(i == vcount)    return; 

    }while(1);
}

void MColoring(int k)
{
    FindColor(k);

    if(vert[k].color == 0) return;

    if(k != vcount-1)
        MColoring(k+1);
}

int main(void)
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "c:\\tc\\bgi");

    GetVertices();
    GetEdges();

    DrawGraph(adjmatrix);

    m = 15;      
    MColoring(0); 

    getch();
    closegraph();
    return 0;
}
