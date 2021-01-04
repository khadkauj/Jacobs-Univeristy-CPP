/*
CH-230-A
a11 p5.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include "Shapes.h"
#include <iostream>
using namespace std;

int main(int argc, char** argv) {

	//the commented code in this section can
	//be used to check and see the results
	//they all work perfectly

	// Shape sh1;
	// Shape sh2("GaintShape");
	// sh1.printName();
	// sh2.printName();

	// CenteredShape cs1;
	// CenteredShape cs2("Regularshape", 3, 2);
	// cs1.printName();
	// cs2.printName();

	// RegularPolygon rp1;
	// RegularPolygon rp2("TRIANGLE", 1, 1, 3);
	// rp1.printName();
	// rp2.printName();

	Circle c1;
	Circle c2("firstcircle", 3, 4, 8);
	c1.printName();
	c2.printName();
	cout<<endl<<c1.area()<<endl;
	cout<< endl<< c2.perimeter()<<endl;

	Rectangle rect1;
	Rectangle rect2("first Rectangle", 7, 8, 3, 2);
	rect1.printName();
	rect2.printName();
	cout<< endl<< rect1.area() <<endl;
	cout<< endl<< rect2.perimeter() <<endl;

	Square s1;
	Square s2("first square", 3, 4, 5);
	s1.printName();
	s2.printName();
	cout<< endl<< s1.area() <<endl;
	cout<< endl<<s2.perimeter() <<endl;	
	return 0;
}