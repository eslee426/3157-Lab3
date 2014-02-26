/*
 * Name: Elisha Lee
 * UNI: esl2131
 * File: revecho.c
 * Description: Takes input from command line and inserts
 * them into a linked list; prints out list and checks if "dude"
 * is contained in the list"
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mylist.h"

int main(int argc, char **argv) {
    struct List stringList;
    int i;
    initList(&stringList);
    // added strings from command line to linked list
    for(i = 1; i < argc; i++) {
        addFront(&stringList, argv[i]);
    }
    
    // prints list and checks if "dude" is in list
    struct Node *temp = stringList.head;
    int found = 0;
    while (temp) {
        printf("%s\n", (char *)temp->data);
        if(strcmp("dude", (char *)temp->data) == 0) {
            found = 1;
        }
        temp = temp->next;
    }

    if (found) {
        printf("\ndude found\n");
    } else {
        printf("\ndude not found\n");
    }

    removeAllNodes(&stringList);
    return 0;

}
