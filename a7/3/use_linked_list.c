/*
CH-230-A
a7 p3.c
ujjwal khadka
u.khadka@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

int main()
{
    char c;
    struct list* my_list = NULL;        
        /* declare an empty list */

    while (1)
    {
        scanf("%c", &c);

        switch (c)   
            /* comparing c with input and calling related functions*/
        {
            case 'a':
            {
                int n;
                scanf("%d", &n);
                my_list = back(my_list, n);
                // calls the function
                break;
            }

            case 'b':
            {
                int n;
                scanf("%d", &n);
                my_list = front(my_list, n);
                // calls the function
                break;
            }

            case 'r':
            {
                my_list = remove_first(my_list);
                // calls the function
                break;
            }

            case 'p':
            {
                print(my_list);
                // calls the function
                break;
            }

            case 'q':
            {
                dispose(my_list);
                // calls the function
                exit(1);
                break;
            }
        }
    }

    return 0;
}