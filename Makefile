CC=gcc
CFLAGS=-Wall -ansi -pedantic
LDFLAGS=
LIBS=-lbsd


all:	pngen

%:	%.c
	$(CC) $(CFLAGS) $(LDFLAGS) $^ -o $@ $(LIBS)

clean:
	rm -f $(wildcard pngen pngen.o)
