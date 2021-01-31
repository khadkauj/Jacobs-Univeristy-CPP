/*
CH-230-A
a4 p1.c
ujjwal khadka
u.khakda@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>
int main()
{
	
	float ul, ll, inc;
	scanf("%f", &ll);
	scanf("%f", &ul);
	scanf("%f", &inc);

		double calc = (ul-ll)/inc + 1; 

	for (int i = 0; i < calc; ++i)
	{
		
		/*float area = ll*ll* M_PI;
		float perimeter = 2*M_PI*ll;*/

		/*printf("%f ",ll);
		printf("%f ",area);
		printf("%f",perimeter);
		printf("\n");*/
		printf("%f %f %f\n", ll, ll*ll*M_PI, 2*M_PI*ll);
		ll = ll + inc;
	}
	return 0;
}
/*
CH-230-A
a4 p1.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>


int main()
{
	char string[50]; 			
	fgets(string, sizeof(string), stdin);		/* taking input*/
	for (int i = 0; i < strlen(string); ++i) 	/*removig \n from the end of string*/
	{
		if (string[i] == '\n')
		{
			string[i] = '\0';
		}
	}

	for (int i = 0; i < strlen(string); i = i + 2) 
	/*i+2 to jump i  by two because +1 is already done in loop*/
	{
		printf("%c\n", string[i]); /*space for zig zag pattern*/
		if (i+1 == strlen(string)) /*to avoid printing extra spaces*/
		{
			break;
		}
		else
		{
			printf(" %c\n", string[i+1]);
		}
	}
	return 0;
}

/*
CH-230-A
a4 p3.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include "stdio.h"
#include <math.h>

float geometric_mean(float arr[], int num)
{
	float prod = 1;
	float gm;
	float power = (float) 1/num; /*power*/
	for (int i = 0; i < num; ++i)
	{
		prod = prod * arr[i];
	}
	gm = pow(prod, power); /*power function to calculate gm*/
	return gm;
}

float highest_number(float arr[], int n)
{
	float highestnum = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (highestnum < arr[i])/*sortiing by comparing*/
		{
			highestnum = arr[i];
		}
	}
	return highestnum;
}

float smallest_number(float arr[], int n)
{
	float smallestnum = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (smallestnum > arr[i])/*sortiing by comparing*/
		{
			smallestnum = arr[i];
		}
	}
	return smallestnum;
}

float summing(float arr[], int n)
{
	int sum = 0;
	for (int i = 0; i < n; ++i)/*summing by comparing*/
	{
		sum = sum + arr[i];
	}
	return sum;
}

int main()
{
	int n;
	float array[15];
	for (int i = 0; i < 15; ++i)
	{
		scanf("%f", &array[i]);
		if (array[i] < 0)/*stopping for neg value*/
		{
			array[i] = 0;
			n = i;
			break;
		}
	}
	printf("%d\n",n );
	getchar();
	char c;
	scanf("%c", &c);
	switch (c)/*respective cases to their respective function*/
	{
		case 'm':
		{
			float gmean = geometric_mean(array,n );
			printf("GM is:%f\n", gmean);/*printing in main func*/
			break;
		}
		case 'h':
		{
			float highest = highest_number(array, n);
			printf("highest number is:%f\n", highest);
;			break;
		}
		case 'l':
		{	float smallest = smallest_number(array, n);
			printf("Smallest nois:%f\n", smallest);
			break;
		}

		case 's':
		{
			float sum = summing(array, n);
			printf("Sum is:%f\n", sum);
			break;
		}
	}
	return 0;
}

#include <stdio.h>
#include <string.h>

int count_consonants(char str[]) /*func that counts consonants*/
{
    int count = strlen(str);
    int cont = 0;
    for (int i = 0; i < count ; ++i)
    {
        
        if (str[i] > 64 && str[i] < 91)/*checking ascii values*/
        {
            if (str[i] != 'A' && str[i] !='E' && str[i] !='I' && str[i] !='O' && str[i] !='U')
            {
                cont = cont + 1;
            }
        }
        if (str[i] >96  && str[i] < 123)
        {
            if (str[i] != 'a' && str[i] !='e' && str[i] !='i' && str[i] !='o' && str[i] !='u')
            {
                cont = cont + 1;
            }
        }
    }
    return cont;/*returning no of consonats*/
}

