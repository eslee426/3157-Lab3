#include <stdio.h>
#include <stdlib.h>
#include "mylist.h"


// adds node to front of list
struct Node *addFront(struct List *list, void *data) 
{
    //creates new node
    struct Node *front = (struct Node *)malloc(sizeof(struct Node *));
    if (front == NULL) 
    {
        perror("malloc returned NULL");
        exit(1);
    }
    
    //adds to front
    front->next = list->head;
    list->head = front;
    front->data = data;
    return front;
}

//calls f() on each element of the list
void traverseList(struct List *list, void (*f)(void *))
{
   struct Node *linkedList = list->head;
   //traverses until list is null
   while (linkedList) {
       f(linkedList->data);
       linkedList = linkedList->next;
   }
}


void flipSignDouble(void *data)
{
    double *nodeData = (double *) data;
    *nodeData = *nodeData * -1;

}

/*
int compareDouble(const void *data1, const void *data2)
{

}

struct Node *findNode(struct List *list, const void *dataSought,
        int (*compar)(const void *, const void *))
{

}

void *popFront(struct List *list) 
{

}

void removeAllNodes(struct List *list)
{

}

struct Node *addAfter(struct List *list, 
        struct Node *prevNode, void *data)
{

}

void reverseList(struct List *list)
{

}
*/
