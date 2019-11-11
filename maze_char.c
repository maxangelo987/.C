#include <stdlib.h>
#include <unistd.h>

#define RED 0xFF0000
#define GREEN 0x00FF00
#define BLUE  0x0000FF
#define YELLOW 0x00FFFF

/* define directions: */
enum { N, W, S, E };

/* 
 * Cell definitions: 
 * ------------------
 * Cells are maped by chars.
 * 1st bit maps North door
 * 2nd bit maps West  door
 * 3rd bit maps South door
 * 4th bit maps East  door
 * 5th bit maps visited cells.
 * 
 * bit unset  => closed or unvisited
 * bit set    => open   or visited
 */

/* Bit masks: */
#define CELL_N  1
#define CELL_W  2
#define CELL_S  4
#define CELL_E  8
#define CSTATE 16

/* define maze structure */
typedef struct _maze_t {
    /* maze size = m lines * n columns */
    int m, n;
    /* entrence and exit cells */
    char *in, *out;
    /* array of cells */
    char *array;
} maze_t, *pmaze_t;

/* include public function prototypes: */
#define _maze_c_
#include "maze.h"
#undef  _maze_c_

/* convert cell pointer to x coordinate: */
int cell_x(pmaze_t pm, char *pc) {
    if (!pm || !pm->array || !pc)        return -1;
    if (pc < pm->array)                  return -2;
    if (pc >= pm->array + pm->m * pm->n) return -3;
    return (pc - pm->array) % pm->m;
}

/* convert cell pointer to y coordinate: */
int cell_y(pmaze_t pm, char *pc) {
    if (!pm || !pm->array || !pc)        return -1;
    if (pc < pm->array)                  return -2;
    if (pc >= pm->array + pm->m * pm->n) return -3;
    return (pc - pm->array) / pm->m;
}

/* convert x, y to cell pointer: */
char *
cell_at_xy(pmaze_t pm, int x, int y) {
    if (!pm || !pm->array)               return NULL;
    if (x < 0 || x >= pm->m)             return NULL;
    if (y < 0 || y >= pm->n)             return NULL;
    return pm->array + (pm->m * y + x);
}

/* return cell pointer at direction from current cell: */
char *
cell_at_dir(pmaze_t pm, char *pc, int dir) {
    int x, y;
    if (!pm || !pm->array || !pc)        return NULL;
    if (dir < N || dir > E)              return NULL;
    if (((x = cell_x(pm, pc)) < 0) || 
         (y = cell_y(pm, pc)) < 0)       return NULL;
    if      (dir == N) y--;
    else if (dir == W) x--;
    else if (dir == S) y++;
    else if (dir == E) x++;  
    return cell_at_xy(pm, x, y);
}

/* random int from 0 to n: */
int
maze_rand(int n) {
    return rand() % n;
}

/* pick randomly a border cell: */
char *
maze_rand_border_cell(pmaze_t pm) {
    char *pc = NULL;
    int i, j;
    if (!pm || !pm->array) return NULL;
    i = maze_rand(4);
    switch (i) {
    case N:
        j = 0;
        i = maze_rand(pm->m);
        break;
    case S:
        j = pm->n - 1;
        i = maze_rand(pm->m);
        break;
    case W:
        i = 0;
        j = maze_rand(pm->n);
        break;
    case E:
        i = pm->m - 1;
        j = maze_rand(pm->n);
    }
    return cell_at_xy(pm, i, j);
}

/* Maze generation loop: */
void
maze_cell_next(pmaze_t pm, char *pc, void (*open_door)(int, int, int)) {
    struct dir {int d; char *pc;} dirs[4];
    int i, n, h;
    char *p;
    char **history;

    /* parameter check */
    if (!pm || !pm->array || !pc) return;

    /* prepare history array: */
    history = (char **) malloc(pm->m * pm->n * sizeof(char *));

    h = 0;
    history[h++] = pc;

    for (;;) {

        /* repeat: */
        for (;;) {
            /* set CSTATE to visited: */
            *pc |= CSTATE;
            /* update state */
            n = 0;
            /* check what door may be opened: */

            for (i = N; i <= E; i++)
                /* if has at i which is not in path yet */
                if ((p = cell_at_dir(pm, pc, i))) 
                    if (! (*p & CSTATE)) 
                        /* save direction and cell */
                        dirs[n].d = i, dirs[n++].pc = p;

            /* no out of path, return */
            if (!n) break;
        
            /* choose 1 */
            if (n == 1) i = 0; /* the only one left or */
            else        i = maze_rand(n); /* at random */

            /* get cell and cell direction */ 
            p = dirs[i].pc;
            i = dirs[i].d;

            /* draw if possible */
            if (open_door) open_door(cell_x(pm, pc), cell_y(pm, pc), i);

            /* link the 2 cells w/ appropriate direction */
            *pc |= 1 << i;
            *p  |= 1 << ((i + 2) % 4);

            history[h++] = pc = p;
        } 
        if (h == 0) break;
        pc = history[--h];
    }
    free(history);
}

/* destructor: */
pmaze_t
maze_destroy(pmaze_t m) {
    if (m) {
        if (m->array) free(m->array);
        free(m);
    } 
    return NULL;    
}

/* creator: */
pmaze_t
maze_new(int m, int n, void (*open_door)(int, int, int)) {
    pmaze_t p;
    if (!(p = (pmaze_t) malloc(sizeof(maze_t)))) return NULL;
    if (!(p->array = malloc(n * m)))  return maze_destroy(p);
    memset(p->array, 0, n * m);

    srand(getpid());
    
    p->m = m;
    p->n = n;

    p->in = maze_rand_border_cell(p);
    while ((p->out = maze_rand_border_cell(p)) == p->in);

    maze_cell_next(p, p->in, open_door);

    return p;
}

/* solver: */
void
maze_solve(pmaze_t pm, void (*show)(int, int, int)) {
    register int i, from;
    register char *p;

    if (!pm || !pm->array || !pm->in || ! pm->out) return;
    
    /* compute initial from direction */ 
    i = cell_y(pm, p);
    if      (i == 0)         from = N;
    else if (i == pm->m - 1) from = S;
    else {
        i = cell_x(pm, p); 
        if (i == 0)          from = W;
        else                 from = E;
    }

    p = pm->in;
    if (show) {
        show(cell_x(pm, p), cell_y(pm, p), RED);
        show(cell_x(pm, pm->out), cell_y(pm, pm->out), GREEN);
    }

    /* solve with right hand method */
    while (p != pm->out) {
        if (show && p != pm->in && p != pm->out) 
            show(cell_x(pm, p), cell_y(pm, p), YELLOW);
        
        /* go to next cell on the right */
        for (i = (from + 1) % 4; i != from && (!(*p & (1 << i))) ; i = (i + 1) % 4);
 
        p = cell_at_dir(pm, p, i);
             
        /* get new from direction */
        from = (i + 2) % 4;

        /* trace if we can */
        if (show) show(cell_x(pm, p), cell_y(pm, p), BLUE);
    }
}
