/*
CH-230-A
a8 p4.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
#include "stack.h"

int main(int argc, char const *argv[])
{
    unsigned int n, m;
    int rem;
    scanf("%u", &n);
    m = n;
    /*initilaize count as 0. if it wasnt unsigned int,
    we could have set it to -1*/
    st.count = 0;

    if (n == 0)
    {
        push(0);
    }

    while(n != 0)
    /*rem gives 1 or 2; binary of 0 is 0; 1s or 0s
    pushed to stacks*/
    {
        rem = n % 2;
        push(rem);
        n = n/2;
    }

    printf("The binary representation of %u is ", m);
    for (int i = st.count - 1; i >= 0; i = i -1)
    {
        printf("%d", st.array[i]);
    }

    return 0;
}