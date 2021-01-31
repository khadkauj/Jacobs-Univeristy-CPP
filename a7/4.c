/*
CH-230-A
a7 p4.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

void uppercase(char ch_2[])
{

	for (int i = 0; ch_2[i] != '\0'; ++i)
	{	
		printf("%c", toupper(ch_2[i]));
		/*toupper to convert anything to uppercase*/
	}
}

void lowercase(char ch_2[])
{

	for (int i = 0; ch_2[i] != '\0'; ++i)
		/*to lower to convert anything to lowercase*/
	{	
		printf("%c", tolower(ch_2[i]));
	}
}

void UP_low_and_viceversa(char ch_2[])
{
	for (int i = 0; ch_2[i] != '\0'; ++i)
	{
		/*sorting out uperr and lowercase and chaning it to
		the other one*/
		if (ch_2[i] > 96 && ch_2[i] < 123)
		{
			printf("%c", toupper(ch_2[i]));
		}
		else if (ch_2[i] > 64 && ch_2[i] < 91)
		{
			printf("%c", tolower(ch_2[i]));
		}
		else
		{
			printf("%c",ch_2[i]);
		}
	}
}

int main()
{
	char ch_1[100];
	/*input upto 99 chars for the string*/
	char ch_2[100];
	char ch_3;
	fgets(ch_1, sizeof(ch_1), stdin);
	strcpy(ch_2, ch_1);
	/*copying to other string*/
	ch_3  = '0';
	scanf("%c", &ch_3);
	getchar();
	while(ch_3 != '4')
	/*enter 4 to end the execution*/
	{
		void (*fun_ptr_arr[3])(char*);
		/*function pointer array that points 
		different functions*/
		fun_ptr_arr['1'] = &uppercase;
		fun_ptr_arr['2'] = &lowercase;
		fun_ptr_arr['3'] = &UP_low_and_viceversa;
		(*fun_ptr_arr[(int)ch_3])(ch_2);
		/*indices for arrays are ints; we insert it as int*/
		scanf("%c", &ch_3);
		getchar();
	}
	return 0;
}