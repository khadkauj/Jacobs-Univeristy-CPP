/*
CH-230-A
a12 p4.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include "fraction.h"

using namespace std;

int main(void)
{
	Fraction a(4, 2);
	Fraction b(17, 11);
	Fraction c(5);

	// a.print(); 
	// b.print(); 
	// c.print(); 

	
	//two fractions
	Fraction f;
	cin>>f;
	Fraction g;
	cin>>g;
	//multipication and division
	cout<< f * g;
	cout<< f / g;
}