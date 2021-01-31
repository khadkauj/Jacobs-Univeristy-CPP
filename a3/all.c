a1
#include <stdio.h>
int main()
{
	float x;
	scanf("%f\n", &x);
	float n;
	label: /*we create a label for goto statement to re-interate program if we get negative integers*/
	scanf("%f",&n);
	if (n<=0) //checking if int is valid integer
	{
		printf("Input is invalid, reenter value\n");
		goto label;
	}
					/*int b = n; //we can also use this if n is decimal point value like 1.5.
					if (b != n)
					{
						printf("Input is invalid, reenter value");
						goto label;
					}
					*/
	for (int i = 1; i <= n; ++i) //loop for n output
	{
		printf("%f\n",x);
	}
	return 0;
}

/*
CH-230-A
a3 p2.c
ujjwal khadka
u.khadka@jacobs-university.de
*/

#include <stdio.h>
int main()
{
	char ch;
	int n;
	scanf("%c", &ch);
	scanf("%d", &n);
	for (int i = 0; i <= n; i = i+1) /*running loop for output upto ch-n*/
	{
		printf("%c\n", ch);
		ch = ch - 1;
	}
	return 0;
}

/*
CH-230-A
a3 p3.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>

 float convert(int cm) /*our function to do our calculation*/
 {
 	float km1 = (float)cm/100000;
 	return km1;
 }	

int main()
{
	int cm;
	scanf("%d", &cm);
	float km = convert(cm); /* taking output from user defined function*/
	printf("Result of conversion: %f\n", km);
	return 0;
}

/*
CH-230-A
a3 p4.c
ujjwal khadka
u.khadka@jacobs-university.de
*/


#include <stdio.h>
int position(char str[], char c) 
{
	int idx;
	/* Loop until end of string */
	for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx){
	/*We complete the for loop by giving two curly bracket afterwards. If not, as a rule, next statement which 
	is 'return idx' would get executed. And since idx is defined 0, we get 0 as output everytime.*/	
	}
	/* do nothing */
	return idx;
}
int main()
{			
	char line[80];
	while (1) {
		printf("Enter string:\n");
		fgets(line, sizeof(line), stdin);
		printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
		/*Also, 0 is identified as first position while counting position. We added return 0 at the end of
		 the main funtion. Lastly, we can put "break" statement after printf to stop infinite loop.*/
	return 0;
	}
}

/*
CH-230-A
a3 p5.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
int main()
{
	char c;
	scanf("%c", &c);
	int n;
	scanf("%d", &n);
	double array[n];
	double sum = 0;
	double AMSUM, AM = 0;
	for (int i = 0; i < n && i < 100; ++i) /*taking n but less than 100 temp*/
	{
		scanf("%lf", &array[i]);
	}
	switch (c)
	{
	case 's':
		for (int i = 0; i < n; ++i) 		/*sum of temps*/
		{
			sum = sum + array[i];
		}
		printf("%lf\n", sum);
		break;
	case 'p': 								/* list of temps*/
		for (int i = 0; i < n; ++i)
		{
			printf("%lf\n",array[i] );
		}
		break;
	case 't':								/* list of temps in F*/
		for (int i = 0; i < n; ++i)
		{
			double f = ((9 * array[i]) / 5 + 32);
			printf("%lf\n", f);
		}
		break;
	default:							/* case when we compute mean*/
		for (int i = 0; i < n; ++i)
		{
			AMSUM = AMSUM + array[i];
		}
		AM = (double)AMSUM/n;
		printf("%lf\n", AM);
	}
	return 0;
}

/*
CH-230-A
a3 p6.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
float to_pounds(int kg, int g)
{
	float result = (float) (kg*2.2 + (g*2.2)/1000); /*converting int to float*/ 
	return result;
}
int main()
{
	int kg, g;
	scanf("%d", &kg); //taking Input
	scanf("%d", &g);
	printf("Result of conversion: %f\n", to_pounds(kg, g)); /*calling function*/
	return 0;
}

/*
CH-230-A
a3 p7.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>

void print_form(int n, int m, char c)
{
	for (int i = 0; i < n; ++i) /* outer loops for new line*/
	{
		for (int j = 0; j < m; ++j) /*inner loop to print*/
		{
			printf("%c",c );
		}
		printf("\n"); /*newlines*/
		m = m + 1; /*additional char in each new line*/
	}
}

int main()
{
	int n, m;
	char c;
	scanf("%d", &n);
	scanf("%d", &m);
	getchar();
	scanf("%c", &c);
	print_form(n, m, c); /*calling our void function*/
	return 0;
}

/*
CH-230-A
a3 p7.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>

void print_form(int n, int m, char c)
{
	for (int i = 0; i < n; ++i) /* outer loops for new line*/
	{
		for (int j = 0; j < m; ++j) /*inner loop to print*/
		{
			printf("%c",c );
		}
		printf("\n"); /*newlines*/
		m = m + 1; /*additional char in each new line*/
	}
}

