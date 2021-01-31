/*
CH-230-A
a5 p1c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
void callfunc(int n, char ch)
{
	for (int i = n; i != 0; --i)/*printing chars in triangle*/
	{
		for (int j = i; j != 0; --j)/* horizontal printing for i times*/
		{
			printf("%c", ch);
		}
		printf("\n");
	}
}
int main()
{
	int n;
	char ch;
	scanf("%d",&n);
	getchar();/*to avoid new lines*/
	scanf("%c", &ch);
	callfunc(n,ch);
	return 0;
}
/*
CH-230-A
a5 p2.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>

void divby5(float arr[], int size)
{
	for (int i = 0; i < size; ++i)
		/*dividing each array by 5*/
	{
		arr[i] = arr[i] /  5;
	}
}

int main()
{
	float array[6] = {5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
	printf("Before:\n");
	for (int i = 0; i < 6; ++i)
	{
		printf("%.3f ", array[i]);
		/*printing elements before divinding by 5*/
	}
	printf("\n");
	divby5(array, 6);
	/*calling fucntion*/
	printf("After:\n");
	for (int i = 0; i < 6; ++i)
	{
		printf("%.3f ", array[i]);
		/* arrays acts as a pointer*/
	}
	printf("\n");
	return 0;
}
/*
CH-230-A
a5 p3.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>

int count_lower(char* str)
 {
 	int count = 0;
	for (ptr = &str[0]; (*ptr) != ''; ptr++) {
 		 if (*ptr >= 'a' && *ptr <= 'z')
 		/*comparing ascii code*/
 		{
 			count= count + 1;
 			/*count of lowercase char*/
 		}
 	}
 	printf("%d\n", count);
 	return 0;
 }

int main()
{
	char *str[50];
	while(1)
	{
	fgets(*str, sizeof(str), stdin);
	/*taking input*/
	if (*str[0]== '\n') 
	/*exiting loop in enetering \n*/
	{
		break;
	}
	count_lower(*str);
	/*function for counting lowecase*/
	}
	return 0;
}

/*
CH-230-A
a5 p4.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

void divby5(float *p, int size)
{
	for (int i = 0; i < size; ++i)
		/*dividing each array by 5*/
	{
		*(p + i) = *(p + i) / 5;
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	float *p;
	p = (float*) malloc(n*sizeof(int));
	for (int i = 0; i < n; ++i)
	{
		scanf("%f", (p+i));

	}
	printf("Before:\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%.3f ", *(p + i));
		/*printing elements before divinding by 5*/
	}
	printf("\n");
	divby5(p, n);
	/*calling fucntion*/
	printf("After:\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%.3f ", *(p + i));
		/* arrays acts as a pointer*/
	}
	printf("\n");
	free(p);
	return 0;
}//check for null pointer which i haevnt

/*
CH-230-A
a5 p5.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>

double scalar_product(double v[], double w[], int n)
{
	double sumpro = 0;
	for (int i = 0; i < n; ++i)
	{
		 		
		sumpro = sumpro + v[i] *  w[i];
	}
	return sumpro;
}

void highandlow_v(double v[], int n)
/* to  compare highest and lowest componnets in v*/
{
	double highestV = v[0];
	double lowV = v[0];
	int postionoflowest, postionofhighest; 
	for (int i = 0; i < n-1; ++i)
	/*comparing till n-1 for includig all elements*/
	{
		if (lowV > v[i+1])
		{
			lowV = v[i+1]; 
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (lowV ==  v[i])
		{
			postionoflowest = i;
			break;
		}
	}
	printf("The smallest = %lf\n", lowV);
	printf("Position of smallest = %d\n", postionoflowest);
	for (int i = 0; i < n-1; ++i)
	/*comparing till n-1 for includig all elements*/
	{
		if (highestV < v[i+1])
		{
			highestV = v[i+1]; 
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (highestV ==  v[i])
		{
			postionofhighest = i;
			break;
		}
	}
	printf("The largest = %lf\n", highestV);
	printf("Position of largest = %d\n", postionofhighest);
}

void highandlow_w(double w[], int n)
/* to  compare highest and lowest componnets in w*/
{
	double highestW = w[0];
	double lowestW = w[0];
	int postionoflowest, postionofhighest; 

	for (int i = 0; i < n-1; ++i)
	/*comparing till n-1 for includig all elements*/
	{
		if (lowestW > w[i+1])
		{
			lowestW = w[i+1]; 
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (lowestW ==  w[i])
		{
			postionoflowest = i;
			break;
		}
	}
	printf("The smallest = %lf\n", lowestW);
	printf("Position of smallest = %d\n", postionoflowest);
	
	for (int i = 0; i < n-1; ++i)
	/*comparing till n-1 for includig all elements*/
	{

		if (highestW < w[i+1])
		{
			highestW = w[i+1];
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if (highestW ==  w[i])
		{
			postionofhighest = i;
			break;
		}
	}
	printf("The largest = %lf\n", highestW);
	printf("Position of largest = %d\n", postionofhighest);
}

int main()
{
	int n;
	scanf("%d", &n);
	double v[n], w[n];
	for (int i = 0; i < n; ++i)
	/*scanning compoenets of v*/
	{
		scanf("%lf", &v[i]);
	}
	for (int i = 0; i < n; ++i)
	/*scanning compoenets of w*/
	{
		scanf("%lf", &w[i]);
	}
	double vector_product = scalar_product(v,w,n);
	printf("Scalar product=%lf\n",vector_product );
	highandlow_v(v, n);
	highandlow_w(w, n);
	return 0;
}
/*
CH-230-A
a5 p7.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char string1[100], string2[100];
	fgets(string1, 100, stdin);
	fgets(string2, 100, stdin);
	string1[strlen(string1)-1] = '\0';
	/*removing \n from both string*/
	string2[strlen(string2)-1] = '\0';
	int str1 = strlen(string1);
	int str2 = strlen(string2);
	char *str;
	str = (char*) malloc((str1+str2) * sizeof(char));
	strcpy(str, string1);
	/*copyign string1 to allocated memory of str*/
	strcat(str, string2);
	/*concatenating str and string2 in allowed permisses of memeory*/
	printf("Result of concatenation: %s\n", str);
	return 0;
}//dont forget to deallocate memory at end

/*
CH-230-A
a5 p9.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

void readin_elemenst(int ***Arr, int x, int y, int z)
{
    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < y; ++j)
        {
            for (int k = 0; k < z; ++k)
            {
              scanf("%d", &Arr[i][j][k]);
              /*scanning elems for each x dim, y-dim and z-dim*/

            }
        }
    }

}

