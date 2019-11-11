#ifndef _x11_h_
#define _x11_h_

void x11_destroy();
void x11_new(int x, int y, int w);
void x11_draw(int x, int y, int dir);
void x11_show(int x, int y, int color);
void x11_waitclose();

#endif
