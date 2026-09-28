#include <stdio.h>
#include <stdlib.h>

#define MAXVERT 10
#define MAXEDGES 20
#define INF 100000

/*graph representation using an Adjacency matrix*/
typedef struct AdjMatrix
{
    int nodes;
    int adjMat[MAXVERT][MAXVERT];
} graph;

/*function prototypes*/
int find(int node, int *trees);
void merge(int i, int j, int *trees);
void printminimal(int min[][3], int n);

/*main algorithm*/
void kruskal(graph *g)
{
    int EDGES[MAXEDGES][3]; /*graph edges*/
    int MINEDGES[MAXVERT-1][3]; /*edges already in the minimal spanning tree*/
    int nextedge=0;
    int numedges=0;
    int trees[MAXVERT]; /*tree subsets*/
    int i, j, k;
    int temp;

    for(i=0;i<g->nodes;i++)
        trees[i]=i;
    k=0;

    for(i=0; i<g->nodes; i++)
        for(j=0; j<g->nodes; j++)
        {
            if(i>j)
            {
                EDGES[k][0]=i;
                EDGES[k][1]=j;
                EDGES[k][2]=g->adjMat[i][j];
                k++;
            }
            else
                break;
        }

    /*Bubblesort*/
    for(i=0; i<g->nodes; i++)
        for(j=0; j<i; j++)
        {
            if(EDGES[j][2] > EDGES[j+1][2])
            {
                temp=EDGES[j][0];
                EDGES[j][0]=EDGES[j+1][0];
                EDGES[j+1][0]=temp;
                temp=EDGES[j][1];
                EDGES[j][1]=EDGES[j+1][1];
                EDGES[j+1][1]=temp;
                temp=EDGES[j][2];
                EDGES[j][2]=EDGES[j+1][2];
                EDGES[j+1][2]=temp;
            }
        }

    while(numedges < (g->nodes-1))
    {
        i=find(EDGES[nextedge][0], trees);
        j=find(EDGES[nextedge][1], trees);
        if((i!=j)&&(EDGES[nextedge][2]!=-1))    /*check if the nodes belong to the same subtree*/
        {
            merge(i,j,trees);
            MINEDGES[numedges][0]=EDGES[nextedge][0];
            MINEDGES[numedges][1]=EDGES[nextedge][1];
            MINEDGES[numedges][2]=EDGES[nextedge][2];
            numedges++;
        }
        nextedge++;
    }
}

int find(int node, int *trees)   
{
    if(trees[node]!=node)
        return trees[node];
    else
        return node;
}
void merge(int i, int j, int *trees)
{
    if(i<j)
        trees[j]=i;
    else
        trees[i]=j;
}
void printminimal(int min[][3], int n)
{
    int i, weight=0;
    printf("Minimal tree:\n(");
    for(i=0;i<n;i++)
    {
        printf("(V%d,V%d), ", min[i][0],min[i][1]);
        weight+=min[i][2];
    }
    printf(")\n Total weight sum of the minimal tree is: %d", weight);
}
int main(void)
{
    int i,j;
    graph *g=(graph *)malloc(sizeof(graph));
    /*int adjMat[8][8] = {0,INF,INF,11,INF,1,7,
                          INF,0,INF,3,INF,4,8,INF,
                          INF,INF,0,INF,INF,INF,12,INF,
                          INF,3,INF,0,15,INF,INF,INF,
                          11,INF,INF,INF,0,20,INF,INF,
                          INF,4,INF,INF,20,0,INF,INF,
                          1,8,12,INF,INF,INF,0,5,
                          7,INF,INF,INF,INF,INF,5,0};*/
    for(i=0;i<4;i++)
        for(j=0;j<i;j++)
        {
            if(i==j)
            {
                g->adjMat[i][j]=0;
                continue;
            }
            printf("%d-%d= ", i, j);
            scanf("%d", &(g->adjMat[i][j]));
            g->adjMat[j][i]=g->adjMat[i][j];
        }
    g->nodes=4;
    kruskal(g);
}