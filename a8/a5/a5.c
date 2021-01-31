/*
CH-230-A
a8 p5.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
	char ch[1];
	/*to store first two chars*/
	FILE *fptr;
	/*pointer ot file*/
	fptr = fopen("chars.txt","r");
    if (fptr == NULL)
    /*checks if file was laoded*/
    {
    	printf("Error! opening file");
        exit(1);
    }
	for (int i = 0; i < 2; ++i)
	/*loop to read two chars from file*/
	{
		fscanf(fptr, "%c", &ch[i]);
	}
	int ASCIISUM = ch[0] + ch[1];
	/*sum of two chars in decimal*/
	FILE  *fptr1;
	fptr1 = fopen("codesum.txt", "w");
	if (fptr1 == NULL)
	{
		printf("Error!\n");
		exit(1);
	}
	fprintf(fptr1, "%d\n", ASCIISUM);
	/*writing decimal in new file*/
	fclose(fptr);
	fclose(fptr1);
	return 0;
}