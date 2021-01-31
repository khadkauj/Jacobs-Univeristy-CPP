/*
CH-230-A
a7 p6.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>

struct person{
	char name[30];
	int age;
};

int comp_Name ( struct person *prs1,  struct person *prs2);
void bsort (struct person* show, int n, 
            int func ( struct person *,  struct person *));


void swap( struct person *prs1,  struct person *prs2)	
/* we swap two elements to change the order*/
{
    struct person *temp = (struct person*) malloc (sizeof(struct person));
	if(temp == NULL)
	{
		exit(1);
	}
    strcpy(temp->name, prs1->name);
    temp->age = prs1->age;
    strcpy(prs1->name, prs2->name);
    prs1->age = prs2->age;
    strcpy(prs2->name,temp->name);
    prs2->age = temp->age; 
    free(temp);
}

int comp_Age( struct person *prs1,  struct person *prs2)	
/*to order according to age*/
{
    if (prs1->age > prs2->age)
    {
        //swap (a, b);
        return -1;
    }
    else if (prs1->age == prs2->age)
    {
        
        return comp_Name(prs1, prs2);	
        /*compares the name when age are equal*/
    }
    return 1;
}

int comp_Name(struct person *prs1, struct person *prs2)
/*to order according to names */
{
    if (strcmp(prs1->name, prs2->name) > 0)
    {
        return -1;
       
    }
    else if (strcmp(prs1->name,prs2->name) == 0)
    {
        return comp_Age(prs1, prs2);	
        /*when name is same we comapre age*/
    }
    return 1;
}


void bubblesort(struct person* show, int n, 
            int func ( struct person *,  struct person *))
/* Bubble function */
{
    int i;
    int exp;
    do 
    {
        exp = 0;
        for(i = 1; i < n; i++)
        {
            
            if(func (&show[i-1], &show[i]) == -1 )
            {
                swap (&show[i-1], &show[i]); 
                exp = 1;
            }
        }
    } while(exp == 1);

    for (i = 0; i < n; i++)
    /* print the elements of struct show */
    {
        printf("{%s, %d}; ", show[i].name, show[i].age);
       
    }
	 printf("\n");

}

int main()
{
	int n;
    int i;
    scanf("%d", &n);

    struct person *show = (struct person *) malloc(sizeof(struct person) * n);
	if(show == NULL)
	{
		exit(1);
	}

	
    for (i = 0; i < n; i++)
    {
        scanf("%s", show[i].name);
        /* storing name */

        scanf("%d", &show[i].age);
        /* storing age */
    }

    bubblesort(show, n, comp_Name); 
	bubblesort(show, n, comp_Age);	
    return 0;
    
}