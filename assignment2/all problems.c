#include <stdio.h>

int main()
{
double a, b, sum, difference, square;
int c, d, sumint, productint;
char x, y;
		 	scanf("%lf", &a);
		 	scanf ("%lf", &b);
		 	scanf("%d", &c);
	        scanf("%d", &d);
		 	getchar();
	        scanf("%c", &x);
	        getchar();
	        scanf("%c", &y);
			sum = a + b;
		 	printf ("sum of doubles=%lf\n",sum);
	        difference = a-b;
	    	printf ("difference of doubles=%lf\n",difference);
	        square = a*a;
			printf ("square=%lf\n",square);
	        sumint = c+d;
	        productint = c*d;
	        printf("sum of integers=%d\n",sumint);
	        printf("product of integers=%d\n",productint);
            int sumcha = x+y;
            int proch = x*y;
            printf("sum of chars=%d\n",sumcha);
            printf("product of chars=%d\n",proch);
            printf("sum of chars=%c\n",sumcha);
            printf("product of chars=%c\n",proch);

return 0;
}


a2
#include <stdio.h>

int main()
{
	char c;
	scanf("%c", &c);
	printf("character=%c\n", c);
	printf("decimal=%d\n", c);
	printf("octal=%o\n", c);
	printf("hexadecimal=%x\n", c);

	return 0;
}

/*
CH-230-A
a2 p3.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>

int main()
{
	int w,d,h, sum; //taking req input
	scanf("%d\n %d\n %d",&w, &d, &h);
	sum = (w*7*24) + (d*24) + h; //a week has 7 days and a day has 24 hrs
 	printf("Totalhour:%d\n", sum);
	return 0;
}


 

 /*
CH-230-A
a2 p4.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
int main(){
	float a,b,h;
	scanf("%f\n %f\n %f", &a,&b,&h); //we scanned require values//
	printf("square area=%.6f\n",a*a);//we computer our areas with their mathematical formulas)
	printf("rectangle area=%.6f\n",a*b);
	printf("triangle area=%.6f\n",(a*h)/2);
	printf("trapezoid area=%.6f\n",(h*(a+b))/2);
	return 0;
}

/*
CH-230-A
a2 p7.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
int main()
{
int i = 8;
while (i >= 4) { /*add paranthesis so compiler understands what is statement of the loop*/
printf("i is %d\n", i);
i--;
}
printf("That's it.\n");
return 0;
}
  

  /*
CH-230-A
a2 p8.c
ujjwal khadka
u.khadka@jacobs-university.de
*/

#include <stdio.h>
int main()
{
int num,a,b;
scanf("%d",&num);
a = num % 2; //evaluation mod of num
b = num % 7;
	if (a==0 && b==0) { /*incase if mod is 0, the remainder is zero and it is divisible*/
		printf("The number is divisible by 2 and 7\n");
	} 
	else {
		printf("The number is NOT divisible by 2 and 7\n");
	}
return 0;
}

/*
CH-230-A
a2 p9.c
ujjwal khadka
u.khadka@jacobs-university.de
*/

#include <stdio.h>
int main()
{
	char p;
	scanf("%c", &p);
		if (p>47 && p<58) /*we compare ASCII values of our code in if else statement*/ 
		{
			printf("%c is a digit\n", p);
		}
		else if ( p>64 && p<91)
		{
			printf("%c is a letter\n",p );
		}
		else if (p>96 && p<123)
		{
			printf("%c is a letter\n", p);
		}
		else
		{
			printf("%c is some other symbol\n",p );
		}


	return 0;
}