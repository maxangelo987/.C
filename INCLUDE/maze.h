#ifndef _maze_h_
#define _maze_h_

#ifndef _maze_c_
typedef struct _maze_t *pmaze_t;
#endif

pmaze_t maze_destroy(pmaze_t m);
pmaze_t maze_new(int m, int n, void (*open_door)(int, int, int));
void    maze_solve(pmaze_t pm, void (*show)(int, int, int));
#endif
