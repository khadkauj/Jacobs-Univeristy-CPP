/*
CH-230-A
a6p1.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include<stdio.h>

#define swap(t,x,y) { t temp; temp = x;  x = y;   y = temp; }/*swap reurns the swapped result of x and y*/

int main()
{
	int a, b;
	double x,y;
	scanf("%d %d", &a, &b);
	scanf("%lf %lf", &x, &y);
	printf("After swapping:\n");
	swap(int, a ,b);
	/*providing int as type and a and b as variable to be swapped*/
	printf("%d\n%d\n",a, b );
	swap(double, x, y);
	/*providing double as type and x and y as varibale to be swapped*/
	printf("%lf\n%lf\n", x, y);
	return 0;
}
/*
CH-230-A
a6 p2.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
#define determinelsb(n) (n & 1)
/*to return 1 if last bit is 1, otherwise 0*/

int main()
{
	unsigned char ch;
	scanf("%c", &ch);
	printf("The decimal representation is: %d\n",ch );
	int bit = determinelsb(ch);
	printf("The least significant bit is: %d\n",bit );
	return 0;
}
/*
CH-230-A
a6 p8.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>

#define maximum(x,y) (x>y?x:y)
/*if x is greater than y, then x else y*/
#define minimum(x,y) (x<y?x:y)
#define range(max, min) ((max + min) / 2.0)
/*2.0 to make sure the calculation is between float*/

int main()
{
	int a,b,c;
	scanf("%d\n%d\n%d", &a, &b, &c);
	int max = maximum(a, maximum(b,c));
	int min = minimum(a, minimum(b,c));
	float range_ = range(max,min);
	printf("The mid-range is: %.6f\n", range_);
	/* with .6  preisions*/ 
	return 0;
}
/*
CH-230-A
a6 p4.cFirstname Lastname
u.khadka@jacobs-university.de
*/

#include <stdio.h>
#define INTREMEDIATE
/*defining INTERMEDIATE*/

int main()
{
	int n;
	scanf("%d", &n);
	int x[n], y[n];
	for (int i = 0; i < n; ++i)
		/*scannig componenets of x and y vectors*/
	{
		scanf("%d", &x[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &y[i]);
	}
	int product[n];
	int sum = 0;
	for (int i = 0; i < n; ++i)
	{
		product[i] = x[i] * y[i];
		sum = sum + product[i];
	}
	#ifdef INTREMEDIATE
	/*checking if INTERMDIATE was defined*/
	printf("The intermediate product values are:\n");
	for (int i = 0; i < n; ++i)
		{	
	 	printf("%d\n", product[i]);
		}
	#endif
	printf("The scalar product is: %d\n", sum);
	/*the final result independetn of INTERMEDIATE*/
	return 0;
}
#include <stdio.h>

int main()
{
	char c;
	scanf("%c", &c);
	printf("The decimal representation is: %d\n", c);
	int count;
	for (count = 0; (1<<count) <= c; count++)
	{
		/*moving to the left till we
		get no bigger than than ch- that way
		we omit unnecessary zeros*/
	}
	printf("The backwards binary representation is: ");

	for (int i=0; i < count; i++)
	/* count is the size of bits*/
	{
	    printf("%d", ((c>>i)&1));   
	    /*bitwise operation to print 1 or 0s
	    in resp. bits. This is analogous to mirror in a list*/
	}
	printf("\n");
	return 0;
}

/*
CH-230-A
a6 p6.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>

void now_printingin_binarry(unsigned char Binary_rep)
/*ch is still bniary no which we can check using
bitwise operator and then print the set value*/
{
	printf("The binary representation is: ");
	for (int i = 7; i >= 0 ; --i)
		/*size of unsgned char is 8bits and 8-1 is 7*/
	{
		if ((Binary_rep >> i) & 1)
			/*we left shift the reversed_bit to
			left by i and check if it is set
			and accordingly print 8 bits.*/
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
}

int main()
{
	unsigned char ch;
	scanf("%c", &ch);
	printf("The decimal representation is: %d\n", ch);
	now_printingin_binarry(ch);
	return 0;
}
/*
CH-230-A
a6 p7.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>


void binary_representaion(unsigned char ch)
{
	printf("The binary representation is: ");
	for (int i = 7; i >= 0; --i)
	/*loop for 8 bits; unsigned char is 8bits*/
	{
		if ((ch>>i) & 1)
		/*and operation to check if it is set*/
		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
}

void set_binary_representaion(unsigned char ch)
{
	printf("After setting the bits: ");
	for (int i = 7; i >= 0; --i)
	{
		if ((ch>>i) & 1)
		/*and operation to check if it is set*/

		{
			printf("1");
		}
		else
		{
			printf("0");
		}
	}
	printf("\n");
}

int main()
{
	unsigned char ch;
	int x, y, z;
	scanf("%c", &ch);
	scanf("%d", &x);
	scanf("%d", &y);
	scanf("%d", &z);
	printf("The decimal representation is: %d\n", ch);
	binary_representaion(ch);
	ch = ch | (int)pow(2, x);
	/*power function gives a binary with
	1 at bit position and rest in the left as 0,
	for eg 2^2 in binary is 100*/
	ch = ch | (int)pow(2, y);
	ch = ch | (int)pow(2, z);
	set_binary_representaion(ch);
	return 0;
}
/*
CH-230-A
a6 p8.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

/* Structure of a node */
struct node {
    int data;
    // Data 
    struct node *next;
    // Address 
}*head = NULL;


void insertNodeAtBeginning(int data)
{
    struct node *newNode;
    newNode = (struct node*) malloc(sizeof(struct node));
    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data;
        // Link data part
        newNode->next = head;
        // Link address part
        head = newNode;
        // Make newNode as first node
    }
}

void displayList()
{
    struct node *temp;
    if(head == NULL)
    //If the list is empty i.e. head = NULL
    {
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("%d ", temp->data);
            // Print data of current node
            temp = temp->next;
            // Move to next node
        }
    }
    printf("\n");
}

