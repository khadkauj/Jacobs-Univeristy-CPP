/*
CH-230-A
a10 p4.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include <cstdlib>
#include "Critter.h"

using namespace std;

int main(int argc, char** argv)
{
	//four instances of class
	Critter c1;
	c1.print();
	cout<<endl;

	Critter c2("Gabbru");
	c2.print();
	cout<<endl;

	Critter c3("hemu", 10, 20, 15);
	c3.print();
	cout<<endl;

	Critter c4("shamu", 15, 11);
	c4.print();
	cout<<endl;

	//setting hunger of all classes to 2
	c1.setHunger(2);
	c2.setHunger(2);
	c3.setHunger(2);
	c4.setHunger(2);
    return 0;
}