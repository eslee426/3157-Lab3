/*
 * Name: Elisha Lee
 * uni: esl2131
 * File Name: mylist.c
 * Description: implmentation of a Linked List that can 
 * hold any data type
 */


#include <stdio.h>
#include <stdlib.h>
#include "mylist.h"


// adds node to front of list
struct Node *addFront(struct List *list, void *data) 
{
    //creates new node
    struct Node *front = (struct Node *)malloc(sizeof(struct Node));
    if (front == NULL) {
        perror("malloc returned NULL");
        exit(1);
    }
    
    //adds to front
    front->data = data;
    front->next = list->head;
    list->head = front;
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

//takes given data point and makes it negative
void flipSignDouble(void *data)
{
    double *nodeData = (double *) data;
    *nodeData = *nodeData * -1;

}

// if given data are equal, returns 0 and 1 otherwise
int compareDouble(const void *data1, const void *data2)
{
    double *double1 = (double *) data1;
    double *double2 = (double *) data2;
    int result;
    if (*double1 == *double2) {
        result = 0;
    } else {
        result = 1;
    } 
    return result;
}

// uses compar function to find given data in list
struct Node *findNode(struct List *list, const void *dataSought,
        int (*compar)(const void *, const void *))
{
    struct Node *linkedList = list->head;
    struct Node *nodeFound = NULL;

    while (linkedList) {
        // sets nodeFound = 0 if data are equal
        if(compar(dataSought, linkedList->data) == 0) {
            nodeFound = linkedList;
        }
        linkedList = linkedList->next;
    }
    return nodeFound;
}

// removes first node in list and returns pointer to data
void *popFront(struct List *list) 
{
    if (isEmptyList(list)) {
        return NULL;
    }
    struct Node *firstnode = list->head;
    void *returndata = firstnode->data;
    
    //removes front node
    list->head = firstnode->next;
    free(firstnode);
    return returndata;
}

// removes all nodes
void removeAllNodes(struct List *list)
{
    // only checks if list is not empty
    while(!isEmptyList(list)) {
        popFront(list);
    }
}

//adds new node with data after given node
struct Node *addAfter(struct List *list, 
        struct Node *prevNode, void *data)
{
    if (prevNode == NULL) {
        return addFront(list, data);
    } else {
        // creates new node to add to list
        struct Node *newNode = (struct Node *)malloc(sizeof(struct Node));
        if (newNode == NULL) {
            perror("malloc returned null");
            exit(1);
        }
        newNode->data = data;
        newNode->next = prevNode->next;
        prevNode->next = newNode;
        return newNode;
    }
}

// reverses the list
void reverseList(struct List *list)
{
    struct Node *prev = NULL;            
    struct Node *curr = list->head;                  
    struct Node *next;

    // reverses list
    while (curr) {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    // sets head to back of list
    list->head = prev;
        
}