void printing_planewise(int x, int y, int z, int ***A)
/*here, we analayze plane as [2][2][3]
 matrix as 3 planes of 2*2 matrix*/
{

printf("Section 1:\n");
/*first section of 2*2 matrix where is the last plane is 0: [][][0]*/
    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < y; ++j)
        {
            printf("%d ", A[i][j][0]);
        }
        printf("\n");
    }

printf("Section 2:\n");
/*first section of 2*2 matrix where is the last plane is 1: [][][1]*/

    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < y; ++j)
        {
            printf("%d ", A[i][j][1] );
        }
        printf("\n");
    }

printf("Section 3:\n");
/*first section of 2*2 matrix where is the last plane is 2: [][][2]*/

    for (int i = 0; i < x; ++i)
    {
        for (int j = 0; j < y; ++j)
        {
            printf("%d ", A[i][j][2] );
        }
        printf("\n");
    }
}

int main()
{
    int x, y, z;
    scanf("%d%d%d", &x, &y, &z);
    int i,j;
    int *** array = (int ***)malloc(x*sizeof(int**));
    /*allocating memory for 3 dimenson going from one layer to other*/
    if (array == NULL)
    {
        printf("Memeory not allocated\n");
    }

    for (i = 0; i< x; i++)
    {
        array[i] = (int **) malloc(y*sizeof(int *));

        for (j = 0; j < y; j++)
        {
          array[i][j] = (int *)malloc(z*sizeof(int));
        }

    }
    readin_elemenst(array, x, y, z);  
    printing_planewise(x,y,z, array); 
    for (i = 0; i< x; i++)
    /*freeing memeory similarly as it was allacated*/
    {
        for (j = 0; j < y; j++)
        {
          free(array[i][j]);
        }
        free(array[i]);

    }
    free(array);    
    return 0;
}
#include <stdio.h>

void recursive_function(int n)
{
	if (n > 0)/* condtion when the recursion stops*/
	{
		printf("%d,", n);
		recursive_function(n-1);/*calling recursive function*/
	}
}

int main()
{
	int n;
	scanf("%d", &n);
	recursive_function(n);
	return 0;
}

/*
CH-230-A
a5 p11.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
int m;
int recursive_function(int n)
{
	if (m==1)
	/*checking value we get after each recursion. If
	it reaches 1 that means it wasn't divided by any 
	of the previous numbers and is prime*/
	{
		return 1;
	}
	else if (n == 1)
	/*1 is not considered prime no*/
	{
		return 0;
	}
	else if (n%m==0)
	/*if the remainder is 0, then it is not prime*/
	{
		return 0;
	}
	else
	{
		m = m - 1;
		/* decrementing m by 1 to check if it is divisible
		by next small number*/
		return recursive_function(n);
	}

}

int main()
{
	int n;
	scanf("%d", &n);
	m = n/2;
	/*the numbe at max can have it's half as factor*/
	int return_value = recursive_function(n);
	/*storing return value form our recursive  func*/
	if (return_value == 0 )
	{
		printf("%d is not prime\n", n);
	}
	else if (return_value == 1)
	{
		printf("%d is prime\n", n);
	}
	return 0;
}