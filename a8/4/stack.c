/*
CH-230-A
a8 p4.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
#include "stack.h"

/*1s or 0s are stored starting from 0 and
making stacks in 1, 2.....*/
void push(int rem)
{
	st.array[st.count] = rem;
	st.count = st.count + 1;
}


		/*Rest of the code below aren't used. They are
		not part of the code.However, we can implement
		it such that it can take off 1/0 from the top
		of the stack, but we are only asked to convert it*/


void pop (struct stack *s)
        /*pop the last element from the stack */
{
    //if (isempty(s)==1)        
        /*check if stack is empty */
    /*{
        printf("Stack Underflow\n");
    }
    else
    {
        printf("%d\n", s->array[s->count-1]);
        s->count = s->count - 1;
    }*/
}
 
void empty (struct stack *s)    
    /*empties stack s */
{
    printf("Emptying Stack ");
    while(s->count > 0)
    {
        printf("%d ", s->array[s->count - 1]);
        s->count--;
    }
    printf("\n");
}
 
int isempty(struct stack *s)    
    /*checks if stack s is empty */
{
    if (s->count == 0)
        return 1;
    else    
        return -1;
}
