#include<stdio.h>
#include <stdlib.h>

struct list             
        /*declare struct list with integer and struct pointer*/
{
    int value;
    struct list* next;
};

struct list* front(struct list* my_list, int value);
struct list* back(struct list* my_list, int value);
struct list* remove_first(struct list *my_list);
void print(struct list* my_list);
void dispose(struct list* my_list);