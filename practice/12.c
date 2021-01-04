#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


// struct river {
// char name[40];
// int length;
// int drainage_area;
// };

int main(int argc, char const *argv[])
{
	FILE *fptr;
	fptr = fopen("data.txt",  "r");
	if (fptr == NULL)
	{
		printf("%s\n","njd" );
		exit(1);
	}
	int count = 0;
	while(!feof(fptr))
	{
		if(fgetc(fptr) == '\n')
		{
			count = count + 1;
		}
		count = count + 1;
	}

	for (int i = 0; i < count; ++i)
	{
		struct river r[i];
		fscanf(fptr, "%s", &r[i].name);
		fscanf(fptr, "%d", &r[i].length);
		fscanf(fptr, "%d", &r[i].drainage_area);
	}

	return 0;
}