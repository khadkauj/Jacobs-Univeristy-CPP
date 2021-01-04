/*
CH-230-A
a9 p3.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include <string> 
using namespace std;

float absolute(float x)
{
	if (x < 0)
		/*-x turns neg to pos*/
	{
		return -x;	
	}
	else
	{
		return x;
	}
}

int main(int argc, char const *argv[])
{
	float n;
	cin >> n;
	/*calling absolute func with flaot parameter*/
	float y = absolute(n);
	cout << y << endl;
	return 0;
}
