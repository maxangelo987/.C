#include <stdio.h>
#include "x11.h"
#include "maze.h"

int main(int nn, char **a) {
	int m, n, w;
	pmaze_t maze;

	if (nn != 4) {
		fprintf(stderr, "%s usage: %s lines columns pixels\n", a[0], a[0]); 
		exit(1); 
	}
	m = atoi(a[2]), n = atoi(a[1]), w = atoi(a[3]);
	x11_new(m, n, w);
	maze = maze_new(m, n, x11_draw);
/*sleep(5);*/
	maze_solve(maze, x11_show);
/*sleep(30); */
	x11_waitclose();
	maze_destroy(maze);
}
