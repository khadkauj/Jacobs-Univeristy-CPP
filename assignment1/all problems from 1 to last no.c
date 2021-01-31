/*
CH-230-A
a1 p1.[c]
ujjwal khadka
ukhadka@jacobs-university.de
*/

#include <stdio.h>
	int main() {
	double result; 
	/* we can't divide two integers and get float 
	as a result, so it returns 0.000. Adding .0 
	at the end of integers makes the divison sensible. */
	result = (3.0 + 1.0) / 5.0;
	printf("The value of 4/5 is %lf\n", result);
	return 0;
	}

	/*
CH-230-A
a1 p.2[c]
ujjwal khadka
ukhadka@jacobs-university.de
*/

#include <stdio.h>
int main() {
int result; /* The result of our calculation */
result = (2 + 7) * 9 / 3;
printf("The result is %d\n", result);
return 0;
}
 /* 1. variable "result" wasn't absent in 5th line,
    2. multiplication sign was confused with asterik sign */

    /*
CH-230-A
a1_p3.c
ujjwal khadka
u.khadka@jacobs-university.de
*/

#include <stdio.h>
	int main() {
		float result;
		float a = 5.0;
		float b = 13.5;
		result = a / b;
			printf("The result is %f\n", result);
		return 0;
	}

/*  1. no # sign before "include"
	2. b is float but has been registered as integer
	3. we can't expect to divide integers and get float
	4. registering everything as float will solve the error */

	/*
CH-230-A
a1_p4.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
	int main()
	{
		int x, y, sum, product, difference, remainder;
		float division;
			x = 17, y=4;
			sum = x + y;
			product = x * y;
			difference = x - y;
			division = (float)x/y;
			remainder =  x%y;
				printf("x=%d\n",x );
				printf("y=%d\n",y );
				printf("sum=%d\n", sum);
				printf("product=%d\n", product);
				printf("difference=%d\n", difference);
				printf("division=%f\n", division);
				printf("remainder of division=%d\n",remainder );
		return 0;
	}

/* Type casting is used to conver int to float" */

/*
CH-230-A
a1_p5.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
	int main()
	{
		int x = 2138; 
		float y= -52.358925;
		char z= 'G';
		double u = 61.295339687;
			printf("x=%9d\n",x);
			printf("y=%11.5f\n",y);
			printf("z=%c\n",z);
			printf("u=%.7lf\n",u);
		return 0;
	}

	/*
CH-230-A
a1_p6.c
ujjwal khadka
u.khadka@jacobs-university.de
*/

#include <stdio.h>
	int main()
	{
		char c = 'F';		

			printf("The third character after (c -> F) is %c and its ASCII value is %d\n ", c+3, c+3);

				return 0;
	}

	/* 1. "F" was initialzed as our char value. Adding 3 would increase its value
	       by 3 and %c would print it as char and %d as ASCII value. */