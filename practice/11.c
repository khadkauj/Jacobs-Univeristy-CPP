#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>

struct node {
char str[20];
struct node* next;
};

struct node* insertBegin(struct node* mylist, char *stra)
{
	struct node* newElem;
	newElem = (struct node*) malloc(sizeof(struct node));
	strcpy(newElem->str, stra);
	if (mylist == NULL)
	{
		newElem->next = NULL;
		return newElem;
	}
	newElem->next = mylist;
	return newElem;
}

void printList(struct node* hamrolist)
{
	while(hamrolist != NULL){
		printf("%s ", hamrolist->str);
		hamrolist = hamrolist->next;
	}
}


int main(int argc, char const *argv[])
{
	struct node* mylist = NULL;
	char str[15] = "dbhjse";
	mylist = insertBegin(mylist, str);
	printList(mylist);
	return 0;
}
