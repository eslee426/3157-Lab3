CC = gcc

INCLUDES = 
CFLAGS = -g -Wall $(INCLUDES)

LDFLAGS = -g
LDLIBS = 

mylist-test: libmylist.a mylist-test.o

libmylist.a: mylist.o
	ar rc libmylib.a mylist.o
	ranlib libmylib.a

mylist-test.o: mylist.h

mylist.o: mylist.h

.PHONY: clean
clean:
	rm -f *.o a.out core mylist-test 

.PHONY: all
all: clean mylist-test