int main()
{
    char string[100];

    while(1)
    {
        fgets(string, sizeof(string), stdin);
        if (string[0] == '\n') /*exiting program in case we get only 'enter'*/
        {
            return 0;
        }
        else /*removing \n from fgets*/
        {
            string[strlen(string)-1] = '\0';
        }
    int n = count_consonants(string);
    printf("Number of consonants=%d\n", n);/*prinintg results*/
    }
    return 0;
}
/*
CH-230-A
a4 p5.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

int count_consonants(char str[]) /*func that counts consonants*/
{
    char *p = str; /*initializing array to a pointer*/
    int cont = 0;
    for (int i = 0; *p != '\0' ; ++i)
    {
        
        if (*p > 64 && *p < 91)/*checking ascii values with pointer value*/
        {
            if (*p != 'A' && *p !='E' && *p !='I' && *p !='O' && *p !='U')
            {
                cont = cont + 1;
            }
        }
        if (*p >96  && *p < 123)
        {
            if (*p != 'a' && *p !='e' && *p !='i' && *p !='o' && *p !='u')
            {
                cont = cont + 1;
            }
        }
        p = p +1;
    }
    printf("%d\n",cont );
    return cont;/*returning no of consonats*/
}

int main()/*we use same function from previous question*/
{
    char string[100];

    while(1)
    {
        fgets(string, sizeof(string), stdin);
        if (string[0] == '\n') /*exiting program in case we get only 'enter'*/
        {
            return 0;
        }
        else /*removing \n from fgets*/
        {
            string[strlen(string)-1] = '\0';
        }
    int n = count_consonants(string);
    printf("Number of consonants=%d\n", n);/*prinintg results*/
    }
    return 0;
}

/*
CH-230-A
a4 p6.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int max_finding(int array[], int n)
{
    int largest1 = array[0];
    int largest2 = array[1];
    if (n==2) /*when only two no are given*/
    {
        printf("two highest values are %d %d\n", array[0], array[1] );
        return 0;
    }
    else if (largest1 < largest2)
    {
        int temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }
    for (int i = 2; i < n; i++) /*sorting out first and second max*/
    {
        if (array[i] > largest1)
        {
            largest2 = largest1;
            largest1 = array[i];
        }
        else if (array[i] > largest2 && array[i] != largest1)
        {
            largest2 = array[i];
        }
    }
    printf ("The FIRST LARGEST  = %d\n", largest1);
    printf ("THE SECOND LARGEST = %d\n", largest2);
    return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    if (n<2) /*incases if there are less than 2 elements*/
    {
        printf("Not Enough numbers.\n");
        return 0;
    }
    int *array; /*allocating memory for array*/
    array = (int*) malloc(n* sizeof(int));
    if (array == NULL) /*incase memeory wasn't allocated*/
    {
        printf("memeory not allocated\n");
        exit(0);
    }
    for (int i = 0; i < n; ++i) /*scanning inputs in respective allocated pointers*/
    {
        scanf("%d", array+i);
    }
    max_finding(array, n); /*function to evalutate 2 highest no*/
    free(array);
    return 0;
}

/*
CH-230-A
a2 p7.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>

void printarray(int arrays[30][30], int n)/*to print matrix*/
{
	printf("The entered matrix is:\n");
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d ", arrays[i][j]);/*printing elemen of ith row and jth column*/		
		}
		printf("\n");
	}
}
void diagonal_matrix(int arr[30][30], int len)
{
    printf("Under the main diagonal:\n");
 
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len; j++)
        {
            if(i > j)/*checking if it lies under diagonal*/
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n");
	
}
int main()
{
	int n;
	scanf("%d", &n);
	int array[30][30];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			scanf("%d", &array[i][j]);/*scanning values for our matrix*/
		}	
	}
	printarray(array, n);
	diagonal_matrix(array,n);
	return 0;
}

/*
CH-230-A
a4 p8.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>

void printarray(int arrays[30][30], int n)/*to print matrix*/
{
	printf("The entered matrix is:\n");
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			printf("%d ", arrays[i][j]);/*printing elemen of ith row and jth column*/		
		}
		printf("\n");
	}
}
void diagonal_matrix(int arr[30][30], int len)
{
    printf("Under the secondary diagonal:\n");
 
    for(int i = 0; i < len; i++)
    {
        for(int j = 0; j < len; j++)
        {
            if(i+j > len-1)/*checking if it lies under secondary diagonal*/
            printf("%d ", arr[i][j]);
        }
    }
    printf("\n");
	
}
int main()
{
	int n;
	scanf("%d", &n);
	int array[30][30];
	for (int i = 0; i < n; ++i)
	{
		for (int j = 0; j < n; ++j)
		{
			scanf("%d", &array[i][j]);/*scanning values for our matrix*/
		}	
	}
	printarray(array, n);
	diagonal_matrix(array,n);
	return 0;
}

