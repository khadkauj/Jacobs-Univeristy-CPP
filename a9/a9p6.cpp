/*
CH-230-A
a9 p6.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include <array>
using namespace std;

int myfirst(int *arr)
/*returns the first positive and even value
from the array.*/
{
	for (int i = 0; i < 7+1; ++i)
	{
		if (!(arr[i] % 2) && (arr[i] >= 0))
		{
			return arr[i];
		}
	}
	return -1;
}

double myfirst(double *aryy_double)
/*returns the first negative element which
does not have a fractional part*/
{
	for (int i = 0; i < 7+1; ++i)
	{
		/*compariosn if not fractional and if less than 0*/
		if ((aryy_double[i] == (int)aryy_double[i]) && (aryy_double[i] < 0))
		{
			return aryy_double[i];
		}
	}
	return -1.1;
}

char myfirst(char *aryy_char)
/*returns the first element which is a consonant*/
{
	for (int i = 0; i < 7+1; ++i)
	{
		if (aryy_char[i] == 'A' || aryy_char[i] == 'E' || 
			aryy_char[i] == 'I' || aryy_char[i] == 'O' ||
			aryy_char[i] == 'U' || aryy_char[i] == 'a' || 
			aryy_char[i] == 'e' || aryy_char[i] == 'j' ||
			aryy_char[i] == 'o' || aryy_char[i] == 'u')
		{	
		}
		else if ((aryy_char[i] >= 'A' && aryy_char[i <= 'Z']))
		{
			return aryy_char[i];
		}
		else if (aryy_char[i] >= 'a' && aryy_char[i <= 'z'])
		{
			return aryy_char[i];
		}
	}
	return '0';
}

int main(int argc, char const *argv[])
{
	int aryy_int[8] = {1,3,-6,8,9,3,0};
	double aryy_double[8] = {1,7.6, -89.5, 87, -6, 8, 45, 11};
	char aryy_char[8] = {'e','a','f','h','f','e','a','l'};
	cout<<myfirst(aryy_int)<<endl;
	cout<<myfirst(aryy_double)<<endl;
	cout<<myfirst(aryy_char)<<endl;
	return 0;
}