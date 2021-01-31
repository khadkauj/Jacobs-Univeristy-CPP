/*
CH-230-A
a8 p4.c
ujjwal khadka
u.khadka@jacobs-university.de
*/

/*the unsigned int has 32 bits*/
struct stack
{
    unsigned int count;
    int array[31];
}st;

/*we only need this function
to convert it to binary*/
void push(int rem);