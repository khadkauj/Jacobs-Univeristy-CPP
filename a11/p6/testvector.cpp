/*
CH-230-A
a11 p6.c
ujjwal khadka
u.khadka@jacobs-university.de
*/
#include <iostream>
#include "Vector.h"
using namespace std;

int main(int argc, char const *argv[])
{
	//commented section can be used to check
	//the validity of intances and methods

	//v1,v2,v3, and v4 are four instances

	Vector v1;
	//v1.printV();

	double *ptrv2;
	ptrv2 = new double[3] {2,5,7};
	Vector v2(3, ptrv2);
	// v2.printV();

	Vector v3 = v2;
	// v3.printV();


	double *ptrv4;
	ptrv4 = new double[3] {3,0,-2};
	Vector v4(3, ptrv4);
	//v3.printV();

	cout<<v2.norm()<<endl<<endl;
	(v2.add(v4)).printV();
	cout<<endl;
	(v2.sub(v4)).printV();
	cout<<endl;
	(v2.scalar_prod(v4)).printV();
	cout<<endl;
	//deleting alloc memeory in main func
	delete []ptrv2;
	delete []ptrv4;

	return 0;
}