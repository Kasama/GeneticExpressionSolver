#ifndef QUEUE_H
#define QUEUE_H

#define ITEM void

typedef struct queue QUEUE;
typedef struct node NODE;

QUEUE *createQueue();
int addQueue(QUEUE *queue, ITEM *item);
ITEM *removeQueue(QUEUE *queue);
int queueEmpty(QUEUE *queue);
void freeQueue(QUEUE **queue);

#endif
