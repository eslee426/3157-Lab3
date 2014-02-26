Name: Elisha Lee
Uni: esl2131
Lab Assignment: 3

Part 1: Contains 4 files as well and a Makeme file
mylist.c: implements a single linked list that can hold any data type. 
which include functions prof Jae provides:

mylist.h: headerfile for mylist.h that was provided

mylist-test.c: test file that was provided

mylist-test-output.txt: given sample output file

Valgrind output:

==4518== Memcheck, a memory error detector
==4518== Copyright (C) 2002-2011, and GNU GPL'd, by Julian Seward et al.
==4518== Using Valgrind-3.7.0 and LibVEX; rerun with -h for copyright info
==4518== Command: ./mylist-test
==4518== 
testing addFront(): 9.0 8.0 7.0 6.0 5.0 4.0 3.0 2.0 1.0 
testing flipSignDouble(): -9.0 -8.0 -7.0 -6.0 -5.0 -4.0 -3.0 -2.0 -1.0 
testing flipSignDouble() again: 9.0 8.0 7.0 6.0 5.0 4.0 3.0 2.0 1.0 
testing findNode(): OK
popped 9.0, the rest is: [ 8.0 7.0 6.0 5.0 4.0 3.0 2.0 1.0 ]
popped 8.0, the rest is: [ 7.0 6.0 5.0 4.0 3.0 2.0 1.0 ]
popped 7.0, the rest is: [ 6.0 5.0 4.0 3.0 2.0 1.0 ]
popped 6.0, the rest is: [ 5.0 4.0 3.0 2.0 1.0 ]
popped 5.0, the rest is: [ 4.0 3.0 2.0 1.0 ]
popped 4.0, the rest is: [ 3.0 2.0 1.0 ]
popped 3.0, the rest is: [ 2.0 1.0 ]
popped 2.0, the rest is: [ 1.0 ]
popped 1.0, the rest is: [ ]
testing addAfter(): 1.0 2.0 3.0 4.0 5.0 6.0 7.0 8.0 9.0 
popped 1.0, and reversed the rest: [ 9.0 8.0 7.0 6.0 5.0 4.0 3.0 2.0 ]
popped 9.0, and reversed the rest: [ 2.0 3.0 4.0 5.0 6.0 7.0 8.0 ]
popped 2.0, and reversed the rest: [ 8.0 7.0 6.0 5.0 4.0 3.0 ]
popped 8.0, and reversed the rest: [ 3.0 4.0 5.0 6.0 7.0 ]
popped 3.0, and reversed the rest: [ 7.0 6.0 5.0 4.0 ]
popped 7.0, and reversed the rest: [ 4.0 5.0 6.0 ]
popped 4.0, and reversed the rest: [ 6.0 5.0 ]
popped 6.0, and reversed the rest: [ 5.0 ]
popped 5.0, and reversed the rest: [ ]
==4518== 
==4518== HEAP SUMMARY:
==4518==     in use at exit: 0 bytes in 0 blocks
==4518==   total heap usage: 18 allocs, 18 frees, 288 bytes allocated
==4518== 
==4518== All heap blocks were freed -- no leaks are possible
==4518== 
==4518== For counts of detected and suppressed errors, rerun with: -v
==4518== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 2 from 2)



*************************************************************************



Part 2: 1 file and Makeme
revecho.c: takes in string input from command line and puts into linked list
prints list and checks if list has "dude"

Valgrind Output:
*Uses string "hello world dude"

==26247== Memcheck, a memory error detector
==26247== Copyright (C) 2002-2011, and GNU GPL'd, by Julian Seward et al.
==26247== Using Valgrind-3.7.0 and LibVEX; rerun with -h for copyright info
==26247== Command: ./revecho hello world dude
==26247== 
dude
world
hello

dude found
==26247== 
==26247== HEAP SUMMARY:
==26247==     in use at exit: 0 bytes in 0 blocks
==26247==   total heap usage: 3 allocs, 3 frees, 48 bytes allocated
==26247== 
==26247== All heap blocks were freed -- no leaks are possible
==26247== 
==26247== For counts of detected and suppressed errors, rerun with: -v
==26247== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 2 from 2)


** uses string "hello world"
==26258== Memcheck, a memory error detector
==26258== Copyright (C) 2002-2011, and GNU GPL'd, by Julian Seward et al.
==26258== Using Valgrind-3.7.0 and LibVEX; rerun with -h for copyright info
==26258== Command: ./revecho hello world
==26258== 
world
hello

dude not found
==26258== 
==26258== HEAP SUMMARY:
==26258==     in use at exit: 0 bytes in 0 blocks
==26258==   total heap usage: 2 allocs, 2 frees, 32 bytes allocated
==26258== 
==26258== All heap blocks were freed -- no leaks are possible
==26258== 
==26258== For counts of detected and suppressed errors, rerun with: -v
==26258== ERROR SUMMARY: 0 errors from 0 contexts (suppressed: 2 from 2)
