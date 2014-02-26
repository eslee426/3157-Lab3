#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "mylist.h"

int main(int argc, char **argv) {
    struct List stringList;
    int i;
    initList(&stringList);
    for(i = 1; i < argc; i++) {
        addFront(&stringList, argv[i]);
    }

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