int main()
{
	int n, m;
	char c;
	scanf("%d", &n);
	scanf("%d", &m);
	getchar();
	scanf("%c", &c);
	print_form(n, m, c); /*calling our void function*/
	return 0;
}

/*
CH-230-A
a3 p8.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
 
float summing(float array_1[], int z) //function for adding input from arrays
{
	float add_1 = 0; 
	for (int i = 0; i <= z; ++i) 
	{
	add_1 = add_1 + array_1[i] ; //total sum
	}
	printf("%f\n", add_1 );
	return 0;
}
 
float average(float array_2[], int y ) //evalutaing average
{
	float add_2 = 0;
	for (int i = 0; i <= y; ++i)
	{
	add_2 = add_2 + array_2[i];
	}
	float average1 = add_2/y; //total average
	printf("%f\n", average1); 
	return 0;
}
 
int main()
{
	int count;
	float array[10];
	for (int i = 0; i < 10; ++i) //limiting arrys up to 10 elems
	{
	scanf("%f", &array[i]);
	if (array[i] == -99.0) /*checking -99 and initiating that array with 0*/
	{
	array[i] = 0;
	count = i;
	break;
	}
	count=i;
	}
	summing(array,count);
	average(array, count);
	return 0;
}

/*
CH-230-A
a3 p9.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
double sum25(double v[], int n)
{
	double sum = v[2] + v[5]; /*adding our arrays at 2nd and 5th pos*/
	printf("sum=%lf\n", sum);
	return 0;
}
int main()
{
	int n;
	scanf("%d", &n);
	if (n<6)
	{
		printf("One or both positions are invalid\n");
		return -111;
	}
	double array[n];
	for (int i = 0; i < n && i < 20; ++i) /*limitin input upto 20elems*/
	{
		scanf("%lf", &array[i]); /*scanning n elems*/
	}
	sum25(array, n); /*calling our desired func*/
	return 0;
}//It is bad practice to return a negative number in the main function (it means that the program has an error-edit to not return -111

/*
CH-230-A
a3 p10.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>

float product(float a, float b)
{
	float pro1 = a * b;
	printf("product of first function:%f\n", pro1); /* we print pro1 and then pro2(in line 40) to show that
													   both function give same result ie they ahve same effect*/
	return pro1; 
}

void productbyref(float a, float b, float *p) /* taking *p which is actually pointing to &pro2*/
{
	*p = a * b; 

}
void modifybyref(float *a, float *b) /* the *a and *b are pointing to x and y and would increase x by 3 and y by 11*/
{
	*a = *a + 3;
	*b = *b + 11;
}

int main()
{
	float x, y;
	float pro2;
	scanf("%f",&x);
	scanf("%f",&y);
	product(x, y);
	productbyref(x, y, &pro2);
	printf("Prodcut of second function:%f\n", pro2); /* to show two ways of giving product are same*/
	modifybyref(&x, &y);   /* modifybyref takes pointing addresses and directly changes value of x and  y*/
	printf("%f\n", x); /*showing our floats change after calling modbyref fucntion*/
	printf("%f\n", y);
	return 0;
}
#include <stdio.h>
#include <string.h>

int main() 
{ 
    char one[100];
    char two[100]; 
    char three[100];
    char fourth[100];
    char charac;
    fgets(one, sizeof(one), stdin); 

    fgets(two, sizeof(two), stdin); 

    scanf("%c", &charac);

    for (int i = 0; i < strlen(one); ++i)
    {
        if (one[i] == '\n')
        {
            one[i] = '\0';
        }
    }

    for (int i = 0; i < strlen(two); ++i)
    {
        if (two[i] == '\n')
        {
            two[i] = '\0';
        }
    }

   	int length1 = strlen(one);
    int length2 = strlen(two);

    printf("length1=%d\n", length1);
    printf("length2=%d\n", length2);

    strcpy(fourth, one);

    strcat(fourth, two);
    printf("concatenation=%s\n", fourth);

	strcpy(three, two);
    printf("copy=%s\n", three);

    int compare = strcmp(one, two); 
    if (compare<0)
    {
    	printf("one is smaller than two\n");
    	
    }
    else if (compare==0)
    {
    	printf("one is equal to two\n");
    }
    else
    {
    	printf("one is larger than two\n");
    }

    int j = -1;
    for (int i = 0; i < strlen(two); ++i)
    {
        if (two[i] == charac)
        {
           j = i;
           break;
        }
    }

    if (j == -1)
    {
        printf("The character is not in the string\n");
    }
    else
    {
        printf("position=%d\n", j);
    }

    return 0; 
} 