/*
CH-230-A
a7 p4.c
ujjwal khadka
u.khadka@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>


int ascending(const void *num1, const void *num2)
			/* sort in ascending order */
{
    const int* a = (const int*) num1;
    const int* b = (const int*) num2;
    
    if (*a < *b)
        return -1;  /* if a is smaller */

    else if (*a > *b)  /* if a is larger */
        return 1;

    else 
        return 0;
}

int descending(const void *num1, const void *num2)
				/* sort in descending order */

{
    const int* a = (const int*) num1;
    const int* b = (const int*) num2;
    
    if (*a > *b)
        return -1;

    else if (*a < *b)
        return 1;

    else 
        return 0;
}
int (*func[2])(const void *, const void*) = {ascending,descending};
			/* dunction pointer declaration with two functions */

int main()
{
    int i, n;
    scanf("%d", &n);
    int arr[n];
    
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    while (1)
    {
        char c;
        scanf("%c", &c);

        if ( c == 'd')
        /* for sorting in descending order */
        {
            qsort(arr, n, sizeof(arr[0]), func[1]);	
							/* calls qsort with ascending function */

            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }

        else if ( c == 'a')
         /* for sorting in descending order */
        {
            qsort(arr, n, sizeof(arr[0]), func[0]);
							/* calls qsort with descending function*/

            for (i = 0; i < n; i++)
            {
                printf("%d ", arr[i]);
            }
            printf("\n");
        }

        else if (c == 'e')
        {
            exit (1);
        }


    }
    return 0;
}