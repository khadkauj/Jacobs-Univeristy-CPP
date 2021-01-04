#include <iostream>
/*
CH-230-A
a10 p8.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include "Complex.h"

using namespace std;

int main() {
	//inputs
	int x1,y1;
	int x2,y2;
	cin>>x1>>y1>>x2>>y2;
	//objects
	Complex c1(x1,y1);
	Complex c2(x2, y2);

	c1.print();
	c2.print();
	
	c1.conjugate().print();
	c2.conjugate().print();
	//adding c2 to c1 by providing
	//c2 as parameter inside a method
	//add inside an object c1
	c1.add(c2).print();
	c1.sub(c2).print();
	c1.mul(c2).print();

	return 0;
}