/*
CH-230-A
a4 p9.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int prodminmax(int arr[], int n) 
{
	int highestnum = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (highestnum < arr[i])/*sortiing by comparing*/
		{
			highestnum = arr[i];
		}
	}
	int smallestnum = arr[0];
	for (int i = 1; i < n; ++i)
	{
		if (smallestnum > arr[i])/*sortiing by comparing*/
		{
			smallestnum = arr[i];
		}
	}
	int product = highestnum * smallestnum; /*calculating prod and returning to main func*/
	return product;
}

int main()
{
	int n;
	scanf("%d", &n);
	int *arr;
	arr = (int*) malloc(n*sizeof(int));/*allocation of n*4 memory for n integers */
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", arr+i);/*storing valuse if arr, arr+4....*/
	}
	int product = prodminmax(arr,n);/*calling our fucn*/
	printf("%d\n", product);
	free(arr);
	return 0;
}//check for null pointes


/*
CH-230-A
a4 p10.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
#include <math.h>

void proddivpowinv(float a, float b, float *prod, float *div,
float *pwr, float *invb)
{
	*prod = a * b; /*calculating what was specified in program*/
	*div = a / b;
	*pwr = pow(a,b);
	*invb = 1 / b;
}

int main()
{
	float a = 5, b = 3;
	float prod, div, pwr, invb;
	proddivpowinv(a,b, &prod, &div, &pwr, &invb); /*providing addresses for reference*/
	printf("%f\n%f\n%f\n%f\n", prod, div, pwr, invb);//*test program to show that it works correctly*/
	return 0;
}

/*
CH-230-A
a4 p11.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void count_insensitive(char *str, char c) 
{
	int count = 0;
	for (int i = 0; i < strlen(str); ++i)
	{
		*(str+i) = tolower(*(str+i));/*lowering alphabet to compare*/
		if (*(str+i) == c)
		{
			count = count + 1;/*couting our character: in this case 'e'*/
		}
	}
	printf("%d\n",count );
}

void second_paragraph_of_problem(char *str)
{
	int b = 0; int H = 0; int eight = 0; int u = 0; int $ = 0;
	for (int i = 0; i < strlen(str); ++i)
	{
		if (*(str+i) =='b')/*comparing b, H, 8, u, $ and counting them*/
		{
			b = b + 1;
		}
		if (*(str+i) =='H')
		{
			H = H + 1;
		}
		if (*(str+i) == '8')
		{
			eight = eight + 1;
		}
		if (*(str+i) =='u')
		{
			u = u + 1;
		}
		if (*(str+i) =='$')
		{
			$ = $ + 1;
		}
	}
	printf("The character 'b' occurs %d times.\n", b);
	printf("The character 'H' occurs %d times.\n", H);
	printf("The character '8' occurs %d times.\n", eight);
	printf("The character 'u' occurs %d times.\n", u);
	printf("The character '$' occurs %d times.\n", $);
}

int main()
{
	char *ptr, *ptr2;
	char c = 'e'; /*for test case  we have taken 'e' as our character*/
	ptr = (char*)malloc(sizeof(char) * 50);
	if (ptr == NULL)
	{
		printf("No memory allocated\n");
	}
	fgets(ptr, 50, stdin);
	int lenght = strlen(ptr);
	ptr2  = (char*) malloc(sizeof(char)*lenght);
	strcpy(ptr2,ptr);/*copying to new memory*/
	free(ptr);
	count_insensitive(ptr2, c);
	second_paragraph_of_problem(ptr2);
	free(ptr2);/*freeing our memory*/
	return 0;
}
/*
CH-230-A
a4 p12.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void replaceAll(char *str, char c, char e)
{
	for (int i = 0; i < strlen(str); ++i)
	{
		if (*(str + i) == c)/*comparing with for a replacement with e*/
		{
			*(str + i) = e;
		}
	}
}
int main()
{
	while(1)/*for infinite loop*/
	{
		char string[80], c, e;
		char compare[] = "stop";
		scanf("%c", &c);
		getchar();/*to avoid newlines made by scanf*/
		scanf("%c", &e);
		getchar();
		fgets(string, sizeof(string), stdin);
		string[strlen(string)-1]= '\0';/*removing \n to compare it with string "stop"*/
		int result = strcmp(compare, string);
		if (result == 0)/*to exit program when we get 'stop' as string*/
		{
			break;
		}
		printf("%c\n", c);/*character to be replaced*/
		printf("%c\n", e);/*character to be replaced by*/
		printf("%s\n", string);/*string before replacement*/
		replaceAll(string, c, e);
		printf("%s\n", string);/*string after replacement*/
	}
	return 0;
}