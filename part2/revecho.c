#include <stdio.h>
#include <stdlib.h>
#include "mylist.h"

int main(int argc, char **argv) {
    struct List stringList;
    int i;
    initList(&stringList);
    for(i = 1; i < argc; i++) {
        addFront(&stringList, argv[i]);
    }

    struct Node *temp = stringList.head;
    while (temp) {
        printf("%s\n", (char *)temp->data);
        temp = temp->next;
    }
    return 0;

}
