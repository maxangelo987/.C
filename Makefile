
CC      = gcc -g
LDFLAGS = -L/usr/X11R6/lib
LIBS    = -lX11
HDR     = x11.h maze.h
SRC     = x11.c maze.c 
OBJ     = x11.o maze.o
CCFLAGS =

all: maze
maze: ${OBJ}
	${CC} ${CCFLAGS} -o maze main.c ${OBJ} ${LDFLAGS} ${LIBS}

clean:
	rm ${OBJ} maze
