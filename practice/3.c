#include <stdio.h>
#include <stdlib.h>


int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	int *array = (int*) malloc(n * sizeof(int));
	for (int i = 0; i < n; ++i)
	{
		scanf("%d", &array[i]);	
	}


	FILE *fptr;
	fptr = fopen("squares.txt", "w");
	if (fptr == NULL)
	{
		printf("hii\n");
	}
	for (int i = n-1; i >= 0; --i)
	{
		fprintf(fptr, "%d %d \n",array[i], array[i] * array[i] );
	}


	return 0;
}