/*
CH-230-A
a12 p1.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include "Shapes.h"
using namespace std;

int main(int argc, char const *argv[])
{
	//commented section can be used to check
	//the validity of methods

	//two Hexagons

	Hexagon h1("BlueHexagon", 0, 0, 6, 9, "blue");
	//h1.printName();

	Hexagon h2("GreenHexagon", 0, 0, 6, 15, "green");
	//h2.printName();

	//third hexagon using copy constructor

	Hexagon h3 = h2;

	//perimeter and area of 3 construtors
	//respectively
	cout<<h1.perimeter()<<endl;
	cout<<h1.area()<<endl;

	cout<<h2.perimeter()<<endl;
	cout<<h2.area()<<endl;

	cout<<h3.perimeter()<<endl;
	cout<<h3.area()<<endl;
	
	return 0;
}