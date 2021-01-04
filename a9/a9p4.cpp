/*
CH-230-A
a9 p4.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include <string>
using namespace std;

/*two function with same retur tye but diff parameteres*/

int mycount(int x, int y)
{
	/*return int type of y-x*/
	return y-x;
}

int mycount(char c, string str)
{
	int count = 0;
	/*string has \0 at end*/
	for (int i = 0; str[i] != '\0'; ++i)
	{
		if (str[i] == c)
		{
			count++;
		}
	}
	return count;
}

int main(int argc, char const *argv[])
{
	/*arbitrary example*/
	cout<<mycount(3, 10)<<endl;
	cout<<mycount('c', "come on come on")<<endl;
	return 0;
}