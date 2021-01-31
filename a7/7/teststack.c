/*
CH-230-A
a7 p7.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include<stdio.h>
#include"stack.h"
#include<stdlib.h>

int main()
{
	struct stack *calc = (struct stack*) malloc(sizeof(struct stack));
	if(calc == NULL)
	{
		exit(1);
	}
	calc->count = 0;
    /* counter set to 0 */
		while (1)
		{
			char c;
			scanf("%c", &c);
			switch (c)
			/*calls respective functions*/
			{
				case 's':
				{
					int n;
					scanf("%d", &n);
					printf("Pushing ");
					push(n, calc);
                    /* pushes the number into the stack */
					break;
				}
				case 'p':
				{
					printf("Popping ");
					pop(calc);
                    /* pops a number on the top off the stack and prints it */
					break;
				}
				case 'e':
				{
					empty(calc);
                    /* empties the stack and prints them */
					break;
				}
				case 'q':
				{
					printf("Quit\n");
					free (calc); 
					/* freeing the memory allocated for 'calc' */
					exit(1);
                    /* quits the execution of the program */
					break;
				}
			}

		}
	return 0;
}