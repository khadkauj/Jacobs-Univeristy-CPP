/*
CH-230-A
a7 p7.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
struct node
{
    char data;
    struct node *next;
    struct node *prev;
};
struct node  *push_front(char c, struct node *list)
{
    struct node * temp = (struct node *) malloc(sizeof(struct node));
    if (temp == NULL)
    {
        printf("Memory allocation failed\n");
        return list;
        //exit if wrong allocation
    }
    temp->prev = NULL;
    temp->data = c;
    if (list != NULL)
    {
        list->prev = temp;
    }
    temp->next = list;
    list = temp;
    return list;
}
void print_list(struct node  *list)
{
    for (;list != NULL;list = list->next)
    {
        //do until the lists is empty
        printf("%c ", list->data);
        //printing the list
    }
    printf("\n");
    return;
}

void print_reverse_list(struct node  *list)
{
    struct node * temp; //new node
    temp = (struct node *)malloc(sizeof(struct node ));
    if (temp == NULL)
    {
        printf("Memory allocation failed\n");
        return;
        //if allocation failed
    }
    temp = list;
    if (temp == NULL) return;
    while (temp->next != NULL)
    {
        temp = temp->next;
        //move to last
    }
    while (temp != NULL)
    { //start from the last
        printf("%c ", temp->data);
        temp = temp->prev;
        //take previous c
    }
    printf("\n");
    return;
}
void rm(char c, struct node ** head, struct node * list)
{
    int indicator = 0;
    while (list!= NULL)
    {
        if (list->data == c)
        {
            indicator = 1;
            //if the character is in the list
            if (list->next != NULL) 
            { //if last element
                (list->next)->prev = list->prev; 
            }
            if (list->prev == NULL) 
            { //if it is the first element
                *head = list->next;
            }
            else{ //if the element is not the first element
                (list->prev)->next = list->next;
            }
        }
            list = list->next; //move the cursor
    }
    //if indicator is 0 then there is no elemenation so
    if(indicator==0) 
    {
        printf("The element is not in the list!\n");
    }
    return;
}
void delete_list(struct node  *list)
{
    struct node  *temp;
    while (list != NULL)
    {//do until the list is empty
        temp = list->next;
        free (list);
        //deallocation
        list = temp;
    }
    return;
}
int main()
{
    char i;
    int n;
    scanf("%d", &n);
    getchar();
    struct node * list = NULL; //initialization
    while(1)
    { //inrmite loop
        switch (n)
        {
            case 1:
                scanf("%c", &i);
                list = push_front(i, list); //calls the function
                break;
            case 2:
                scanf("%c", &i);
                rm(i, &list, list); //calls the function
                break;
            case 3:
                print_list(list); //calls print
                break;
            case 4:
                print_reverse_list(list); //calls reverse print
                break;
            case 5:
                delete_list(list); //calls the delete
                return 0;
        }
        scanf("%d", &n);
        getchar();
    }
}