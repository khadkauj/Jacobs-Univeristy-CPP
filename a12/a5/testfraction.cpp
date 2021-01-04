/*
CH-230-A
a12 p5.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	//two fractions
	Fraction f;
	cin>>f;
	Fraction g;
	cin>>g;
	
	//boolean comparison
	if (f > g)
	{
		cout<<f;	
	}
	else
	{
		cout<<g;
	}

	//addtion
	Fraction Add = f + g;
	cout<<Add;

	//subtraction
	Fraction Sub = f - g;
	cout<<Sub;

}