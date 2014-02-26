CC = gcc

INCLUDES = 
CFLAGS = -g -Wall $(INCLUDES)

LDFLAGS = -g
LDLIBS = 

mylist-test: mylist-test.o libmylist.a

libmylist.a: mylist.o
	ar rc libmylist.a mylist.o
	ranlib libmylist.a

mylist-test.o: mylist.h

mylist.o: mylist.h

.PHONY: clean
clean:
	rm -f *.o a.out core mylist-test libmylist.a 

.PHONY: all
all: clean mylist-test

