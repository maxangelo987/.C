
#include<X11/Xlib.h>
#include<X11/Xutil.h>

static Display *dpy = NULL;
static Window   win;
static XImage  *ima = NULL;
static int 		s, wth, width, height;

void
x11_destroy() {
	if (ima) XDestroyImage(ima);
}

void x11_img_get() { ima = XGetImage(dpy, win, 0, 0, width, height, AllPlanes, ZPixmap); } 

void x11_img_put() { XPutImage(dpy, win, DefaultGC(dpy, s), ima, 0, 0, 0, 0, width, height); } 

void
x11_new(int x, int y, int w) {
	int i;
	dpy = XOpenDisplay(NULL);
	s   = DefaultScreen(dpy);
	wth = w;
	win = XCreateSimpleWindow(dpy, RootWindow(dpy, s), 0, 0, 
		(width = (x + 1) * w), (height = (y + 1) * w), 10, 
		BlackPixel(dpy, s),
		WhitePixel(dpy, s)
	);
   
	XMapWindow(dpy, win);
	XFlush(dpy); XSync(dpy, True);
	XSetForeground(dpy, DefaultGC(dpy, s), BlackPixel(dpy, s));
	for (i = 0; i <= y; i++) XDrawLine(dpy, win, DefaultGC(dpy, s), 0, i * w, x * w, i * w); 
	XFlush(dpy); XSync(dpy, True);
	for (i = 0; i <= x; i++) XDrawLine(dpy, win, DefaultGC(dpy, s), i * w, 0, i * w, y * w); 
	XFlush(dpy); XSync(dpy, True);
}
				
void
x11_draw(int x, int y, int dir) {
	XSetForeground(dpy, DefaultGC(dpy, s), WhitePixel(dpy, s));
	switch (dir) {
	case 2:
		y++;
	case 0: 
		XDrawLine(dpy, win, DefaultGC(dpy, s), x * wth + 1, y * wth, (x + 1) * wth - 1, y * wth);
		break;
	case 3:
	   	x++;
	case 1:
		XDrawLine(dpy, win, DefaultGC(dpy, s), x * wth, y * wth + 1, x * wth, (y + 1) * wth - 1);
		break;
	}
	XFlush(dpy); XSync(dpy, True);
}

void
x11_show(int x, int y, int color) {
	int wt;
	unsigned int c;
	c = color;
	wt = wth - 2;
	if (wt < 1) wt = 1;
	XSetForeground(dpy, DefaultGC(dpy, s), c);
	XFillRectangle(dpy, win, DefaultGC(dpy, s),
			(x * wth) + 1, (y * wth) + 1, wt, wt);	
	XFlush(dpy); XSync(dpy, True);
}

void 
x11_waitclose() {
	XEvent evt;
	x11_img_get(); 
	XSelectInput(dpy, win,
                 ExposureMask    | KeyPressMask | 
                 ButtonPressMask | ButtonReleaseMask);
	for (;;) {
		XNextEvent(dpy, &evt);
		switch (evt.type) {
		case KeyPress:
		   	exit(0);
		case Expose:
			x11_img_put();
		}
	}
}
