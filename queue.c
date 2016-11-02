#include "queue.h"
#include <stdlib.h>

struct queue{

    NODE *first;

};

struct node{

    NODE *next;
    ITEM *item;

};

QUEUE *createQueue(){

    QUEUE *queue = NULL;
    queue = (QUEUE *) malloc (sizeof(QUEUE));
    queue->first = NULL;
}

int addQueue(QUEUE *queue, ITEM *item){

    NODE *current;
    current = queue->first;

    while(current != NULL && current->next != NULL) current = current->next;

    current->next = (NODE *) malloc(sizeof(NODE));
    if (current->next == NULL) return 0;

    current->next->item = item;
    current->next->next = NULL;

}

ITEM *removeQueue(QUEUE *queue){

    ITEM *item = queue->first->item;
    free(queue->first);
    queue->first = queue->first->next;

    return item;

}

int queueEmpty(QUEUE *queue){

    if(queue->first == NULL) return 1;
    return 0;

}

void freeQueue(QUEUE **queue){

    NODE *current = (*queue)->first;
    NODE *aux;

    while (current != NULL){

        aux = current;
        current = current->next;
        free(aux);

    }

    free(*queue);
    queue = NULL;

}
