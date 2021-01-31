/*
CH-230-A
a8 p6.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	char file1_name[30], file2_name[30];
	/*two filesname*/
	fgets(file1_name, sizeof(file1_name), stdin);
	/*getting files name, they are expected to be entered
	wih their extension. otherwise we can,
	concat them using concat(file1_name, ".txt")*/
	file1_name[strlen(file1_name) - 1] = '\0';
	fgets(file2_name, sizeof(file2_name), stdin);
	file2_name[strlen(file2_name) - 1] = '\0';
	
	/*opening two files and reading doubles*/
	FILE *fptr1;
	fptr1 = fopen(file1_name,  "r");
	if (fptr1 == NULL)
	{
		printf("Eror\n");
		exit(1);
	}
	double value_1;
	fscanf(fptr1, "%lf", &value_1);

	FILE *fptr2;
	fptr2 = fopen(file2_name, "r");
	if (fptr2 == NULL)
	{
		printf("Error\n");
		exit(1);		
	}
	double value_2;
	fscanf(fptr2, "%lf", &value_2);

	/*calculate doubles to write in new file*/
	double sum = value_1  + value_2;
	double product = value_1 * value_2;
	double difference = value_2 -  value_1;
	double  division = value_2 / value_1;

	/*writing in new file*/
	FILE *fptr3;
	fptr3 = fopen("results.txt", "w");
	if (fptr2 == NULL)
	{
		printf("Error\n");
		exit(1);		
	}
	/*printinf(writing) in new textfile*/
	fprintf(fptr3, "%lf %lf %lf %lf", sum, difference, product, division);
	
	/*closing files*/
	fclose(fptr1);
	fclose(fptr2);
	fclose(fptr3);
	return 0;
}