void addingatend(int n)
{
    struct node *addingnode;
    struct node *temp = head;
    addingnode = (struct node*) malloc(sizeof(struct node));
    if(addingnode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    addingnode->data = n;
    if (head == NULL)
    {
        addingnode->next = NULL;
        head = addingnode;
    }
    else
    {
     while(temp->next)
    //looping to the end
    {
         temp=temp->next;
    }
    temp->next=addingnode;
    //adding at end initializing the link null
    addingnode->next = NULL;
    }
}

void delete_first_element()
{
    struct node *delfirstnode;
    if (head == NULL)       
    {       

    }
    else
    {
        delfirstnode = head;
        head = head->next;
        //intilaizin link of second node as head
        free(delfirstnode);
        //freeing memory of head
    }
}

void quiteandfree()
{
    struct node *temp;
    while(head != NULL)
    {
        temp = head->next;
        free(head);
        //freeing head and then next of head
        head = temp;
    }
}

int main()
{
    int x, y, ok;
    ok = 1;
    //int quit = 1;
    char ch;
    scanf("%c", &ch);
    while(ok==1)
    //to loop until we get 'q' and quit value changes to 0
    {
    switch (ch)
    {

        {case 'a':
        //int n;
        scanf("%d", &x);
        addingatend(x);
        break;}

        {case 'b':
        //int o;
        scanf("%d", &y);
        insertNodeAtBeginning(y);
        break;}

        {case 'r':
        delete_first_element();
        break;}

        {case 'p':
        displayList();
        break;}

        {case 'q':
        quiteandfree();
        ok = 0;
        break;}
    }
    scanf("%c", &ch);
    }   
    return 0;
}
/*
CH-230-A
a6 p9.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

/* Structure of a node */
struct node {
    int data;
    // Data 
    struct node *next;
    // Address 
}*head = NULL;


void insertNodeAtBeginning(int data)
{
    struct node *newNode;
    newNode = (struct node*) malloc(sizeof(struct node));
    if(newNode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    else
    {
        newNode->data = data;
        // Link data part
        newNode->next = head;
        // Link address part
        head = newNode;
        // Make newNode as first node
    }
}

void displayList()
{
    struct node *temp;
    if(head == NULL)
    //If the list is empty i.e. head = NULL
    {
    }
    else
    {
        temp = head;
        while(temp != NULL)
        {
            printf("%d ", temp->data);
            // Print data of current node
            temp = temp->next;
            // Move to next node
        }
    }
    printf("\n");
}
void adding_at_end(int n)
{
    struct node *addingnode;
    struct node *temp = head;
    addingnode = (struct node*) malloc(sizeof(struct node));
    if(addingnode == NULL)
    {
        printf("Unable to allocate memory.");
    }
    addingnode->data = n;
    if (head == NULL)
    /*when there is only one node, it prints
    respectie node only*/
    {
        addingnode->next = NULL;
        head = addingnode;
    }
    else
    {
     while(temp->next)
    //looping to the end
    {
         temp=temp->next;
    }
    temp->next=addingnode;
    //adding at end initializing the link null
    addingnode->next = NULL;
    /*end node has null link*/
    }
}

void delete_first_node()
{
    struct node *delfirstnode;
    if (head == NULL)       
    {       

    }
    else
    {
        delfirstnode = head;
        head = head->next;
        //intilaizin link of second node as head
        free(delfirstnode);
        //freeing memory of head
    }
}

void insert_at_position(int a, int b)
{
    struct node* temp = head;
    struct node* temp2 = head;
    int count = 0;
    while(temp != NULL)
    /* to count number of nodes*/
    {
        temp = temp->next;
        count = count +1;
    }
    if ((a > count) | (a < 0))
    /*whene no of position is greater than count or when it is neg*/
    {
        printf("Invalid position!\n");
    }
    else
    {
        struct node *at_position2 = (struct node*) malloc(sizeof(struct node));
        if(at_position2 == NULL)
        {
            printf("Unable to allocate memory.");
        }
        else
        {
            at_position2->data = b;
            at_position2->next = NULL;        
            while(a != 1)
                /*looping until we reach position a*/
            {
                temp2 = temp2->next;
                a--;
            }
            at_position2->next = temp2->next;
            /*updating link of node to be inserted at a
            with link of a+1 node*/
            temp2->next = at_position2;
        }
    }     
}

void reverse()
{
    struct node* temp1 = NULL;
    struct node* temp2 = NULL;
    while(head != NULL)
        /*we loop from first node to end
        till head gets null link from last
        node*/
    {
        temp2 = head->next;
        /*temp2 stays ahead of head*/
        head->next = temp1;
        /*we make link of first node NULL*/
        temp1 = head;
        /*now, temp1  becomes head*/
        head = temp2;
        /*finally head points to temp2.
        as we loop untill head becomes null, 
        the list gets reveresed*/
    }
    head = temp1;
}

void quite_and_free()
{
    struct node *temp;
    while(head != NULL)
    {
        temp = head->next;
        free(head);
        //freeing head and then next of head
        head = temp;
    }
}

int main()
{
    int x, y, ok, a, b;
    ok = 1;
    //int quit = 1;
    char ch;
    scanf("%c", &ch);
    while(ok==1)
    //to loop until we get 'q' and quit value changes to 0
    {
    switch (ch)
    {

        {case 'a':
        //int n;
        scanf("%d", &x);
        adding_at_end(x);
        break;}

        {case 'b':
        //int o;
        scanf("%d", &y);
        insertNodeAtBeginning(y);
        break;}

        {case 'r':
        delete_first_node();
        break;}

        {case 'p':
        displayList();
        break;}

        {case 'q':
        quite_and_free();
        ok = 0;
        break;}

        {case 'i':
        scanf("%d", &a);
        scanf("%d", &b);
        insert_at_position(a, b);
        break;}

        {case 'R':
        reverse();
        break;}
    }
    scanf("%c", &ch);
    }   
    return 0;
}

