CC      = gcc -g
CPPFLAGS = -I../../INCLUDE
LDFLAGS = -L/usr/X11R6/lib
LIBS    = -lX11
HDR     = ../../INCLUDE/x11.h ../../INCLUDE/maze.h
SRC     = x11.c maze.c
OBJ     = x11.o maze.o

all: maze

maze: ${OBJ}
	${CC} ${CPPFLAGS} -o maze main.c ${OBJ} ${LDFLAGS} ${LIBS}

clean:
	rm -f ${OBJ} maze
