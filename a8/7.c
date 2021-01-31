/*
CH-230-A
a8 p7.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	/*file pointers*/
	FILE *fptr1;
	FILE *fptr2;
	FILE *fptr3;

	fptr1= fopen("text1.txt", "r");
	fptr2= fopen("text2.txt", "r");
	fptr3= fopen("merge12.txt", "w");

	/*if file pointer fails to load file, they reutrn NULL*/
	if (fptr1 == NULL || fptr2 == NULL || fptr3 == NULL)
	{
		printf("Error\n");
		exit(1);
	}

	char ch[50];
	while(fgets(ch, sizeof(ch), fptr1)  != NULL)
	/*fgets return null when EOF is reached, and stops
	writing file in third file
	using fgets to get input line by line*/
	{
		fputs(ch, fptr3);
	}

	/*this line is optional. if we simply want the file
	to be copied we can omit this line, but for better 
	readability and understandibility of change we can use it*/
	//fputc('\n', fptr3);


	while( fgets(ch, sizeof(ch), fptr2) != NULL)
	{
		fputs(ch, fptr3);
	}

	/*closing files*/
	fclose(fptr1);
	fclose(fptr2);
	fclose(fptr3);

	return 0;
}