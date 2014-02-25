CC = gcc

INCLUDES = 
CFLAGS = -g -Wall $(INCLUDES)

LDFLAGS = -g
LDLIBS = -lm


revecho: revecho.o

revecho.o: revecho.c

.PHONY: clean
clean:
	rm -f *.o a.out core revecho

.PHONY: all
all: clean revecho
