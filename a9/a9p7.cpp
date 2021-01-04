/*
CH-230-A
a9 p7.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
using namespace std;

void swapping(int &a, int &b) //swap ints
/*using temp to store temporaary variable*/
{
	int temp = a;
	a = b;
	b = temp;
}

void swapping(float &x, float &y)
{
	float temp = x;
	x = y;
	y = temp;
}

void swapping(const char *&str1, const char *&str2)
/* *&str1 points to the pointer of str1*/
{
	const char *temp = str1;
	str1 = str2;
	str2 = temp;
}

int main(void) {
int a = 7, b = 15;
float x = 3.5, y = 9.2;
const char *str1 = "One";
const char *str2 = "Two";
cout << "a=" << a << ", b=" << b << endl;
cout << "x=" << x << ", y=" << y << endl;
cout << "str1=" << str1 << ", str2=" << str2 << endl;
swapping(a, b);
swapping(x, y);
swapping(str1, str2);
cout << "a=" << a << ", b=" << b << endl;
cout << "x=" << x << ", y=" << y << endl;
cout << "str1=" << str1 << ", str2=" << str2 << endl;
return 0;
}





