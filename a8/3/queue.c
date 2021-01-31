/*
CH-230-A
a8 p1.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
/**
 * @file queue.c
 */

#include <stdio.h>
#include <stdlib.h>

#include "queue.h"

void initialize_queue(Queue *pq)
{
	pq->front = pq->rear = NULL;
	pq->items = 0;
}

int queue_is_full(const Queue *pq)
{
	return pq->items == MAXQUEUE;
}

int queue_is_empty(const Queue *pq)
{
	return pq->items == 0;
}

int queue_item_count(const Queue *pq)
{
	return pq->items;
}

int enqueue(Item item, Queue *pq)
{
	if (queue_is_full(pq))
	/*checking if its out of capacity*/
	{
        return -1;
    }

    Node *new_node = (Node*)malloc(sizeof(Node));
    /*checkimg memeory allocation*/
    if(new_node == NULL)
    {
        return -1;
    }
    new_node->item = item;
    /*adding new item at the rear
    and declaring its next link NULL*/
    new_node->next = NULL;

    if(queue_is_empty(pq))
    /*Checking if the queue is empty*/
    {
        pq->front = new_node;
        pq->rear = pq->front;
    } else
    /*if node is non-empty*/
    {
        pq->rear->next = new_node;
        pq->rear = pq->rear->next;
    }
    pq->items = pq->items + 1;
    /*counting to check underflow/overflow*/
    return 0;
}

int dequeue(Item *pitem, Queue *pq)
{
	if(queue_is_empty(pq))
	{
    /*when queue has no elems*/
    return -1;
    }

    Node *temp = pq->front;
    *pitem = pq->front->item;
    pq->front = pq->front->next;

   
    
    if(pq->items == 0)
	/*if there are no elems left; the only nodes are
	NUll*/
    {
        pq->front = pq->rear = NULL;
    }
    pq->items = pq->items - 1;
    /*decreasin count of nodes*/
    /*freeing memeory of front node*/   
    free(temp);
    return 0;
}

void empty_queue(Queue *pq)
{
	Item dummy;
	while (!queue_is_empty(pq)) {
		dequeue(&dummy, pq);
	}
}

void printq(Queue *pq)
{
    Node *aux;
    printf("content of the queue: ");
    aux=pq->front;
    /*;oop pq->items to last item*/
    for (int i = 0; i < pq->items; i++)
    {
        printf("%d ",aux->item);
        aux=aux->next;
    }
    printf("\n");
}